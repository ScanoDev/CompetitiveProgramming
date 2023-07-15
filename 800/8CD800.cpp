#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main(){
	
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	int k = 0;
	stringstream ascii;
	
	for(int i = 0; i < s1.size(); i++){
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
	}
	
	for(int i = 0; i < s1.size(); i++){
		if(s1 == s2){
			k = 0;
		}
		else{
			for;
		}
	}
	
	
	
	
	
	
	return 0;
}
