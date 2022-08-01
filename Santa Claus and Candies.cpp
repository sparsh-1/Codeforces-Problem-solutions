// https://codeforces.com/contest/753/problem/A
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define ll          long long
#define pll         pair<long, long>
#define vll         vector<long long>
#define inf         1e18
#define range(a,b)  substr(a,b-a+1)
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll n;
    cin >> n;
    ll i = 1;
    while ((i * (i + 1)) / 2 < n)
        i++;
    if ((i * (i + 1)) / 2 == n) {
        cout << i << "\n";
        for (ll j = 1; j <= i; j++)
            cout << j << " ";
        cout << "\n";
    }
    else if (n == 2)
        cout << 1 << "\n2\n";
    else {
        i--;
        cout << i << "\n";
        for (ll j = 1; j < i; j++)
            cout << j << " ";
        i--;
        cout << n - (i * (i + 1)) / 2;
        cout << "\n";
    }
    return 0;
}