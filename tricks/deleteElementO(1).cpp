#include <bits/stdc++.h>

using namespace std;
vector<int> v = {10,20,30,40,50};
void removeAt(int i){
    v[i] = v.back(); // Move the last element to the position i
    v.pop_back(); // Remove the last element
}

int main(){
    //here we dont' care about the order

    removeAt(1); //eliminar el indice 1
}

//Eliminar con valor:

/*
unordered_set<int> s = {10, 20, 30, 40, 50}; //unordered_set es un cnjunto
s.erase(30);  // O(1) promedio

// Pero no hay concepto de "índice"
*/