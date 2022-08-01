// https://codeforces.com/problemset/problem/1491/A
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

    ll n, q, n1 = 0;
    cin >> n >> q;
    vll arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i])
            n1++;
    }
    while (q--) {
        ll t, x;
        cin >> t >> x;
        if (t == 1) 
            if (arr[x - 1]) {
                arr[x - 1] = 0;
                n1--;
            }
            else {
                arr[x - 1] = 1;
                n1++;
            }
        else
            if (x > n1)
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
    }
    return 0;
}