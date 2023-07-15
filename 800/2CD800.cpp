#include <iostream>
using namespace std;

int main(){
	
	int n;
	int k = 0;
	string word;
	
	cin >> n;
	
	string array[n];
	
	for(int i = 0; i < n; i++){
		cin >> word;
		array[i] = word;
		
	}
	
	for(int i = 0; i < n; i++){
		if(array[i].length()>10){
			cout << array[i].at(0) << array[i].length() - 2 <<  array[i].at(array[i].length()-1) << "\n";
		}
		else{
			cout << array[i] << "\n";
		}
	}

	
	return 0;
}
