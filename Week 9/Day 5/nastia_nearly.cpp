#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        long long x,y;
        cin >>x >>y;
        long long z = (1LL*x*y);
        if(y==1) cout << "NO" << endl;
       else
       {
         cout <<"YES" << endl;
         cout << (1LL*x) <<" " << (1LL*z)  <<" " <<(z+x)<<endl;
       }
    }
    return 0;
}