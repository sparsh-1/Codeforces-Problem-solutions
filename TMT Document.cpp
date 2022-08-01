// https://codeforces.com/contest/1509/problem/B
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

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vll arr(n);
        string s;
        cin >> s;
        if (s[0] != 'T' || s[n - 1] != 'T') {
            cout << "NO\n";
            continue;
        }
        else {
            ll tco = 0, mco = 0;
            for (ll i = 0; i < n; i++)
                if (s[i] == 'T')
                    tco++;
                else
                    mco++;
            if (2 * mco == tco) {
                ll i = 0, j = 0, tcnt = 0, mcnt = 0;
                bool flag = true;
                while (flag && tcnt < mco) {
                    if (s[i] == 'T')
                        tcnt++;
                    else
                        mcnt++;
                    if (tcnt < mcnt)
                        flag = false;
                    i++;
                }
                while (i < n && s[i] != 'T')
                    i++;
                while (s[j] != 'M')
                    j++;
                while (j < n && i < n && j < i) {
                    i++;
                    j++;
                    while (i < n && s[i] != 'T')
                        i++;
                    while (j < n && s[j] != 'M')
                        j++;
                }
                if (j == n && flag)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }
    }

    return 0;
}