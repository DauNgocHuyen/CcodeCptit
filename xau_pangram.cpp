#include<bits/stdc++.h>
using namespace std;
int check[1000005];
int main(){
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < 1000005; i++){
        check[i] == 0;
    }
    while (t--){
        string s;
        getline(cin , s);
        int k;
        cin >> k;
        cin.ignore();
        for (int i = 0; i < s.size(); i++){
            check[s[i]] ++;
        }
        int count = 0;
        for (int i = 0; i < s.size(); i++){
            if (check[s[i]] > 0){
                count ++;
                check[s[i]] = 0;
            }
        }
        count = 26 -count ;
        if ( k >= count) cout << "1" << endl;
        else cout <<"0" << endl;
    }
    return 0;
}
// code by dnhuyen
