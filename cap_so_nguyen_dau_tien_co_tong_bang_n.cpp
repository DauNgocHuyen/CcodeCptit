#include<bits/stdc++.h>
using namespace std;
int check[10000000];
void sang(int n){
    for (int i = 0; i < n; i++){
        check[i] = 1;
    }
    check[0] = 0; check[1] = 0;
    for (int i = 2; i <= sqrt(n); i++){
            if (check[i] == 1){
                for (int j = i*i; j < n; j+=i){
                    check[j] = 0;
                }
            }
        }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        sang(n);
        int ok = 0;
        for (int i = 2; i < n; i++){
            if (check[i] == 1 && check[n-i] == 1){
                cout << i << " " << n-i;
                ok = 1;
                break;
            }
        }
        if (ok == 0) cout << "-1" ;
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
