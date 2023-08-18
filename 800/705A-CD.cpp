#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	string r[n];
	for(int i = 0; i < n; i++){
		if(i%2==0){
			if(i != (n-1)){
				r[i] = "I hate that" ;
			}else{
				r[i] = "I hate it";
			}
		}else{
			if(i != (n-1)){
				r[i] = "I love that";
			}else{
				r[i] = "I love it";
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << r[i] << " ";
	}
	
	
	return 0;
}
