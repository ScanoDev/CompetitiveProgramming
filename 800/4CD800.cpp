#include <iostream>
using namespace std;

int main(){
	int n, m, limit;
	cin >> n >> m;
	int array[n];
	int contador = 0;
	
	for(int i = 0; i < n; i++){
		cin >> limit;
		array[i] = limit;
	}
	for(int i = 0; i < n; i++){
		if(array[i] >= m){
			contador++;
		}
		else{
			contador = contador;
		}
	}
	
	cout << contador;
	
	return 0;
}
