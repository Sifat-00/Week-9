bool IsPrime(int n)
{
    if(n==1) return false;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if(a<=3 && b<=3) cout << -1 << endl;
        else if(b>a)
        {
            if(b%2==0) cout << b/2 <<" " << b/2 << endl;
            else cout << (b-1)/2 <<" " <<(b-1)/2 << endl;
        }
        else
        {
            if(IsPrime(a)) cout << -1 << endl;
            else if(a%2==0) cout << a/2 <<" " << a/2 << endl;
            else 
            {
                for(int i=2;i<=a;i++)
                {
                    if(a%i==0)
                    {
                        cout << i <<" " <<a-i << endl;
                        break;
                    }
                }
            }

        }
    }
    return 0;
}