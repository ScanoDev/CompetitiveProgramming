#include <iostream>

using namespace std;


int main(){
	int n;
	
	int x = 0;
	int p = 5;
	int k = 0;
	cin >> n;
	
	
	for(int i = 0; i < n; i++){
		
		if( n <=5){
			k = 1;
			break;
		}
		else if(n > 5 && (x+p) < n){
			x = x+p;
			k = k+1;
		}
		else if(n > 5 && (x+p) > n){
			p = p-1;
			continue;
		}
		else if(n > 5 && (x+p) == n){
			k = k+1;
			break;
		}	
	}
	
	cout << k;
	return 0;
}
