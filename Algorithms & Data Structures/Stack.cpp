#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> myStack;

    myStack.push(1);

    if(!myStack.empty()){
        cout << "No está vacío";
    }
    myStack.pop();
    if(myStack.empty()){
        cout << "Está vacío";
    }
    myStack.push(1);
    myStack.push(2);
    cout << myStack.top() << endl; // 2
    cout << myStack.size(); // 2

    stack<int> swapme;
    swapme.push(3);
    swapme.push(4);

    myStack.swap(swapme); // intercambio el contenido de los stacks
    

    return 0;
}