#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000];

void in(){
    int dem = 0;
	for(int i = 0; i < n; ++i){
        cout << a[i] ;
        dem ++;
        if (dem == n) cout << " ";
	}
}

void t(int i){
	for(int j = 0; j < 2; ++j){
		a[i] = j;
		if(i + 1 == n) in();
		else t(i + 1); 
	}
}

int main(){
    int k;
    cin >> k;
    while (k--){
        cin >> n;
	    t(0);
        cout << endl;
    }
	return 0;
}