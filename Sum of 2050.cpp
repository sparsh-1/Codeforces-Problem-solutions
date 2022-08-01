// https://codeforces.com/contest/1517/problem/A
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(), x.end()
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
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    vll arr;
    arr.pb(2050);
    for (ll i = 0; i < 14; i++)
        arr.pb(arr.back() * 10);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = 0, i = arr.size() - 1;
        bool flag = true;
        while (n > 0) {
            if (n - arr[i] >= 0) {
                n -= arr[i];
                ans++;
            }
            else if (n < 2050) {
                flag = false;
                break;
            }
            else
                i--;
        }
        if (flag)
            cout << ans << "\n";
        else
            cout << "-1\n";
    }

    return 0;
}