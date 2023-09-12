#include <iostream>

using namespace std;

int main(){
	float n, p, q, k;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> p;
		q += p;
	}
	
	k = (q*100.0)/(n*100.0);
	cout << k;

	
	return 0;
}
