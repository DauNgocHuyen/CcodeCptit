#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n+5][m+5];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        vector <int> vt;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (a[i][j] == 1){
                    vt.push_back(i);
                    vt.push_back(j);
                }
            }
        }
        for (int i = 0; i < vt.size(); i+=2){
            for (int j = 0; j < m; j++){
                a[vt[i]][j] = 1;
            }
            for (int j = 0; j < n; j++){
                a[j][vt[i+1]] = 1;
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << a[i][j] <<" ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
