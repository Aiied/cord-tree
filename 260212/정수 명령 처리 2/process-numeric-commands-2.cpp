#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;
string command[10000];
queue<int> A;

int main() {
    cin >> N;
    int x;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> x;
            A.push(x);
        }
        else if(command[i] == "size"){
            cout << A.size() << '\n';

        }
        else if(command[i] == "empty"){
            if(A.empty()){
                cout << "1" << '\n';
            }
            else{
                cout << "0" << '\n';
            }
        }
        else if(command[i] == "pop"){
            cout << A.front() << "\n";
            A.pop();
        }
        else{
            cout << A.front() << '\n';

        }
    }

    // Please write your code here.

    return 0;
}