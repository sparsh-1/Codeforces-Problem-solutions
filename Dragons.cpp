// https://codeforces.com/problemset/problem/230/A
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

bool comp(pll a, pll b) {
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll s, n;
    cin >> s >> n;
    vector <pll> arr;
    for (ll i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        arr.pb(mp(x, y));
    }
    sort(arr.begin(), arr.end(), comp);
    bool flag = true;
    for (ll i = 0; i < n; i++) {
        if (s > arr[i].first) {
            s += arr[i].second;
        }
        else {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}