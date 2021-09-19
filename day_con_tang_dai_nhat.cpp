#include<bits/stdc++.h>
using namespace std;
int check[100005];
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < 1005; i++){
        check[i] = 0;
    }
    while (t--){
        int n; 
        cin >> n ;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            check[a[i]] ++;
        }
        int b[n+5], k = 0;
        for (int i = 0; i < n; i++){
            if (check[a[i]] > 0){
                b[k++] = a[i];
                check[a[i]] = 0;
            }
        }
        int x = 1;
        int f[n+5];
        for (int i = 0; i < k; i++){
            f[i] = 0;
            for (int j = 0; j < i; j++){
                if (b[j] < b[i]){
                    f[i] = max(f[i], f[j] +1);
                }
            }
            x = max (x, f[i]);
        }
        cout << x << endl;
    }
    return 0;
}
// code by dnhuyen
