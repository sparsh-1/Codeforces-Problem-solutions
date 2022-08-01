// https://codeforces.com/contest/1511/problem/B
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
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        if (c == 1) {
            cout << 1;
            for (ll i = 0; i < a - 1; i++)
                cout << 0;
            cout << " ";
            for (ll i = 0; i < b; i++)
                cout << 3;
            cout << "\n";
        }
        else {
            string s = "1";
            for (ll i = 1; i < c; i++)
                s += '0';
            ll ans = stoll(s);
            while (to_string(ans).size() < a) {
                ans *= 3;
            }
            cout << ans << " ";
            ans = stoll(s);
            while (to_string(ans).size() < b) {
                ans *= 5;
            }
            cout << ans << " \n";
        }
    }

    return 0;
}