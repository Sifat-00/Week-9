#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long mn = LONG_LONG_MAX;
    long long l,r;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0 && (i / __gcd(1LL *i,(n/i))) * (n/i) == n)
        {
            long long val = max(1LL * i,(n/i));
            if(val < mn)
            {
                mn = val;
                l = i;
                r = (n/i);
            }
        }
    }
    cout << l <<" " << r << endl;
    return 0;
}


