#include <bits/stdc++.h>
using namespace std;

struct Heap{
    vector<int> arr;

    int parent(int i) {
        return (i - 1) / 2;
    }

    int left(int i) {
        return 2 * i + 1;
    }

    int right(int i) {
        return 2 * i + 2;
    }

    void insert(int value) {
        arr.push_back(value);
        int i = arr.size() - 1;
        while (i > 0 && arr[parent(i)] < arr[i]) {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void heapify(int i) {
        int l = left(i);
        int r = right(i);
        int largest = i;

        if (l < arr.size() && arr[l] > arr[largest])
            largest = l;
        if (r < arr.size() && arr[r] > arr[largest])
            largest = r;

        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(largest);
        }
    }


    int extractMax() {

        int root = arr[0];
        arr[0] = arr.back();
        arr.pop_back();

        if (!arr.empty())
            heapify(0);

        return root;
    }

    int extractMin() {

        int min = arr[0];
        int index = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < min) {
                min= arr[i];
                index = i;
            }
        }
        arr[index] = arr.back();
        arr.pop_back();

        heapify(index);
        return min;
    }
    vector<int> heapSort() {
         vector<int> temp = arr;
        vector<int> sorted;


        while (!arr.empty()) {
            int maxVal = extractMax();
            sorted.push_back(maxVal);
        }

         arr = temp;

         reverse(sorted.begin(), sorted.end());
        return sorted;
    }

};
struct PriorityQueue {
    Heap h;
    void push(int value) {
        h.insert(value);
    }

    int pop() {
        return h.extractMax();
    }

    bool empty() {
        return h.arr.empty();
    }
};
int main() {
    Heap heap;
    PriorityQueue pq;
    int mainChoice, choice, value;

    while (true) {
        cout << "\n========== MAIN MENU ==========\n";
        cout << "1. Use Heap\n";
        cout << "2. Use Priority Queue\n";
        cout << "3. Exit\n";
        cout << "Choose: ";
        cin >> mainChoice;

        if (mainChoice == 1) {
            while (true) {
                cout << "\n------ HEAP MENU ------\n";
                cout << "1. Insert\n";
                cout << "2. Extract Max\n";
                cout << "3. Extract Min\n";
                cout << "4.Heap Sort\n";
                cout << "5. Back to Main Menu\n";


                cout << "Choose: ";
                cin >> choice;

                if (choice == 1) {
                    cout << "Enter value: ";
                    cin >> value;
                    heap.insert(value);
                } else if (choice == 2) {
                    if (heap.arr.empty()) cout << "Heap empty!\n";
                    else cout << "Max: " << heap.extractMax() << endl;
                } else if (choice == 3) {
                    if (heap.arr.empty()) cout << "Heap empty!\n";
                    else cout << "Min: " << heap.extractMin() << endl;
                }else if (choice == 4) {
                    if (heap.arr.empty()) cout << "Heap empty!\n";
                    else {
                        vector<int> sorted = heap.heapSort();
                        cout << "Sorted elements: ";
                        for (int x : sorted) cout << x << " ";
                        cout << endl;
                    }
                }
                else if (choice == 5) break;
                else cout << "Invalid!\n";
            }
        } else if (mainChoice == 2) {
            // Priority Queue Menu
            while (true) {
                cout << "\n---- PRIORITY QUEUE MENU ----\n";
                cout << "1. Insert\n";
                cout << "2. Extract Highest Priority\n";
                cout << "3. Back to Main Menu\n";
                cout << "Choose: ";
                cin >> choice;

                if (choice == 1) {
                    cout << "Enter value: ";
                    cin >> value;
                    pq.push(value);
                } else if (choice == 2) {
                    if (pq.empty()) cout << "Queue empty!\n";
                    else cout << "Highest Priority: " << pq.pop() << endl;
                } else if (choice == 3) break;
                else cout << "Invalid!\n";
            }
        } else if (mainChoice == 3) {
            cout << "Goodbye!\n";
            break;
        } else {
            cout << "Invalid option!\n";
        }
    }
    return 0;
}
