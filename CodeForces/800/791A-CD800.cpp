#include <iostream>

using namespace std;

int main(){
	int a, b, k;
	cin >> a;
	cin >> b;
	
	while(a < b || a == b){
		a = a*3;
		b = b*2;
		k += 1;
	}
	cout << k;
	
	
	return 0;
}
