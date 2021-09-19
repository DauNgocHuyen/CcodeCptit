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
        while (p >> token){
            ans.push_back(token);
        } 
        int n = ans.size();
        int dc = 0, dl = 0;
        for (int i = 0; i < ans.size(); i++){
            int k = ans[i].size() -1;
            if (ans[i][k] % 2 == 0) dc ++;
            else dl ++;
        }
        if (n %2 == 0 && dc > dl) cout << "YES" << endl;
        else if (n % 2 ==  1 && dl > dc) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
// code by dnhuyen
