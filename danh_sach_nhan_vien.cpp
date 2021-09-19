#include<bits/stdc++.h>
using namespace std;
struct NgayThang{
    long long ngay, thang, nam;
};
struct NhanVien{
    string name, gt, diachi, ma;
    struct NgayThang date;
    struct NgayThang nk;
};
void nhap(NhanVien &ds){
    cin.ignore();
    getline(cin, ds.name);
    getline(cin, ds.gt);
    char c;
    cin >> ds.date.ngay >> c >> ds.date.thang >> c >> ds.date.nam;
    cin.ignore();
    getline(cin, ds.diachi);
    getline(cin, ds.ma);
    cin >> ds.nk.ngay >> c >> ds.nk.thang >> c >> ds.nk.nam;
}
void inds(NhanVien ds[], int n){
    for (int i = 0; i < n; i++){
        if (i+1 <= 9) cout << "0000" << i+1 << " ";
        else cout <<"000" << i+1 << " ";
        cout << ds[i].name << " " << ds[i].gt <<" ";
        if (ds[i].date.ngay <= 9) cout << "0" << ds[i].date.ngay<< "/";
        else cout  << ds[i].date.ngay << "/";
        if (ds[i].date.thang <= 9) cout << "0" << ds[i].date.thang<< "/";
        else cout << ds[i].date.thang << "/";
        cout << ds[i].date.nam << " ";
        cout << ds[i].diachi << " " << ds[i].ma << " ";
        if (ds[i].nk.ngay <= 9) cout << "0" << ds[i].nk.ngay<< "/";
        else cout << ds[i].nk.ngay << "/";
        if (ds[i].nk.thang <= 9) cout << "0" << ds[i].nk.thang<< "/";
        else cout << ds[i].nk.thang << "/";
        cout << ds[i].nk.nam ;
        cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
// code by dnhuyen
