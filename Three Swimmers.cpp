// https://codeforces.com/problemset/problem/1492/A
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
        unsigned long long p, a, b, c;
        cin >> p >> a >> b >> c;
        if (p % a == 0 || p % b == 0 || p % c == 0)
            cout << 0 << "\n";
        else {
            unsigned long long am, bm, cm, ans = inf;
            am = p % a;
            bm = p % b;
            cm = p % c;
            if (ans > (a - am))
                ans = a - am;
            if (ans > (b - bm))
                ans = b - bm;
            if (ans > (c - cm))
                ans = c - cm;
            cout << ans << "\n";
        }
    }

    return 0;
}