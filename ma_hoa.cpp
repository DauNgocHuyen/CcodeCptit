#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        int count= 1, j = -1;
        for (int i = 0; i < s.size()-1; i++){
            if (s[i] == s[i+1]){
                count ++;
                j = i+1;
            }
            else {
                cout << s[i] << count;
                j = i;
                count = 1;
            }
        }
        if (j == -1) cout << s[0] << count;
        else {
            if (j == s.size()-2) cout << s[s.size() -1] << "1";
            else cout << s[s.size() -1] << count ;
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
