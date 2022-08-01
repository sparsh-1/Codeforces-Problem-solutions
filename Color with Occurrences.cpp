// https://codeforces.com/contest/1714/problem/D
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
    string s;
    cin >> s;
    ll n;
    cin >> n;
    vector<string> arr(n);
    fori(0, n)
        cin >> arr[i];
    set<vll> vec;
    vector<bool> chk(s.size(), false);
    fori(0, n) {
        for (int j = 0; j < max((ll)0, (ll)s.size() - (ll)arr[i].size() + 1); j++) {
            if (arr[i] == s.substr(j, arr[i].size())) {
                vec.insert({j, j + arr[i].size() - 1, i + 1});
                fork(j, j + arr[i].size())
                    chk[k] = true;
            }
        }
    }
    fori(0, s.size()) {
        if (!chk[i]) {
            cout << "-1\n";
            return;
        }
    }
    vector<vll> vec2;
    vector<vector<ll>> ans;
    for (auto i: vec)
        vec2.push_back(i);
    int i = 0;
    for (; i < vec2.size(); i++) {
        int j = i + 1;
        bool flag = false;
        for (; j < vec2.size() && i < vec2.size(); j++) {
            if (vec2[i][0] == vec2[j][0]) {
                i++;
                continue;
            }
            else {
                flag = true;
                ans.push_back(vec2[j - 1]);
                break;
            }
        }
        if (ans.size() > 2) {
            if (ans.back()[0] == ans[ans.size() - 3][1] + 1) {
                vector<ll> temp = ans.back();
                ans.pop_back();
                ans.pop_back();
                ans.pb(temp);
            }
            else if (ans.back()[0] <= ans[ans.size() - 3][1]) {
                vector<ll> temp = ans.back();
                ans.pop_back();
                ans.pop_back();
                ans.pb(temp);
            }
        }
        if (ans.size() > 0 && ans.back()[1] == s.size() - 1)
            break;
        if (!flag) {
            ans.pb(vec2.back());
            if (ans.size() > 2) {
                if (ans.back()[0] == ans[ans.size() - 3][1] + 1) {
                    vector<ll> temp = ans.back();
                    ans.pop_back();
                    ans.pop_back();
                    ans.pb(temp);
                }
                else if (ans.back()[0] <= ans[ans.size() - 3][1]) {
                    vector<ll> temp = ans.back();
                    ans.pop_back();
                    ans.pop_back();
                    ans.pb(temp);
                }
            }
            break;
        }
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i][2] << " " << ans[i][0] + 1 << "\n";
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

