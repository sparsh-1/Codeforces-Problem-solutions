// https://codeforces.com/contest/1512/problem/D
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
        ll n;
        cin >> n;
        vll arr(n + 2);
        for (ll i = 0; i < n + 2; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        ll ans = 0;
        ll ind = inf;
        bool flag = false;
        for (ll i = 0; i <= n; i++)
            ans += arr[i];
        if (ans - arr[n] > arr[n + 1])
            cout << "-1\n";
        else {
            vll narr(n + 1);
            for (ll i = 0; i < n + 1; i++) {
                narr[i] = ans - arr[i];
                if (!flag && narr[i] == arr[n + 1]) {
                    flag = true;
                    ind = i;
                }
            }
            if (flag || (ans - arr[n]) == arr[n]) {
                if (ind == inf)
                    ind = n;
                for (ll i = 0; i <= n; i++) {
                    if (i == ind)
                        continue;
                    else
                        cout << arr[i] << " ";
                }
                cout << "\n";
            }
            else
                cout << "-1\n";
        }
    }

    return 0;
}