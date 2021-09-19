#include<bits/stdc++.h>
using namespace std;
long long a[10000000];
int main(){
    int t;
    cin >> t;
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= 92; i ++){
        a[i] = a[i-1] + a[i-2];
    }
    while (t--){
        long long n;
        cin >> n;
        int ok = 0;
        for (int i = 0; i <= 92; i++){
            if (n == a[i]){
                cout << "YES"<< endl;
                ok = 1;
                break;
            }
        }
        if (ok == 0) cout << "NO" << endl;
     }
    return 0;
}
// code by dnhuyen

