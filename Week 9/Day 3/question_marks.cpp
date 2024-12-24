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
        string ar;
        cin >> ar;
        map<char,int> mp;
        for(auto x : ar)
        {
            mp[x]++;
        }
        int count = 0;
        if(mp['A']>=n) count+=n; 
        else count+=mp['A'];
 
        if(mp['B']>=n) count+=n; 
        else count+=mp['B'];
 
        if(mp['C']>=n) count+=n; 
        else count+=mp['C'];
 
        if(mp['D']>=n) count+=n; 
        else count+=mp['D'];
 
        cout << count <<endl;
    }
    return 0;
}