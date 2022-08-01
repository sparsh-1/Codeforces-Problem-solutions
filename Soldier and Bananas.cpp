// https://codeforces.com/problemset/problem/546/A
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
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll n, k, w;
    cin >> k >> n >> w;
    if ((ll)k * ((w * (w + 1)) / 2) <= n)
        cout << 0;
    else 
        cout << (ll)k * ((w * (w + 1)) / 2) - (ll)n;

    return 0;
}