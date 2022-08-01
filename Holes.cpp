// https://codeforces.com/contest/13/problem/E
// Used Square root decomposition 
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
#define mll         map<ll, ll>
#define inf         1e18
#define gcd(a, b)   __gcd(a, b)
#define range(a,b)  substr(a,b-a+1)
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define fori(a, n)  for (ll i = a; i < n; i++)
#define forj(a, n)  for (ll j = a; j < n; j++)
#define fork(a, n)  for (ll k = a; k < n; k++)
#define print(x)    for (auto i : x) {cout << i << " ";}
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937             rng(chrono::steady_clock::now().time_since_epoch().count());

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

    ll n, m;
    cin >> n >> m;
    vll arr(n), jumps(n), next_block(n);
    fori(0, n)
        cin >> arr[i];

    ll block_size = sqrt(n);
    
    for (int i = n - 1; i >= 0; i--) {
        if (i + 1 + arr[i] > n) {
            jumps[i] = 1;
            next_block[i] = n + 1;
        }
        else if (((i + arr[i]) / block_size) == (i / block_size)) {
            jumps[i] = 1 + jumps[i + arr[i]];
            next_block[i] = next_block[i + arr[i]];
        }
        else {
            jumps[i] = 1;
            next_block[i] = i + arr[i];
        }
    }

    fori(0, m) {
        ll test;
        cin >> test;
        if (test) {
            ll a;
            cin >> a;
            ll no_of_jumps = 0, last_idx = a - 1;
            a--;
            ll lst = a;
            while (a < n) {
                no_of_jumps += jumps[a];
                if (next_block[a] >= n)
                    break;
                a = next_block[a];
                lst = a;
            }

            while (lst < n) {
                a = lst;
                lst += arr[lst];
            }

            cout << a + 1 << " " << no_of_jumps << "\n";
        }
        else {
            ll a, b;
            cin >> a >> b;
            arr[a - 1] = b;
            for (int j = a - 1; j >= ((a - 1) / block_size) * block_size; j--) {
                if (j + 1 + arr[j] > n) {
                    jumps[j] = 1;
                    next_block[j] = n + 1;
                }
                else if (((j + arr[j]) / block_size) == (j / block_size)) {
                    jumps[j] = 1 + jumps[j + arr[j]];
                    next_block[j] = next_block[j + arr[j]];
                }
                else {
                    jumps[j] = 1;
                    next_block[j] = j + arr[j];
                }
            }
        }
    }

    return 0;
}