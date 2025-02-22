#include <iostream>

using namespace std;

int main(){
	
	int k, n, w;
	cin >> k;
	cin >> n;
	cin >> w;
	int x = w;
	int c;
	
	for(int i = 0; i < x; i++){
		c += w*k;
		w = w-1;
	}
	
	if(c > n){
		cout << c - n;
	}else{
		cout << 0;
	}

	
	
	return 0;
}
