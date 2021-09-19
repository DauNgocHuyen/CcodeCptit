#include<bits/stdc++.h>
using namespace std;
struct Point {
    double hd, td;
};
void input (Point &A){
    cin >> A.hd >> A.td;
}
double distance(Point A, Point B){
    double x = sqrt((A.hd - B.hd)*(A.hd - B.hd) + (A.td - B.td)*(A.td - B.td));
    return x;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
// code by dnhuyen
