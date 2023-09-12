#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
	int n ,pi,qi, p, q;
	cin >> n;
	set <int> k;
	int l = 0;
	int res;
	
	cin >> pi;
	for(int i = 0; i <pi; i++){
		cin >> p;
		k.insert(p);
	}
	
	cin >> qi;
	for(int i = 0; i < qi; i++){
		cin >> q;
		k.insert(q);
	}
	
	for(int num : k){
		if(num == l+1){
			res +=1;
			l +=1;
		}
	}
	if(l == n){
		cout << "I become the guy.";
	}else{
		cout << "Oh, my keyboard!";
	}
	
	
	return 0;
}
