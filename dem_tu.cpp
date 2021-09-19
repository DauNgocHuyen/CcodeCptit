#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a;
        cin.ignore();
        getline(cin, a);
        stringstream ss(a);
        string token;
        vector <string> ans;
        while(ss >> token)
            ans.push_back(token);
        cout << ans.size() << endl;
    }
}