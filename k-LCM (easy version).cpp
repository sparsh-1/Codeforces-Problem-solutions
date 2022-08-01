// https://codeforces.com/contest/1497/problem/C1
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
        ll n, k;
        cin >> n >> k;
        if (n == 3)
            cout << "1 1 1\n";
        else if (n % 4 == 0)
            cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
        else if (n % 2 == 0)
            cout << ((n / 2) - 1) << " " << ((n / 2) - 1) << " 2\n"; 
        else 
            cout << (n / 2) << " " << (n / 2) << " 1\n"; 
    }

    return 0;
}