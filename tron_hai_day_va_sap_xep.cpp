#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int b[m+5];
        for (int i = 0; i < m; i++){
            cin >> b[i];
        }
        int c[m+n+5];
        int k = 0;
        for (int i = 0; i < n; i++){
            c[k++] = a[i];
        }
        for (int i = 0; i < m; i++){
            c[k++] = b[i];
        }
        sort(c, c+k);
        for (int i = 0; i < k; i++){
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
