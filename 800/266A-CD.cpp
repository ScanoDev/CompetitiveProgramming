#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int n;
	int k = 0;
	char ni;
	cin >> n;
	vector <char> v;
	for(int i = 0; i < n; i++){
		cin >> ni;
		v.push_back(ni);
	}
	
	for(int i = 1; i < v.size(); i++){
		if(v[i] == v[i-1]) {
			k +=1;
		}
	}
	cout << k;
	
	
	
	return 0;
}
