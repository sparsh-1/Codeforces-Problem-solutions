// https://codeforces.com/contest/69/problem/A
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

    ll n, x, y, z, fx = 0, fy = 0, fz = 0;
    cin >> n;
    fi(0, n) {
        cin >> x >> y >> z;
        fx += x;
        fy += y;
        fz += z;
    }
    if (!fx && !fy && !fz)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}