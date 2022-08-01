// https://codeforces.com/contest/1350/problem/A
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
#define print(x)    for (auto i : x) {cout << i << " ";}
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

template <class T>
bool comp(T a, T b) {
    if (a < b)
        return true;
    return false;
}

vector <bool> arr(1000001, true);

void sieve(ll n = 1000001)
{
    for (ll i = 2; i < n + 1; i++) {
        if (arr[i])
            for(ll j = i * i; j < n + 1; j += i)
                arr[j] = false;
    }
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
    sieve();
    while (t--) {
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0)
            cout << n + 2 * k << "\n";
        else {
            bool flag = true;
            for (ll i = 2; i < n / 2; i++) {
                if (arr[i] && (n % i) == 0) {
                    cout << n + i + 2 * (k - 1) << "\n";
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << n * 2 + 2 * (k - 1) << "\n";
        }
    }

    return 0;
}