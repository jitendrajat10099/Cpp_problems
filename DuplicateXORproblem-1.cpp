/** Duplicate in Array XOR problem **/

#include <bits/stdc++.h>
using namespace std; 
int main() 
{
  int arr[1000000];
	int n;
	cin >> n;
	int x = 0;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		x ^= arr[i];
	}
 
	cout << x << endl;
 
	return 0;
}
