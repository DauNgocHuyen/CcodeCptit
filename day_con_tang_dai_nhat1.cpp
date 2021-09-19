#include<bits/stdc++.h>
using namespace std;
int f[1005];
int main(){
    int t;
    cin >> t;
    while (t--){
        int n; 
        cin >> n ;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int res = 1;
        for (int i = 0; i < n; i++){
            f[i] = 0;
            for (int j = i - 1; j >= 0; j--){
                if (a[j] < a[i]) f[i] = max(f[i], f[j]);
            }
            f[i] ++;
            res = max(res, f[i]);
        }
        cout << res << endl;
    }
}