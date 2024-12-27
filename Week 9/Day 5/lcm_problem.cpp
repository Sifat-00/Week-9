#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin >> l >> r;
        long long val = (l/__gcd(l,l*2))*l*2;
        if(val>=l && val<=r) cout << l <<" " << l*2 << endl;
        else cout << -1 <<" " << -1 << endl;
    }
     
    return 0;
}