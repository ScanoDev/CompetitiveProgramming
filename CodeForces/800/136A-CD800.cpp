#include <iostream>

using namespace std;

int main(){
	int c,n;
	int array[n];
	int r[n];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> c;
		array[i] = c;
	}
	
	for(int i = 0; i < n; i++){
		int num = array[i];
		if(num = n){
			r[i] = array[0];
		}else{
			r[i] = array[num];
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << r[i];
	}
	
	return 0;
}
