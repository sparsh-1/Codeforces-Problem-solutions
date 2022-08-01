// https://codeforces.com/problemset/problem/1307/A
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
        ll n, d;
        cin >> n >> d;
        vll arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        for (ll i = 1; i < n; i++) {
            if (d == 0)
                break;
            if (arr[i] > 0) {
                if (d > arr[i] * i) {
                    d -= arr[i] * i;
                    arr[0] += arr[i];
                    arr[i] = 0;
                }
                else {
                    arr[0] += d / i;
                    arr[i] -= d / i;
                    d = 0;
                }
            }
        }
        cout << arr[0] << "\n";
    }

    return 0;
}