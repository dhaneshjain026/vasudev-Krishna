/* Given an array where every element occurs twice, except two elements which occur only once. Find both the elements which occur only once.

Example:

{23, 23, 4, 3, 5, 3, 15, 15} => 4,5
{15, 10, 12, 10, 19, 19} => 12,15
Solution Idea:

Method 1: Suppose two numbers are a and b. First find the XOR of all the elements in the array to obtain a^b. Now any bit set in this a^b is set 
either in a or in b. Divide all the elements in two groups based on the bit set at the same position of the set bit of a^b. In this way a and b 
will be in two separated groups. Finally find the xor of each group separately to find a and b. */

#include<bits/stdc++.h>
typedef long long lli;
using namespace std;
lli mod=1e9+7;

void find_two_numbers(vector<int> &arr, int *a, int *b)
{
    int n=arr.size();
    *a=0;
    *b=0;
    int x=0;
    for(int i=

0;i<n;i++)    // find xor of all the elements
    {
        x^=arr[i];
    }
    int set_bit = (x)&(~(x-1));// find the set bit of xor
    for(int i=0;i<n;i++)
    {
        if(set_bit&(arr[i]))   // if bit is set put in first group
        {
            *a = *a ^ arr[i];
        }
        else *b = *b ^ arr[i]; // else in another group
    }
    return;
}

void solve()
{
    vector<int> arr={15, 10, 12, 10, 19, 19};
    int *a = new int[sizeof(int)];
    int *b = new int[sizeof(int)];
    find_two_numbers(arr,a,b);
    cout<<*a<<" "<<*b<<endl;
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
