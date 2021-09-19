#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+5];
        int hieu = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n-1; i++){
            for (int j = i+1; j < n; j ++){
                if (a[i] < a[j]){
                    int x = a[j] - a[i];
                    if ( x > hieu){
                        hieu = x;
                    }
                }
            }
        }
        if (hieu == 0) cout << "-1" << endl;
        else cout << hieu << endl;
    }
    return 0;
}
// code by dnhuyen
