#include<bits/stdc++.h>
using namespace std;
struct NgayThang{
    long long ngay, thang, nam;
};
struct SinhVien{
    string name, lop;
    struct NgayThang date;
    double diem;
};
void nhap (SinhVien &a){
    char c;
    getline (cin, a.name);
    getline(cin, a.lop);
    cin >> a.date.ngay >> c >> a.date.thang >> c >> a.date.nam;
    cin >> a.diem;
}
void in( SinhVien a){
    cout <<"B20DCCN001" << " " << a.name << " " << a.lop << " ";
    if (a.date.ngay <= 9) cout <<"0" << a.date.ngay << "/";
    else cout << a.date.ngay << "/";
    if (a.date.thang <= 9) cout << "0" << a.date.thang << "/";
    else cout << a.date.thang << "/";
    cout << a.date.nam;
    cout <<" " << fixed << setprecision(2) << a.diem;

}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
// code by dnhuyen
