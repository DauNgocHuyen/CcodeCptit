#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n*n +5];
    for (int i = 0; i < n*n; i++){
        cin >> a[i];
    }
    sort(a, a+n*n);
    int b[n+5][n+5];
    int d = 0, hang = n-1, cot = n-1, gt = 0;
    while (d <= n/2){
        for (int i = d; i <= cot; i++){
            b[d][i] = a[gt++];
        }
        for (int i = d+1; i <= hang; i++){
            b[i][cot] = a[gt++];
        }
        for (int i = cot-1; i >=d; i--){
            b[hang][i] = a[gt++];
        }
        for (int i = hang-1; i > d; i--){
            b[i][d] = a[gt++];
        }
        d ++;
        hang --;
        cot --;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
