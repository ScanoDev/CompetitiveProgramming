#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,a,b;
	cin >> n;
	vector <vector<int>> v;
	int k = 0;
	vector<int> ans; 
	for(int i = 0; i < n; i ++){
		cin >> a;
		cin >> b;
		vector<int> num = {a,b};
		v.push_back(num);
	}
	
	for(int i = 0; i < n; i++){
		k -= v[i][0];
		k += v[i][1];
		ans.push_back(k);
	}
	
	auto resp = max_element(ans.begin(), ans.end());
	cout << *resp;
	return 0;
}
