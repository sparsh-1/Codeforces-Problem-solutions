// https://codeforces.com/contest/1294/problem/B
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

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <pair <ll, ll>> arr;
        ll x, y;
        for (ll i = 0; i < n; i++) {
            cin >> x >> y;
            arr.pb(mp(x, y));
        }
        sort(arr.begin(), arr.end());
        string ans = "";
        bool flag = true;
        for (ll i = 0; i < n; i++) {
            if (arr[i].first < 0 || arr[i].second < 0) {
                flag = false;
                break;
            }
            for (ll j = 0; j < arr[i].first; j++)
                ans += 'R';
            for (ll j = i + 1; j < n; j++)
                arr[j].first -= arr[i].first;
            for (ll j = 0; j < arr[i].second; j++)
                ans += 'U';
            for (ll j = i + 1; j < n; j++)
                arr[j].second -= arr[i].second;
        }
        if (flag)
            cout << "YES\n" << ans << "\n";
        else
            cout << "NO\n";
    }

    return 0;
}