#include<bits/stdc++.h>
using namespace std;
long long tonglon(long long a){
    long long m = a;
    long long x = 1;
    long long resl = 0;
    while (m != 0){
        long long k = m % 10;
        if (k == 5) k = 6;
        resl += x*k;
        x*=10;
        m/=10;
    }
    return resl;
}
long long tongnho(long long a){
    long long m = a;
    long long x = 1;
    long long resn = 0;
    while (m != 0){
        long long k = m % 10;
        if (k == 6) k = 5;
        resn += x*k;
        x*=10;
        m/=10;
    }
    return resn;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b;
        cin >> a >> b;
        unsigned long long res1 = tongnho(a) + tongnho(b);
        cout << res1 << " ";
        unsigned long long res2 = tonglon(a) + tonglon(b);
        cout << res2 << endl;
    }
    return 0;
}
// code by dnhuyen
