#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline (cin, s);
        for (int i = 0; i < s.size(); i++){
            if (s[i] < '0' || s[i] > '9'){
                s[i] = ' ';
            }
        }
        stringstream p(s);
        long long token;
        vector <long long> ans;
        while ( p >> token){
            ans.push_back(token);
        }
        long long sum = 0;
        for (int i = 0; i < ans.size(); i++){
            sum += ans[i];
        }
        cout << sum << endl;
    }
    return 0;
}
// code by dnhuyen
