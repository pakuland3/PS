#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m,tmp;
        cin >> n >> m;
        for(int i=0;i<m;i++) for(int j=0;j<2;j++) cin >> tmp;
        cout << n-1 << '\n';
    }
    return 0;
}