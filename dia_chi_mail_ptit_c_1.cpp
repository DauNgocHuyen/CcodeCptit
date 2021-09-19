#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
    	if (s[i] >= 'A' && s[i] <= 'Z'){
    		s[i] += 32;
		}
	}
    stringstream p(s);
    string token ;
    vector <string> ans;
    while (p >> token){
        ans.push_back(token);
    }
    cout << ans[ans.size()-1];
    string res;
    res += ans[0][0];
    for (int i = 1; i < ans.size()-1; i++){
        res += ans[i][0];
    }
    cout << res;
    cout <<"@ptit.edu.vn";
    return 0;
}
// code by dnhuyen
