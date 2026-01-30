#include <iostream>

using namespace std;

int n;
int arr[100001];

void heapify(int x,int max){

    int largest = x;
    if(arr[largest]<arr[x*2] && x*2 <= max){
        largest = x*2;
    }
    if(arr[largest]<arr[x*2+1] && x*2+1 <=max){
        largest = x*2+1;
    }

    if(largest != x){
        int tmp = arr[largest];
        arr[largest] = arr[x];
        arr[x] = tmp;
        heapify(largest,max);
    }
}

void heap_sort(){
    
    for(int i = n/2; i>=1; i--){
        heapify(i,n);
    }

    
    for(int i = n; i>1; i--){
        int tmp = arr[1];
        arr[1] = arr[i];
        arr[i] = tmp;
        heapify(1,i-1);
        
    }
}


int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    heap_sort();

    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }



    // Please write your code here.

    return 0;
}
