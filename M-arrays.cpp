// https://codeforces.com/contest/1497/problem/B
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
        ll n, m, temp, m_div = 0, ans = 0;
        cin >> n >> m;
        map <ll, ll> arr;
        for (ll i = 0; i < n; i++) {
            cin >> temp;
            if (temp % m == 0)
                m_div++;
            else
                if (arr.find(temp % m) != arr.end())
                    arr[temp % m]++;
                else
                    arr[temp % m] = 1;
        }
        if (m_div)
            ans++;
        for (auto i = arr.begin(); i != arr.end(); i++) {
            if (arr.find(m - i->first) != arr.end()) {
                if (i->second != 0 && i->second == arr[m - i->first]) {
                    ans++;
                    arr[i->first] = 0;
                    arr[m - i->first] = 0;
                }
                else if (i->second > arr[m - i->first]) {
                    if (arr[m - i->first] > 0) {
                        ans++;
                        arr[i->first] = arr[i->first] - arr[m - i->first] - 1;
                        arr[m - i->first] = 0;
                        ans += arr[i->first];
                        arr[i->first] = 0;
                    }
                    else {
                        ans += arr[i->first];
                        arr[i->first] = 0;
                    }
                }
                else {
                    if (arr[i->first] > 0) {
                        ans++;
                        arr[m - i->first] = arr[m - i->first] - arr[i->first] - 1;
                        arr[i->first] = 0;
                        ans += arr[m - i->first];
                        arr[m - i->first] = 0;
                    }
                    else {
                        ans += arr[m - i->first];
                        arr[m - i->first] = 0;
                    }
                }
            }
            else {
                ans += i->second;
                arr[i->first] = 0;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}