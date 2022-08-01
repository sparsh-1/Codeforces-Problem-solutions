// https://codeforces.com/contest/1487/problem/A
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define ll          long long
#define pll         pair<long, long>
#define vll         vector<long long>
#define inf         1e18
#define range(a,b)	substr(a,b-a+1)
#define w(x)        int x; cin>>x; while(x--)
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    w(t) {
        ll n, temp;
        cin >> n;
        vll arr;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            arr.pb(temp);
        }
        sort(arr.begin(), arr.end());
        ll i = 0;
        while ( i < arr.size() - 1 && arr[i] == arr[i + 1]) {
            i += 1;
        }
        cout << arr.size() - i - 1 << "\n";

    }

    return 0;
}