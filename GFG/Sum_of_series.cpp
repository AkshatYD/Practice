#include <bits/stdc++.h>
using namespace std;

//this method will calculate the sum from 1,2,....n
class Solution{
public:
	long long seriesSum(int n) {
	    long long result = static_cast<long long>(n) * (n + 1) / 2;
	    return result;

	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.seriesSum(n);
        cout << ans << "\n";
    }
    return 0;
}