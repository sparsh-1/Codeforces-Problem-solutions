// https://codeforces.com/contest/118/problem/B
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
#define fi(a, n)    for (ll i = a; i < n; i++)
#define fj(a, n)    for (ll j = a; j < n; j++)
#define fk(a, n)    for (ll k = a; k < n; k++)
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

    ll n;
    cin >> n;
    fi(0, n) {
        fj(0, 2 * (n - i)) {
            cout << " ";
        }
        if (i != 0)
            fj(0, i + 1) {
                cout << j << " ";
            }
        else
            cout << 0;
        for (ll j = i - 1; j > 0; j--)
            cout << j << " ";
        if (i != 0)
            cout << "0\n";
        else
            cout << "\n";
    }
    fi(0, n + 1)
        cout << i << " ";
    for (ll i = n - 1; i > 0; i--)
        cout << i << " ";
    cout << "0\n";
    for (ll i = n; i > 0; i--) {
        fj(0, 2 * (n - i + 1))
            cout << " ";
        if (i != 1)
            for (ll j = 0; j < i; j++)
                cout << j << " ";
        else
            cout << 0;
        for (ll j = i - 2; j > 0; j--)
            cout << j << " ";
        if (i != 1)
            cout << "0\n";
        else
            cout << "\n";
    }
    return 0;
}