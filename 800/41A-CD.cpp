#include <iostream>

using namespace std;

int main(){
	string s;
	string t;
	cin >> s;
	cin >> t;
	int k = 0;
	int n = t.size();
	for(int i = 0; i < s.size(); i++){
		if(s[i] == t[n-1]){
			k +=1;
			n = n-1;
		}else{
			k -=1;
		}
	}
	if(k == s.size() && t.size()){
		cout << "YES";
	}else{
		cout << "NO";
	}
	
	
	
	return 0;
}
