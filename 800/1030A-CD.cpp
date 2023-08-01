#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, c;
	int k = 0;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin >> c;
		v.push_back(c);
	}
	for(int i = 0; i < n; i++){
		if(v[i] > 0){
			k +=1;
		}else{
			k +=0;
		}
	}
	if(k >= 1){
		cout << "HARD";
	}else{
		cout << "EASY";
	}
	
	return 0;
}
