#include <iostream>

using namespace std;

int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	char w;
	int a = 0;
	int d = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == 'A'){
			a +=1;
		}else{
			d +=1;
		}
	}
	if(a > d){
		cout << "Anton";
	}else if(a < d){
		cout << "Danik";
	}else{
		cout << "Friendship";
	}
	
	return 0;
}
