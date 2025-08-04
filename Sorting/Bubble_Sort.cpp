// Code 

#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {  
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cin >> size;

    int nums[5] = {10, 1, 7, 6, 9};  

    BubbleSort(nums, 5);  
    return 0;
}


// Code the Leetcode : 

/*
#include <bits/stdc++.h> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << endl;
}
*/
