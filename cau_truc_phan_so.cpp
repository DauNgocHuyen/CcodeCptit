#include<bits/stdc++.h>
using namespace std;
struct PhanSo {
    long long ts, ms;
};
void nhap(PhanSo &p){
    cin >> p.ts >> p.ms;
}
void rutgon( PhanSo &p){
    long long n = __gcd(p.ts, p.ms);
    p.ts = p.ts/n;
    p.ms = p.ms/n;
}
void in(PhanSo p){
    cout << p.ts << "/" << p.ms;
}
int main(){
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
// code by dnhuyen
