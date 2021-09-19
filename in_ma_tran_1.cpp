#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+5][n+5];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        int d = 0;
        while (d < n){
            for (int i = 0; i < n; i++){
                cout << a[d][i] << " ";
            }
            d++;
            if (d == n) break;
            else {
                for (int i = n -1; i >= 0; i--){
                    cout << a[d][i] << " ";
                }
                d++;
            }
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
