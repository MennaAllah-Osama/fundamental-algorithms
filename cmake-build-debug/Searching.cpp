#include <bits/stdc++.h>
using namespace std;

int iterative_sequential_search(int arr[], int size, int target) {
    int index=-1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target){
            index=i;
             break;}
    }
    return index;
}
int recursive_sequential_search(int arr[], int size, int target, int index = 0) {

    if (index == size)
        return -1;

    if (arr[index] == target)
        return index;

    return recursive_sequential_search(arr, size, target, index + 1);
}

int iterative_Binary_search(vector<int>&arr, int key){
    int low=0;
    int high= arr.size()-1;

    while (low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]< key){
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
};
int recursive_Binary_search(vector<int> &arr, int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return recursive_Binary_search(arr, low, mid - 1, x);

        return recursive_Binary_search(arr, mid + 1, high, x);

    }
    return -1;
};


int main() {


    while (true){
        int n;
        cout << "Enter size of array: ";
        cin >> n;
        int arr[n];
        cout << "Enter elements of the array>> ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int target;
        cout << "Enter target value: ";
        cin >> target;

        cout<<"1-Iterative_Sequential_Search\n"
              "2-Recursive_Sequential_Search\n"
              "3-Iterative_Binary_Search\n"
              "4-Recursive_Binary_Search\n";
        int choice;
        cout<<"Enter your choice:";
        cin>>choice;

        if(choice==1){
            int index = iterative_sequential_search(arr, n, target);
            if (index != -1)
                cout << "Target found at index " << index << endl;
            else
                cout << "Target not found." << endl;
        }
        if(choice==2){
            int index = recursive_sequential_search(arr, n, target);
            if (index != -1)
                cout << "Target found at index " << index << endl;
            else
                cout << "Target not found." << endl;
        }
        if (choice==3){
            vector<int> v(arr, arr + n);

            sort(v.begin(), v.end());

            int result = iterative_Binary_search(v, target);
            if(result == -1)
                cout << "Element is not present in array";
            else
                cout << "Element is present at index " << result;
        }
        if (choice==4){
            vector<int> v(arr, arr + n);

            sort(v.begin(), v.end());

            int result = recursive_Binary_search(v,0,n-1, target);
            if(result == -1)
                cout << "Element is not present in array";
            else
                cout << "Element is present at index " << result;
        }


        char repeat;
        cout << "\nDo you want to run again? (y/n): ";
        cin >> repeat;
        if (repeat != 'y' && repeat != 'Y') {
            cout<<"Exiting program...\n";
            break;
        }
    }

    return 0;
}
