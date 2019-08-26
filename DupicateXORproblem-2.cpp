/** Duplicate in Array XOR Problem **/

#include <bits/stdc++.h>
using namespace std;
bool checkSetBit(int n, int x) 
{
    int tem = n & (1<<x);
    return tem!=0;
}
int main()
{
    int arr[1000000]={};
    int n;
    cin >> n;

    int all = 0;
    int ans[2] = {0,0};

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        all ^= arr[i];
    }

    //assert(all != 0);
    int k = 0;
    while( checkSetBit(all, k) == 0 )
        k++;

    //partition array into two sets: kth bit on v/s off
    for (int i=0; i<n; i++)
    {
        ans[checkSetBit(arr[i], k)] ^= arr[i];
    }
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
