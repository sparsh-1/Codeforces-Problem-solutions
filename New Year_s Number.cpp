// https://codeforces.com/contest/1475/problem/B
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
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2020 == 0)
            cout << "YES\n";
        else if (n % 2021 == 0)
            cout << "YES\n";
        else if (n < 2020)
            cout << "NO\n";
        else {
            int a = n - (n / 2020) * 2020;
            if (a <= (n / 2021))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}