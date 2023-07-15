#include <iostream>
using namespace std;

int main(){
	
	int n;
	string m;
	int contador;
	contador = 0;
	char uno = 1;
	char cero = 0;
	
	cin >> n;
	cin.ignore(); //lo recomiendo utilizar con los getlines
	
	string array[n];
	
	
	for(int i = 0; i < n; i++){
		getline(cin, m); // en c++, al usar getline se lee hasta el espacio, por lo tanto, después de utilizar el cin >> n; presionamos enter y esto lo va a leer este getline.
		array[i] = m;
	}
	
	for(int i = 0; i < n; i++){
		if(array[i].at(0) == uno + '0' and array[i].at(2) == uno + '0'){ // 1 1 0
			contador++;
		}
		else if(array[i].at(0) == uno + '0' and array[i].at(4) == uno + '0'){ // 1 0 1
			contador++;
		}
		else if(array[i].at(2) == uno + '0' and array[i].at(4) == uno + '0'){ // 0 1 1
			contador++;
		}
		else if(array[i].at(0) == uno + '0' and array[i].at(2) == uno + '0' and array[i].at(4) == uno + '0'){ // 1 1 0
			contador++;
		}
		else{
			contador = contador;
		}
		
	}
	cout << contador;
	
	return 0;
}
