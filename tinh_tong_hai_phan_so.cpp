#include<bits/stdc++.h>
using namespace std;
struct PhanSo {
    long long ts, ms;
};
void nhap(PhanSo &p){
    cin >> p.ts >> p.ms ;
}
struct PhanSo tong( PhanSo p, PhanSo q){
    p.ts = p.ts*q.ms + q.ts*p.ms;
    p.ms = p.ms*q.ms;
    long long n = __gcd(p.ts, p.ms);
    p.ts = p.ts / n;
    p. ms = p.ms / n;
    return p;

}
void in( PhanSo tong){
    cout << tong.ts << "/" << tong.ms;
}
int main(){
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
    return 0;
}
// code by dnhuyen
