#include<bits/stdc++.h>
using namespace std;
int n;
int a[10000005];
int x = 0;
void in(){
    int dem = 0;
    for (int i = 0; i < n; i++){
        cout << a[i];
        dem ++;
        if (dem == n) cout << " ";
    }
}

void Try (int i){
    for (int j = 1; j <= n  ; j++){
        a[i] = j;
        if (i+1 == n) in();
        else {
            Try(i+1);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        Try(0);
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
