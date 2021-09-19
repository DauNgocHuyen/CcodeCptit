#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int sum = 0;
        int ok = 0;
        for (int i = 0; i < n; i++){
            sum += a[i];
        }
        if (sum - a[0] == 0) cout << "1" << endl;
        else {
            for (int i = 0; i < n-1; i++){
                int sum2 = 0;
                sum2 += a[i];
                int k = 0;
                k = sum - sum2 - a[i+1];
                if (k == sum2) {
                    cout << i+1 << endl;
                    ok = 1;
                    break;
                } 
            }
            if (ok == 0) cout << "-1" << endl;
        }
    }
    return 0;
}
// code by dnhuyen
