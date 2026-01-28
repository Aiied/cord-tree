#include <iostream>

using namespace std;

int n;
int arr[100000];


void quick_sort(int low, int high){
    if(low>=high) return;
    int pivot = low;
    int i = low+1;
    int j = high;
    int tmp;

    while(i<=j){
        while(arr[i]<arr[pivot]&& i<=high) i++;
        while(arr[j]>=arr[pivot]&&j>low) j--;

        if(i>=j) break;
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    tmp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = tmp;

    quick_sort(low,j-1);
    quick_sort(j+1, high);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quick_sort(0,n-1);
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }



    // Please write your code here.

    return 0;
}
