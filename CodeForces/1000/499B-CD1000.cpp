#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<string, string>> m_list;
    vector<string> n_list(n);

    for(int i = 0; i < m; i++){
        string a, b;
        cin >> a >> b;
        m_list.push_back(make_pair(a,b));
    }

    for(int i = 0; i < n; i++){
        cin >> n_list[i];
    }
    cout << "Pares de m: " << endl;
    for(int i = 0; i < m_list.size(); i++){
        cout << "(" << m_list[i].first << ", " << m_list[i].second << ")" << endl;

    }
    cout << "n list: " <<endl;
    for(const auto &word : n_list){
        cout << word << endl;
    }

    return 0;
}