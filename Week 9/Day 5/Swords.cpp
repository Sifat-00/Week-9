#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g1 = 0;
    int n;
    cin >> n;
    int mx = 0;
    int ar[n];
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
        //g1 = __gcd(g1,ar[i]);
        mx = max(mx,ar[i]);
       // sum+=ar[i];
    }   
    vector<long long> v;
    for(int i=0;i<n;i++)
    {
        g1 = __gcd(g1,(mx - ar[i]));
    }
    for(int i=0;i<n;i++)
    {
        v.push_back((mx - ar[i])/g1);
    }
    for(auto x : v) sum+=x;
    cout << sum <<" " << g1 <<endl ;
    return 0;
}