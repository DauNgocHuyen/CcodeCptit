#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        string s;
        int k = 0;
        for (int i = s1.size()-1; i >= 0; i--){
            s[k++] += s1[i];
        }
        int q = 0;
        for (int i = s2.size()-1; i >= 0; i--){
            s[q++] += s2[i];
        }
        if (q > k) swap(q,k);
        for (int i = k-1; i >= 0; i--){
            cout <<s[i]-48;
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
