#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t; 
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n+5][m+5];
        for (int i = 0; i < n ; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int b[n*m + 5];
        int k = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                b[k++] = a[i][j];
            }
        }
        sort(b, b+k);
        for (int i = 0; i < k; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
