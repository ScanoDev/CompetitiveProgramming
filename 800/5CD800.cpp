#include <iostream>
using namespace std;

int main(){
	int M, N;
	cin >> M;
	cin >> N;
	int producto = M * N;
	//cout << producto;
	int rpt;
	
	if (M%2 == 0 or N%2 == 0){
		rpt = producto/2;
	}
	else{
		rpt = producto/2;
			
	}
	cout << rpt;
	
	return 0;
}
