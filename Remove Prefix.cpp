// https://codeforces.com/contest/1714/problem/B
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
#define pll         pair<ll, ll>
#define vll         vector<long long>
#define vpll        vector<pll>
#define mll         map<ll, ll>
#define sz(x)       ((int) x.size())
#define inf         1e18
#define que_max     priority_queue<ll>
#define que_min     priority_queue <ll, vll, greater<ll>>
#define gcd(a, b)   __gcd(a, b)
#define range(a,b)  substr(a,b-a+1)
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define fori(a, n)  for (ll i = a; i < n; i++)
#define forj(a, n)  for (ll j = a; j < n; j++)
#define fork(a, n)  for (ll k = a; k < n; k++)
#define print(x)    for (auto i : x) cout << i << " "; cout << "\n";
#define print1(x)   for (auto i : x) cout << i.fi << " " << i.se << "\n";
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937             rng(chrono::steady_clock::now().time_since_epoch().count());

inline ll power(ll a, ll b)
{
    ll x = 1;
    while (b) {
        if (b & 1)
            x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

template <class T>
bool comp(T a, T b) {
    if (a < b)
        return true;
    return false;
}

void solve() {
    ll n;
    cin >> n;
    vll arr(n), tarr(n);
    fori(0, n)
        cin >> arr[i];
    map<ll, ll> mp;
    for (int i = n - 1; i >= 0; i--) {
        if (mp.find(arr[i]) == mp.end()) {
            mp[arr[i]] = i;
            tarr[i] = -1;
        }
        else {
            cout << i + 1 << "\n";
            return;
        }
    }
    cout << 0 << "\n";
}

int32_t main()
{
    FIO;

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    clock_t z = clock();

    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    cerr << "Run Time: " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";

    return 0;
}

