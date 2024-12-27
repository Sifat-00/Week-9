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
        long long sum =0;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
            sum+=ar[i];
        }
        long long mx = 0;
        long long track = 0;
        for(int i=0;i<n-1;i++)
        {
            track+=ar[i];
            mx= max(mx,(__gcd(track,sum-track)));
        }
        cout << mx << endl;
    }
    return 0;
}