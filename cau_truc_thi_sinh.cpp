#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string name, date;
    double d1, d2, tong;
};
void nhap (ThiSinh &A){
    getline(cin, A.name);
    getline (cin, A.date);
    cin >> A.d1 >> A.d2 >> A.tong;
}
void in (ThiSinh A){
    cout << A.name << " ";
    if (A.date.size() == 9) cout << "0" << A.date<<" ";
    else cout << A.date << " ";
    double x = A.tong + A.d1 + A.d2;
    cout << fixed << setprecision(1) << x;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
// code by dnhuyen
