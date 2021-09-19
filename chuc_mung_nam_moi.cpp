#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector <string> vt;
    while (n--){
        string s;
        getline(cin , s);
        vt.push_back(s);
    }
    int count = 1;
    int ok = 0;
    for (int i = 0; i < vt.size()-1; i++){
        for (int j = i+1; j < vt.size(); j++){
            if (vt[i] == vt[j]) {
                ok = 1;
                break;
            }
        }
        if (ok == 0){
            count ++;
        }
        ok = 0;
    }
    cout << count ;

    return 0;
}
// code by dnhuyen
