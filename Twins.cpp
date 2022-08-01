// https://codeforces.com/problemset/problem/160/A
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define ll          long long
#define pll         pair<long, long>
#define vll         vector<long long>
#define all(x)      x.begin(), x.end()
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

    ll n;
    cin >> n;
    vll arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll total = accumulate(arr.begin(), arr.end(), 0);
    sort(all(arr), greater<ll>());
    ll i = 1;
    ll ans = arr[0];
    while (i < n && ans <= (total - ans))
        ans += arr[i++];
    cout << i << "\n";
    return 0;
}