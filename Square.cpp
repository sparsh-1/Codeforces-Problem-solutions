// https://codeforces.com/contest/1351/problem/B
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

    ll t;
    cin >> t;
    while (t--) {
        ll a1, b1, a2, b2;
        bool flag = false;
        cin >> a1 >> b1;
        cin >> a2 >> b2;
        if (min(a1, b1) + min(a2, b2) == max(a1, b1) && max(a1, b1) == max(a2, b2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}