#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int n,m,mi,k;
	int p;
	cin >> n;
	cin >> m;
	vector<int>v;
	
	for(int i = 0; i < n; i++){
		cin >> mi;
		v.push_back(mi);
	}
	p = v[m-1];
	for(int i = 0; i < n; i++){
		if(p == 0){
			k = 0;
			break;
		}
		else if(v[i] >= p){
			k +=1;
		}else{
			continue;
		}
	}
	
	cout << k;
	
	
	
	return 0;
}
