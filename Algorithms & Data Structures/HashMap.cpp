#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<string, int> hashTable;

    //insert elements
    hashTable["manzana"] = 5;
    hashTable["banana"] = 8;

    //search an element
    cout << "Manzana: " << hashTable["manzana"] << endl;

    //verify if a key exists
    if(hashTable.find("banana") != hashTable.end()){
        cout << "Banana está en: " << hashTable["banana"] << endl;
    }

    //delete an element
    hashTable.erase("manzana");


    return 0;
}   