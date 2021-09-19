#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long ba = (x*y)/(__gcd(x,y));
        long long bcnn = (ba*z)/(__gcd(ba,z));
        long long d = pow(10,(n-1));
        long long c = pow(10, n);
        if (bcnn > c) cout << "-1" << endl;
        else if (bcnn >= d && bcnn <c){
            cout << bcnn << endl;
        }
        else {
            if (d % bcnn == 0) cout << d << endl;
            else {
                long long k = bcnn * (d/bcnn + 1);
                if (k >= c) cout <<"-1" << endl;
                else cout << k << endl;
            }
        }
    }
    return 0;
}
// code by dnhuyen
