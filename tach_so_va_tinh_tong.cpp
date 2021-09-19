#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        string s1;
        for (int i = 0; i < s.size(); i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                s1.push_back(s[i]);
            }
        }
        sort(s1.begin(), s1.end());
        for (int i = 0; i < s1.size(); i++){
            cout << s1[i];
        }
        long long sum = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] >= '0' && s[i] <= '9'){
                sum += (s[i] -48);
            }
        }
        cout << sum<< endl;
    }
    return 0;
}
// code by dnhuyen
