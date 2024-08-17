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

int main()
{
    unsigned int x = 7; 
    for(int i=31;i>=0;i--) // looping through each digit from MSB to LSB
    {
        if(x&(1<<i))       // checking current bit is set or not
        {
            cout << '1';
        }
        else cout << '0';
    }
    cout<<endl;
    return 0; 
}
