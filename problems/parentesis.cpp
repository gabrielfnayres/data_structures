#include <bits/stdc++.h>
#define endl '\n'

using namespace std;


void solve(string s){

    stack<char> t;
    
    for(int i = 0; i < s.size(); i++){

        if(s[i] == '('){
            t.push(s[i]);
        } else if(s[i] == '{'){
            t.push(s[i]);
        }


        if(s[i] == ')' && t.top() == '('){
            t.pop();
            if(t.size() == 0){
                break;
            }
        } else if(s[i] == '}' && t.top() == '{'){
            t.pop();
            if(t.size() == 0){
                break;
            }
        }
    }


    if(t.size() == 0){ cout << "correto" << endl;
    } else{
        cout << "incorreto" << endl;
    }
}

int main(){

    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}