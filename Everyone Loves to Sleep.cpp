// https://codeforces.com/contest/1714/problem/A
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
    ll n, h, m;
    cin >> n >> h >> m;
    vector<pll> arr(n);
    fori(0, n)
        cin >> arr[i].first >> arr[i].second;
    
    ll ansh, ansm;
    
    if (arr[0].first >= h) {
        if (arr[0].first > h || (arr[0].first == h && arr[0].second >= m)) {
            ansh = arr[0].first - h - 1;
            ansm = 60 - m + arr[0].second;
        }
        else {
            ansh = 24 - h + arr[0].first - 1;
            ansm = 60 - m + arr[0].second;
        }
        if (ansm >= 60) {
            ansh++;
            ansm -= 60;
        }
    }
    else {
        ansh = 24 - h + arr[0].first - 1;
        ansm = 60 - m + arr[0].second;
        if (ansm >= 60) {
            ansh++;
            ansm -= 60;
        }
    }
    for (int i = 1; i < n; i++) {
        ll tansh, tansm;
        if (arr[i].first >= h) {
            if (arr[i].first > h || (arr[i].first == h && arr[i].second >= m)) {
                tansh = arr[i].first - h - 1;
                tansm = 60 - m + arr[i].second;
            }
            else {
                tansh = 24 - h + arr[i].first - 1;
                tansm = 60 - m + arr[i].second;
            }
            if (tansm >= 60) {
                tansh++;
                tansm -= 60;
            }
        }
        else {
            tansh = 24 - h + arr[i].first - 1;
            tansm = 60 - m + arr[i].second;
            if (tansm >= 60) {
                tansh++;
                tansm -= 60;
            }
        }
        if (tansh <= ansh && tansm <= ansm) {
            ansh = tansh;
            ansm = tansm;
        }
        else if (tansh < ansh) {
            ansh = tansh;
            ansm = tansm;
        }
    }
    cout << ansh << " " << ansm << "\n";
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

