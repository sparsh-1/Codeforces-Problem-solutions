// https://codeforces.com/problemset/problem/1348/A
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

    vll arr(30);
    for (ll i = 0; i < 30; i++) {
        arr[i] = pow(2, i + 1);
    }

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll sa = arr[n - 1], sb = 0;
        for (ll i = 0; i < (n / 2) - 1; i++)
            sa += arr[i];
        for (ll i = (n / 2) - 1; i < n - 1; i++)
            sb += arr[i];
        cout << sa - sb << "\n";
    }

    return 0;
}