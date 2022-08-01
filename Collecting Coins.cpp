// https://codeforces.com/contest/1294/problem/A
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
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        if (c >= b && c >= a)
            if ((c - b) + (c - a) <= n)
                if ((n - (c - b) - (c - a)) % 3 == 0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            else
                cout << "NO\n";
        else if (b >= c && b >= a) 
            if ((b - c) + (b - a) <= n)
                if ((n - (b - c) - (b - a)) % 3 == 0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            else
                cout << "NO\n";
        else
            if ((a - b) + (a - c) <= n)
                if ((n - (a - b) - (a - c)) % 3 == 0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            else
                cout << "NO\n";
    }

    return 0;
}