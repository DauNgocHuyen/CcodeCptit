#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n; 
        cin >> n;
        int  a[n+5], check[n+5];
        for (int i = 0; i < n; i++){
            check[i] = 0;
        }
        for (int i = 0; i < n-1; i++){
            cin >> a[i];
            check[a[i]] ++;
        }
        for (int i = 1; i <= n; i++){
            if (check[i] == 0) {
                cout << i ;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
