/**
* @file test.cpp
*
* Created on 2024-09-03 at 16:50:19
* @author Gabriel Ayres
*/

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }

const ll INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll dp[1000001];

void dfs(ll u, vector<vector<ll>> g){

    dp[u] = 1;
    
    for(ll j = 0; j < g[u].size(); j++){
        pair<ll,ll>  v = make_pair(g[u][j], 0);
        if(dp[v.first] == 0){
            dfs(v.first, g);
        }
    }
}

int main() { _
    ll x,y;

    cin >> x >> y;
    vector<vector<ll>>s(x, vector<ll>(y));
    ll cont  = 0;

    for(ll i = 0; i < x; i ++){
        for(ll j = 0; j < y; j++){
            s[i][j] = abs(i - j);
        }
    }

    for(ll i = 0; i < x; i++){
        for(ll j = 0; j < y; j++){
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    dfs(1, s);
    for(ll a  : dp){
        if(a == 1){cont++;}
    }
    cout << cont <<endl;
    return 0;
};