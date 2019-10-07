    #include <bits/stdc++.h>
    using namespace std;
     
    #define ll long long int
    #define tc(t) int t;cin >> t; while(t--)
    #define pb push_back
    #define fi first
    #define se second
    #define debug1(x) cout<<#x<<" = "<<x<<'\n';
    #define debug2(x, y) cout << #x << " = " << x << "   " << #y << " = " << y << "\n";
    #define _ ios_base::sync_with_stdio(0);cin.tie(NULL);
     
    bool isVowel(char c) {
    	if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') return true;
    	else return false;
    }
     
    int main() {_
    	//freopen("in012.txt", "r", stdin);
    	//freopen("out012.txt", "w", stdout);
    	string s;
    	cin >> s;
    	int n = int(s.size());
    	int pre[n+1] = {};
    	for(int i = 0; i<n; i++) {
    		if(isVowel(s[i])) {
    			pre[i+1] = pre[i] + 1;
    		} 
    		else pre[i+1] = pre[i];
    	}
    	int odd[n+2] = {};
    	int even[n+2] = {};
    	for(int i = n; i>=0; i--) {
    		if(pre[i]%2) {
    			odd[i] = odd[i+1] + 1;
    			even[i] = even[i+1];
    		}
    		else {
    			even[i] = even[i+1] + 1;
    			odd[i] = odd[i+1];
    		}
    	}
    	long long int ans = 0;
    	for(int i = 1; i<=n; i++) {
    		if(pre[i-1]%2 == 0) {
    			ans += odd[i];
    		}
    		else {
    			ans += even[i];
    		}
    	}	
    	cout<<ans<<'\n';
    	return 0;
    }
