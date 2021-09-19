#include<bits/stdc++.h>
using namespace std;
int check[100005];
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < 100005; i++){
        check[i] = 0;
    }
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n+5], b[m+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < m; i++){
            cin >> b[i];
        }
        int giao[m+n+5], k = 0;
        for (int i = 0; i < n; i++){
            giao[k++] = a[i];
        }
        for (int i = 0; i < m; i++){
            giao[k++] = b[i];
        }
        sort(giao, giao + k);
        for (int i = 0; i < k; i++){
            check[giao[i]] ++;
        }
        for (int i = 0; i < k; i++){
            if (check[giao[i]] > 0){
                cout << giao[i] <<" ";
                check[giao[i]] = 0;
            }
        }
        cout << endl;
        int hop[m+n+5], q = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (b[j] == a[i]){
                    hop[q++] = b[j];
                    break;
                }
            }
        }
        sort (hop, hop+q);
        for (int i = 0; i < q; i++){
            cout << hop[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// code by dnhuyen
