#include <bits/stdc++.h>
using namespace std;

int main(){
    string word = "abcdef";
    char ch = 'd';
    stack<char> myStack;
    string s ="";
    bool finished = false;
    for(int i = 0; i < word.size(); i++){
        myStack.push(word[i]);
        if(myStack.top() == ch && finished == false){
            s = "";
            finished = true;
            while(!myStack.empty()){
                s += myStack.top();
                myStack.pop();
            }
        }
        s += word[i];
        
    }
    cout << s;

    return 0;
}