#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        long long G1 = 0,G2 = 0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                int val = G1;
                G1 = __gcd(val, ar[i]);
            }
            else{
                int val = G2;
                 G2 = __gcd(val,ar[i]);
            }
        }

        bool ok = true;
        long long ans = 0;
        for(int i=1;i<n;i+=2)
        {
            if(ar[i]%G1 ==0) ok = false;
        }
        if(ok)
        {
            ans = G1;
        }
        else
        {
            ok = true;
            for(int i=0;i<n;i+=2)
            {
                if(ar[i]%G2 ==0) ok = false;
            }
            if(ok)
            {
                ans = G2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}