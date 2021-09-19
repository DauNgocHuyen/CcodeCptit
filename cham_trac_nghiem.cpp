#include<bits/stdc++.h>
using namespace std;
string a = "A B B A D C C A B D C C A B D";
string b = "A C C A B C D D B B C D D B B";
int main(){
    int t;
    cin  >> t;
    while (t--){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        double diem = 0;
        if (n == 101){
            int count = 0;
            for (int i = 0; i < 29; i++){
                if (s[i] == a[i]) count ++;
            }
            diem = ((float)2/3) * (count - 14);
            cout << fixed << setprecision(2) << diem << endl;
        }
        else if (n == 102){
            int count = 0;
            for (int i = 0; i < 29; i++){
                if (s[i] == b[i]) count ++;
            }
            diem = ((float)2/3) * (count - 14);
            cout << fixed << setprecision(2) << diem << endl;
        }
    }
    return 0;
}
// code by dnhuyen
