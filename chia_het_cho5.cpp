#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        reverse(s.begin(), s.end());
        long long sum = 0;
        if (s[0] == '0'){
            sum += 0;
        }
        else if (s[0] == '1'){
            sum += 1;
        }
        int count1 = 1;
        int count2 = 2;
        int count3 = 3;
        int count4 = 4;
        for (int i = 1; i < s.size(); i++){
            if (count1 == i){
                count1 += 4;
                if (s[i] == '0'){
                    sum += 0;
                }
                else sum += 2;
            }
            else if (count2 == i){
                count2 += 4;
                if (s[i] == '0'){
                    sum += 0;
                }
                else sum += 4;
            }
            else if (count3 == i){
                count3 += 4;
                if (s[i] == '0'){
                    sum += 0;
                }
                else sum += 8;
            }
            else if (count4 == i){
                count4 += 4;
                if (s[i] == '0'){
                    sum += 0;
                }
                else sum += 6;
            }
        }
        if (sum % 5 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
// code by dnhuyen
