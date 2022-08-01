// https://codeforces.com/problemset/problem/1472/B
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
        ll n, c1 = 0, c2 = 0, temp;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> temp;
            if (temp == 1)
                c1++;
            else
                c2++;
        }
        if (c1 % 2 == 0 & c2 % 2 == 0)
            cout << "YES\n";
        else if (c2 % 2 == 0 && c1 % 2 == 1)
            cout << "NO\n";
        else {
            if (c1 % 2 == 0) {
                c2 = 1;
                if (c2 <= 2 * c1)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}