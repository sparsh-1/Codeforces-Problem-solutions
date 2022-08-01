// https://codeforces.com/problemset/problem/1516/B
#include <bits/stdc++.h>

using namespace std;

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
#define fori(a, n)  for (ll i = a; i < n; i++)
#define forj(a, n)  for (ll j = a; j < n; j++)
#define fork(a, n)  for (ll k = a; k < n; k++)
#define print(x)    for (auto i : x) {cout << i << " ";}
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

template <class T>
bool comp(T a, T b) {
    if (a < b)
        return true;
    return false;
}

bool allequal(vll arr) {
    ll s = 0, i;
    for (i = 1; i < arr.size(); i++)
        if (arr[i] == arr[i - 1])
            continue;
        else
            break;
    return (i == arr.size());
}

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
        ll n, temp, ans;
        cin >> n;
        vll arr(n);
        fori(0, n) {
            cin >> temp;
            arr[i] = temp;
            if (i == 0)
                ans = temp;
            else
                ans = ans ^ temp;
        }
        if (ans == 0 || allequal(arr))
            cout << "YES\n";
        else {
            ll xor1 = 0, co = 0;
            fori(0, n) {
                xor1 = xor1 ^ arr[i];
                if (xor1 == ans) {
                    xor1 = 0;
                    co++;
                }
            }
            if (co >= 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}