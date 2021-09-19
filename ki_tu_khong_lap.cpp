#include<bits/stdc++.h>
using namespace std;
int check[100005];
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        for (int i = 0; i < 100005; i++){
            check[i] = 0;
        }
        for (int i = 0; i < s.size(); i++){
            check[s[i]] ++;
        }
        for (int i = 0; i < s.size(); i++){
            if (check[s[i]] == 1) cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
