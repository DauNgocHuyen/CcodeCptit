#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int count1 = 0;
        int ok = 0;
        for (int i = 2; i <= sqrt(n); i++){
            int count = 0;
            while (n%i == 0){
                count ++;
                if (count > 1){
	                cout << "0" << endl;
	                ok = 1;
	                break;
	            }
                n/=i;
            }
            if (ok == 1) break;
            if (count == 1) count1 ++;
        }
        if (n > 1) count1 ++;
        if (ok == 0){
            if (count1 == 3) cout <<"1"<<endl;
            else cout <<"0"<<endl;
        }
    }
    return 0;
}
// code by dnhuyen
