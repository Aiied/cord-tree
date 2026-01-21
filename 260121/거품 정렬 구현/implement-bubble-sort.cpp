#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool comp;
    do {
        comp = true;
        for(int i = 0; i<n-1 ; i++){
            if(arr[i] > arr[i+1]){
                int tmp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tmp;
                comp = false;
            }
        }

    } while(!comp);

    for(int i = 0; i<n ; i++){
        cout << arr[i] << ' ';
    }

    // Please write your code here.

    return 0;
}
