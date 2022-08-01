// https://codeforces.com/contest/1497/problem/A
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
        map <int, int> ans;
        vll arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            if (ans.find(arr[i]) != ans.end())
                ans[arr[i]]++;
            else
                ans[arr[i]] = 1;
        }
        ll cnt = 0;
        while (cnt != n) {
            for (auto i = ans.begin(); i != ans.end(); i++) {
                if (i->second > 0) {
                    cout << i -> first << " ";
                    (i->second)--;
                    cnt++;
                }
                else {
                    continue;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}