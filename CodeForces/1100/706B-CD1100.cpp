#include <iostream>
#include <vector>
#include <algorithm>

typedef long long int lli;
using namespace std;

lli bs(const vector<lli>& arr, lli low, lli high, lli x) {
    lli result = -1; 
    while (high >= low) {
        lli mid = low + (high - low) / 2;

        if (arr[mid] <= x) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    lli n;
    cin >> n;
    vector<lli> vx;
    for (lli i = 0; i < n; i++) {
        lli x;
        cin >> x;
        vx.push_back(x);
    }

    sort(vx.begin(), vx.end());

    lli q;
    cin >> q;
    vector<lli> vq;
    for (lli i = 0; i < q; i++) {
        lli qi;
        cin >> qi;
        vq.push_back(qi);
    }

    for (int i = 0; i < vq.size(); i++) {
        lli result = bs(vx, 0, vx.size() - 1, vq[i]);
        if (result != -1) {
            cout << result + 1 << endl; 
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}
