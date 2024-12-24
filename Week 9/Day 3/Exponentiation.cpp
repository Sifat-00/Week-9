#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int solve(int a,int b)
{
    int ans = 1% mod;
    while(b)
    {
        if(b&1)
        {
            ans = (1LL * ans%mod * a % mod) % mod;
        }
        a = 1LL * a * a % mod;
        b >>= 1;
    }
    return ans ;
}
int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        cout << solve(a,b) << endl;
    }
}
