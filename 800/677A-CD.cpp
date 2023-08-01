#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, h, c;
	cin >> n;
	cin >> h;
	vector<int> v;
	int k = 0;
	for(int i = 0; i < n; i++){
		cin >> c;
		v.push_back(c);
	}
	for(int i = 0; i < n; i++){
		if(v[i] > h){
			k +=2;
		}else{
			k +=1;
		}
	}
	
	cout << k;
	
	return 0;
}
