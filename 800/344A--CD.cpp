#include <iostream>
#include <vector>
using namespace std;
 
int main(){
	int n,c;
	int k = 0;
	cin >> n;
	vector <int> v;
	vector<int> r;
	for(int i = 0; i < n; i++){
		cin >> c;
		v.push_back(c);
	}
	
	if(v.size() == 1){
		k = 1;
	}else if(v.size() == 2){
		if(v[1] == v[0]){
			k = 1;
		}else{
			k = 2;
		}
	}else{
		for(int i = 1; i < v.size(); i++){
			if(v[i] == v[i-1]){
				k +=0;		
			}else{
				k +=1;
			}
		}
	}
	
	if(v.size() == 1 || v.size() == 2){
		cout << k;
	}else{
		cout << k+1;
	}
	
	
	return 0;
}
