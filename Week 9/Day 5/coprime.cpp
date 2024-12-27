#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int n)
{
    if(n==1) return false;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++) cin >> ar[i];
        if(ar[n-1]==1)
        {
            cout << n*2 << endl;
            continue;
        }
        priority_queue <int> even,prime;
        for(int i=n-1;i>=0;i--)
        {
            if(ar[i]%2==0)
            {
                even.push(i);
            }
            else if(IsPrime(ar[i])) prime.push(i);
        }
        if(!even.empty() && !prime.empty())
         cout << even.top()+prime.top()+2 << endl;
         else cout << -1 << endl;
    }
    return 0;
}