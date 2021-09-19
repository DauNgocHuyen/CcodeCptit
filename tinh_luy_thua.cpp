#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long x, y, p;
        cin >> x >> y >> p;
        int s = 1;
        for (int i = 1; i <= y; i++){
            s = (s*x) % p;
        }
        cout << s << endl;
    }
    return 0;
}
// code by dnhuyen
