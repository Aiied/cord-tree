#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    bool x = true;
    stack<int> s;
    for(int i = 0; i<str.size(); i++){
        if(str[i] == '('){
            s.push(1);
        }
        else if(str[i] == ')' && !s.empty()){
            s.pop();
        }
        else{
            x = false;
            break;
        }
    }
    if(!x || !s.empty()){
        cout << "No";
    }
    else{
        cout << "Yes";
    }

    // Please write your code here.

    return 0;
}
