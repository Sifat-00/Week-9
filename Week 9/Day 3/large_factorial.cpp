#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = 1;
        for(int i=1;i<=n;i++)
        {
            ans = (1ll * ans % mod * i %mod)% mod;
        }
        cout << ans << endl;
    }
}
