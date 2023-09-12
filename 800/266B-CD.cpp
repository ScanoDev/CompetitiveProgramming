#include <iostream>

using namespace std;

int main(){
	int n, p;
	cin >> n >> p;
	char k [n+1];
	char c;
	
	for(int i = 0; i < n; i++){
		cin >> c;
		k[i] = c;
	}
	
	k[n] == 'X';
	
	for(int i = 0; i < p; i++){
		for(int i = 0; i < n-1; i++){
			if(k[i] == 'B'){
				if(k[i+1] == 'G'){
					k[i] = 'G';
					k[i+1] = 'B';
					i +=1;
				}
			}else{
				continue;
			}
		}		
	}	
	
	
		for(int i = 0; i < n; i++){
		cout << k[i];
	}
	
	
	return 0;
}
