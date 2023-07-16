#include <iostream>

using namespace std;

int main(){
	int n,k,c;
	cin >> n;
	cin >> k;
	
	for(int i = 1; i < k+1; i++){
		if(n%10 == 0){
			n = n/10;
		}else{
			n = n-1; 
		}
	}
	
	cout << n;
	
	return 0;
}
