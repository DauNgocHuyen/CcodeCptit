#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        stringstream p(s);
        string token;
        vector <string> ans;
        int count = 0;
        while (p >> token){
            ans.push_back(token);
            count ++;
        }
        cout << count << endl;
    }
    return 0;
}
// code by dnhuyen
