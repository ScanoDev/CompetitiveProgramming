#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, a, c;
	cin >> n;
	int k = 0;
	int dinx, diny;
	vector<vector<int>> v;
	for(int i = 0; i < n; i++){
		cin >> a;
		cin >> c;
		vector<int> vi ={a,c};
		v.push_back(vi);
	}
	
	for(int i = 0; i < n; i++){
		if(v[i][0] < v[i][1]){
			dinx = v[i][0];
			diny = v[i][1];
			if(diny-dinx > 1){
				k +=1;
			}
		}else{
			k +=0;
		}
	}
	
	cout << k;
	
	return 0;
}
