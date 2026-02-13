#include <iostream>
#include <string>
#include <deque>

using namespace std;

int N;
string cmd[10000];
deque<int> num;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front" || cmd[i] == "push_back") {
            int x;
            cin >> x;
            if(cmd[i] == "push_front"){
                num.push_front(x);
            }
            else{
                num.push_back(x);
            }
        }
        else if (cmd[i] == "pop_front"){
            cout << num.front()<< '\n';
            num.pop_front();
        }
        else if (cmd[i] == "pop_back"){
            cout << num.back()<< '\n';
            num.pop_back();
        }
        else if (cmd[i] == "size"){
            cout << num.size() << '\n';

        }
        else if (cmd[i] == "front"){
            cout << num.front() << '\n';
        }
        else if (cmd[i] == "back"){
            cout << num.back() << '\n';
        }
        else{
            if(num.empty()){
                cout << "1" << '\n';
            }
            else{
                cout << "0" << '\n';
            }

        }
    }

    // Please write your code here.

    return 0;
}
