// https://codeforces.com/contest/1509/problem/A
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
        ll n, temp;
        cin >> n;
        vll odd, even;
        for (ll i = 0; i < n; i++) {
            cin >> temp;
            if (temp % 2 == 0)
                even.pb(temp);
            else
                odd.pb(temp);
        }
        for (ll i = 0; i < odd.size(); i++) {
            cout << odd[i] << " ";
        }
        for (ll i = 0; i < even.size(); i++) {
            cout << even[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}