#include <iostream>
#include <cctype>

using namespace std;

int main(){
	char low;
	char low2;
	string s, n;
	cin >> s;
	cin >> n;
	int k;
	
	for(int i = 0; i < s.size(); i++){
		low = tolower(s[i]);
		low2 = tolower(n[i]);
		if(low < low2){
			k = -1;
			break;
		}else if(low > low2){
			k = 1;
			break;
		}else if(low == low2){
			k = 0;
		}
	}
	
	cout << k;
	
	return 0;
}
