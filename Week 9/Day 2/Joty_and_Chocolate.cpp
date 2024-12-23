#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long int b)
{
    return __gcd(a,b);
}

long long LCD(long long a, long long b)
{
    return (a/ __gcd(a,b)) *b;

}

int main()
{
    long long int n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    long long x = (n/a) * p;
    long long y = (n/b)*q;
    long long over = (n/LCD(a,b));
   long long ans = ((x + y) - over * (p + q)) + over * max(p, q);
    cout << ans << endl;
    return 0;
}