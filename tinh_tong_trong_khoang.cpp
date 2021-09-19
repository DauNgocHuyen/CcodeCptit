#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, q;
        cin >> n >> q;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int b[q+5][5];
        for (int i = 0; i < q; i++){
            for (int j = 0; j < 2; j++){
                cin >> b[i][j];
            }
        }
        int l = 0;
        while (l < q){
            int sum = 0;
            for (int i = b[l][0]-1 ; i < b[l][1]; i++){
                sum += a[i];
            }
            cout << sum << endl;
            l++;
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
