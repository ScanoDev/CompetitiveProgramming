#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, c;
	cin >> n >> k;
	int array[n];
	int r = 0;
	
	for(int i = 0; i < n; i++){
		cin >> c;
		array[i] = c;
	}
	for(int i = 0; i < n; i ++){
		if(array[i] >= array[k-1] && array[i] > 0){
			r +=1;
		}else{
			continue;
		}
	}
	cout << r;
	
	return 0;
}
