#include<bits/stdc++.h>
using namespace std;
struct NgayThang{
    long long ngay, thang, nam;
};
struct NhanVien{
    string name, gt;
    struct NgayThang date;
    string diachi, ma;
    struct NgayThang nk;
};
void nhap (NhanVien &a){
    char c;
    getline (cin, a.name);
    getline (cin, a.gt);
    cin >> a.date.ngay >> c >> a.date.thang >> c >> a.date.nam;
    cin.ignore();
    getline(cin, a.diachi);
    getline (cin, a.ma);
    cin >> a.nk.ngay >> c >> a.nk.thang >> c >> a.nk.nam;
}
void in (NhanVien a){
    cout <<"00001" << " " << a.name << " " << a.gt << " ";
    if (a.date.ngay <= 9) cout <<"0" << a.date.ngay << "/";
    else cout << a.date.ngay << "/";
    if (a.date.thang <= 9) cout <<"0" << a.date.thang << "/";
    else cout << a.date.thang << "/";
    cout << a.date.nam <<" ";
    cout << a.diachi << " " << a.ma << " ";
    if (a.nk.ngay <= 9) cout <<"0" << a.nk.ngay << "/";
    else cout << a.nk.ngay << "/";
    if (a.nk.thang <= 9) cout <<"0" << a.nk.thang << "/";
    else cout << a.nk.thang << "/";
    cout << a.nk.nam ;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
// code by dnhuyen
