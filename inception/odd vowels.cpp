    #include<bits/stdc++.h>
     
    bool isVowel(char c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        else return false;
    }
     
    using namespace std;
     
    int main() {
        string s;
        cin>>s;
        vector<int> v = {1, 0};
        int choice = 0;
        for(char c: s) {
            if(isVowel(c)) {
                choice ^= 1;
            }
            v[choice]++;
        }
        cout<<(long long)v[0]*(long long)v[1];
        return 0;
    }
