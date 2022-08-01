// https://codeforces.com/contest/1206/problem/B
/*

     ░██████╗██████╗░░█████╗░██████╗░░██████╗██╗░░██╗  ░██████╗░██╗░░░██╗██████╗░████████╗░█████╗░
     ██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝██║░░██║  ██╔════╝░██║░░░██║██╔══██╗╚══██╔══╝██╔══██╗
     ╚█████╗░██████╔╝███████║██████╔╝╚█████╗░███████║  ██║░░██╗░██║░░░██║██████╔╝░░░██║░░░███████║
     ░╚═══██╗██╔═══╝░██╔══██║██╔══██╗░╚═══██╗██╔══██║  ██║░░╚██╗██║░░░██║██╔═══╝░░░░██║░░░██╔══██║
     ██████╔╝██║░░░░░██║░░██║██║░░██║██████╔╝██║░░██║  ╚██████╔╝╚██████╔╝██║░░░░░░░░██║░░░██║░░██║
     ╚═════╝░╚═╝░░░░░╚═╝░░╚═╝╚═╝░░╚═╝╚═════╝░╚═╝░░╚═╝  ░╚═════╝░░╚═════╝░╚═╝░░░░░░░░╚═╝░░░╚═╝░░╚═╝
    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
    █████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗
    ╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝
    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░

*/

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
#define setbits(x)  __builtin_popcountll(x)
#define gcd(a, b)   __gcd(a, b)
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

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll n, pos = 0, neg = 0, ze = 0;
    cin >> n;
    vll arr(n);
    fori(0, n) {
        cin >> arr[i];
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            ze++;
    }
    sort(all(arr));
    if (pos == 0 && neg == 0)
        cout << n << "\n";
    else if (neg == 0) {
        ll ans = 0;
        fori(0, n)
            if (arr[i] != 0)
                ans += arr[i] - 1;
            else
                ans++;
        cout << ans << "\n";
    }
    else if (pos == 0) {
        ll ans = 0;
        fori(0, n)
            if (arr[i] != 0)
                ans += -arr[i] - 1;
            else
                ans++;
        if (neg % 2 == 0)
            cout << ans << "\n";
        else if (ze > 0)
            cout << ans << "\n";
        else
            cout << ans + 2 << "\n";
    }
    else {
        ll ans = 0;
        if (neg % 2 == 0) {
            fori(0, neg)
                ans += -arr[i] - 1;
            ans += ze;
            fori(neg + ze, n)
                ans += arr[i] - 1;
            cout << ans << "\n";
        }
        else if (ze > 0) {
            fori(0, neg)
                ans += -arr[i] - 1;
            ans += ze;
            fori(neg + ze, n)
                ans += arr[i] - 1;
            cout << ans << "\n";
        }
        else {
            ll fn = arr[neg - 1];
            ll fp = arr[neg + ze];
            if (-fn + 1 < fp + 1) {
                fori(0, neg - 1)
                    ans += -arr[i] - 1;
                ans += -arr[neg - 1] + 1;
                fori(neg, n)
                    ans += arr[i] - 1;
                cout << ans << "\n";
            }
            else {
                fori(0, neg)
                    ans += -arr[i] - 1;
                ans += arr[neg] + 1;
                fori(neg + 1, n)
                    ans += arr[i] - 1;
                cout << ans << "\n";
            }
        }
    }
    return 0;
}