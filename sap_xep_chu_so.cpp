#include<bits/stdc++.h>
using namespace std;
int vt[1000000];
int k = 0;
int check[10005];
int main(){
    int t;
    cin >> t;
    for (int i =0; i < 10005; i++)
    check[i] = 0;
    while (t--){
        int n;
        cin >> n;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            int x = a[i];
            while (x > 0){
                vt[k] = x%10;
                check[vt[k]] ++;
                x/=10;
                k++;
            }
        }
        sort (vt, vt + k);
        for (int i = 0; i < k; i++){
            if (check[vt[i]] > 0) {
                cout << vt[i] <<" ";
                check[vt[i]] = 0;
            }
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
