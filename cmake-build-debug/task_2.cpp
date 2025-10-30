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


int main() {
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
          "2-Recursive_Sequential_Search\n";
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


    return 0;
}
