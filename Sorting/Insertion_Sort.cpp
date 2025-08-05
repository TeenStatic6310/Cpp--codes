void selectionSort(vector<int>&arr) {
    // Write your code here.
    // n - 1 rounds chalenge
    int n = arr.size();
    for(int i = 1 ; i < n ; i ++){
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                // shifting
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
