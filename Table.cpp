// https://codeforces.com/contest/359/problem/A
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define ll          long long
#define pll         pair<long, long>
#define vll         vector<long long>
#define inf         1e18
#define range(a,b)  substr(a,b-a+1)
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll n, m;
    cin >> n >> m;
    vector <vector <long long>> arr;
    ll ans = 4;
    for (ll i = 0; i < n; i++) {
        vll temp(m);
        for (ll j = 0; j < m; j++) {
            cin >> temp[j];
            if (((j == 0 || j == (m - 1)) && temp[j] == 1) || ((i == 0 || i == (n - 1)) && temp[j] == 1)) 
                ans = 2;
        }
        arr.pb(temp);
    }
    cout << ans << "\n";

    return 0;
}