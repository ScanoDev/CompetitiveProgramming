#include <iostream>
#include <string>
using namespace std;
 
int main(){
	int t;
	string c;
	cin >> t;
	string  v[t];
	string r[t];
	for(int i = 0; i < t; i++){
		cin >> c;
		v[i] = c;
	}
	for(int i = 0; i< t; i++){
		if(v[i][0] == 'c'){
			if(v[i][1] == 'a'){
				r[i] = "NO";
			}else{
				r[i] = "YES";
			}
		}else{
			if(v[i][1] == 'c'){
				if(v[i][2] == 'a'){
					r[i] = "NO";
				}else{
					r[i] = "YES";
				}
			}else{
				r[i] = "YES";
			}
		}
	}
	
	for(int i = 0; i < t; i++){
		cout << r[i] << endl;
	}
	
	return 0;
}
 
 