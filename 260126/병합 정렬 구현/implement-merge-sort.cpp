#include <iostream>

using namespace std;

int n;
int arr[100000];
int sol[100000];

void merge(int low, int mid, int high){
    int i = low; int j  = mid+1; int k =low;
    while (i<=mid && j<=high){
        if(arr[i] <= arr[j]){
            sol[k] = arr[i];
            k++; i++;
        }
        else{
            sol[k] = arr[j];
            k++; j++;
        }
    }
    while(i<=mid){
        sol[k] = arr[i];
        k++; i++;
    }
    while(j<=high){
        sol[k] = arr[j];
        k++; j++;
    }

    for(int k=low; k<=high; k++){
        arr[k] = sol[k];
    }
}
void merge_sort(int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge(low,mid,high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(0,n-1);

    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    // Please write your code here.

    return 0;
}
