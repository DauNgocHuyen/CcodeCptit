#include<bits/stdc++.h>
using namespace std;
struct PhanTu {
    int gt, vt;
};
int n, x;
bool cmp(struct PhanTu b, struct PhanTu c){
    if (abs(b.gt - x) > abs(c.gt - x)){
        return false;
    }
    else if (abs(b.gt - x) == abs (c.gt - x)){
        if (b.vt > c.vt) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> x;
        struct PhanTu a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i].gt;
            a[i].vt = i;
        }
        sort (a, a+n, cmp);
        for (int i = 0; i < n; i++){
            cout << a[i].gt << " ";
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
 