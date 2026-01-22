#include <iostream>
#include <queue>

using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i<6; i++){
        queue<int>q[10];
        int du = 1;
        for(int j = 0; j<n; j++){
            int x = arr[j]/du%10;
            q[x].push(arr[j]);
        }
        int ind = 0;
        for(int j=0 ; j<10 ; j++){
            while(!q[j].empty()){
                arr[ind] = q[j].front();
                q[j].pop();
                ind++;
            }
        }
        du *= 10;
    }
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }


    // Please write your code here.

    return 0;
}
