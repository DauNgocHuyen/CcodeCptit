#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+5];
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int ok = 0;
        for (int i = 2; i <= n; i++){
            for (int j = i-1; j >= 1; j--){
                if (a[i] == a[j]) {
                    cout << a[i] << endl;
                    ok = 1;
                    break;
                }
            }
            if (ok == 1) break;
        }
        if (ok == 0) cout <<"-1"<< endl;
    }
    return 0;
}
// code by dnhuyen
