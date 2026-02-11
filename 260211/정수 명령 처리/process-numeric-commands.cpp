#include <iostream>
#include <stack>

using namespace std;

int N;
string command[10000];
stack<int> value;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            int x;
            cin >> x;
            value.push(x);

        }
        else if(command[i] == "size" ){
            cout << value.size() << '\n';
        }
        else if(command[i] == "pop" ){
            cout << value.top() << '\n';
            value.pop();
        }
        else if(command[i] == "empty"){
            if(value.empty()){
                cout << "1" << '\n';
            }
            else{
                cout << "0" << "\n";
            }
        }
        else{
            cout << value.top() << '\n';
        }
    }

    

    // Please write your code here.

    return 0;
}
