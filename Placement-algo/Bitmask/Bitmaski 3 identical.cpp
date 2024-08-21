/* Given an array where every element occurs three times, except one element which occurs only once. Find the element that occurs once.

Example:

{23, 5, 23, 4, 23, 4, 5, 3, 5, 4} => 3
{15, 12, 15, 9, 15, 9, 9} => 12
Solution Idea:

Method 1: Loop through each bit of all the elements and find the sum of bits at each place. If the sum of bits at each position is not divisible by 3, 
then the required answer has the bit set at that position. */

#include<bits/stdc++.h>
typedef long long lli;
using namespace std;
lli mod=1e9+7;

int find_single_occurence(vector<int> &arr)
{
    int n=arr.size();
    int ans=0;
    for(int i=0;i<32;i++)   // looping through each digit
    {
        int sum=0;
        for(int j=0;j<n;j++) // looping through each element
        {
            sum+=(arr[j] & (1<<i));
        }
        if(sum%3)           
        {
            ans|=(1<<i);    // set the bit in answer
        }
    }
    return ans;   
}

void solve()
{
    vector<int> arr={23, 5, 23, 4, 23, 4, 5, 3, 5, 4};
    int ans = find_single_occurence(arr);
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


 
