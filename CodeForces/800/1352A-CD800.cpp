/*
    Sebastian Cano
    EAFIT University
    Took from Bidhan Roy
*/

using namespace std;
#include <bits/stdc++.h>

int main(){
    int t;
	cin >> t;
    cout << (5 / 10) << endl; // just to see how it works
	while (t--) {
		int n;
		cin >> n;
		vector<int> ans;
		int power = 1;
		while (n > 0) {
			if (n % 10 > 0) { //9, 0, 0, 5
				ans.push_back((n % 10) * power); //9*1, 5*1000
                cout << "extra : " << (n%10) << endl;
			}
			n /= 10; //500, 50, 5, 0,
			power *= 10; //10, 100, 1000, 10000
		}
		cout << ans.size() << endl;
		for (auto number : ans) cout << number << " ";
		cout << endl;
	}   

    return 0;
}
