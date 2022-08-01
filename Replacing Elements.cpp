// https://codeforces.com/problemset/problem/1473/A
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
        ll n, d;
        cin >> n >> d;
        bool flag = true;
        vll arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > d)
                flag = false;
        }
        if (flag)
            cout << "YES\n";
        else {
            sort(arr.begin(), arr.end());
            ll ans = 0;
            vll nyi;
            for (ll i = 0; i < n; i++) {
                if (arr[i] < d) {
                    nyi.pb(arr[i]);
                    ans++;
                }
                if (ans >= 2)
                    break;
            }
            if (ans >= 2 && (nyi[0] + nyi[1]) <= d)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}