#include <bits/stdc++.h>
#define MOD 1000000000
using namespace std;

int n,k;
long long dp[201][201];

int main(){
    cin >> n >> k;
    for(int i=1;i<=k;i++){
        dp[0][i]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            dp[i][j]=(dp[i][j-1]+dp[i-1][j])%MOD;
        }
    }
    cout << dp[n][k];
    return 0;
}