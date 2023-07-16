#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int m = 0;
	int n = 0;
	string w;
	cin >> w;
	char ni;
	
	for(int i = 0; i < w.size(); i++){
		ni = tolower(w[i]);
		if(w[i] == ni){
			n +=1;
		}else{
			m +=1;
		}
	}
	if(m < n || m == n){
		transform(w.begin(), w.end(), w.begin(), [](unsigned char c){
			return tolower(c);	
		});
	}else{
		transform(w.begin(), w.end(), w.begin(), [](unsigned char c){
			return toupper(c);	
		});
	}
	
	cout << w;
	
	
	
	return 0;
}
