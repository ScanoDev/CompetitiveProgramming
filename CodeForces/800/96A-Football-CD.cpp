#include <iostream>
#include <string>

//SE REALIZÓ DE MANERA CORRECTA

using namespace std;

int main(){
	unsigned long long int num;
	cin >> num;
	//cout << num;
	string len_n = to_string(num);
	int len = len_n.length();
	int k;

		for(int p = 0; p < len; p++){
			if(len_n[p] == *"1"){
				k = k+1;
				if(p < len-1){
					if(len_n[p+1] != *"1"){
						if(k < 7){
							k = 0;
						}
					
					}	
				}
				
			}
		}
		for(int p = 0; p< len; p++){
			if(len_n[p] == *"0"){
				k = k+1;
				if(p < len-1){
					if(len_n[p+1] != *"0"){
						if(k < 7){
							k = 0;	
						}
					}	
				}
				
			}
		}
	
	if(k >=7){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
