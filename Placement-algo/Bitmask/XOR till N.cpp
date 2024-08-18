/*Question 4 Find the XOR of numbers from 1 to n.

Example:

12 => 12
15 => 0
Solution Idea:

Method 1: The XOR of numbers from 1 to any number just before multiple of 4 is 0(i.e. 3,7,11).*/

#include<bits/stdc++.h>
typedef long long lli;
using namespace std;
lli mod=1e9+7;

int find_xor_upto_n(int n)
{
    int rem=n%4;
    switch(rem)
    {
        case 0: return n;
        case 1: return 1;
        case 2: return n+1;
        case 3: return 0;
    }
    return 1;
}
void solve()
{
    int n=14;
    int ans = find_xor_upto_n(n);
    cout<<ans<<endl;
}

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0; 
}
