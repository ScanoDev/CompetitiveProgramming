#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	string w;
	cin >> w;
	set<char> d; //No permite que hayan elementos repetidos, por lo tanto
	//cuando agregamos elementos en el for de abajo, solo se agregan los que no están repetidos
	for(char c : w){
		d.insert(c);
	}
	int t = d.size();
	
	if(t%2 == 0){
		cout << "CHAT WITH HER!";
	}else{
		cout << "IGNORE HIM!";
	}
	
	return 0;
}
