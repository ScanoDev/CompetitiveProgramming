#include <iostream>
#include <vector>
using namespace std;

int main(){
    string t;
    cin >> t;
    string word = "WUB";
    vector<char> v;
    size_t found = t.find(word);

    while(found != string::npos){
        t.replace(found, word.length(), " ");
        found = t.find(word, found+1);
    }

    cout << t;

    return 0;
}