// https://codeforces.com/problemset/problem/1311/A
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
        ll a, b;
        cin >> a >> b;
        if (a == b)
            cout << 0 << "\n";
        else if (a > b)
            if (b % 2 == 0)
                if (a % 2 == 0)
                    cout << 1 << "\n";
                else 
                    cout << 2 << "\n";
            else
                if (a % 2 != 0)
                    cout << 1 << "\n";
                else
                    cout << 2 << "\n";
        else if (a < b)
            if (a % 2 == 0)
                if (b % 2 != 0)
                    cout << 1 << "\n";
                else
                    cout << 2 << "\n";
            else 
                if (b % 2 == 0)
                    cout << 1 << "\n";
                else 
                    cout << 2 << "\n";
    }

    return 0;
}