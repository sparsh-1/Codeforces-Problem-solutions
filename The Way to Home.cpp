// https://codeforces.com/contest/910/problem/A
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

    ll n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    ll i = 0, ans = 0;
    bool flag = true;
    while (i < n) {
        ll j = 0, temp = 0;
        while ((i + j) < n && j < d) {
            j++;
            if (s[i + j] == '1') {
                temp = i + j;
            }
        }
        if (temp == 0) {
            flag = false;
            break;
        }
        else {
            i = temp;
            ans++;
            if (n - temp - 1 < d) {
                if (n - temp - 1 != 0)
                    ans++;
                break;
            }
        }
    }
    if (ans && flag)
        cout << ans;
    else
        cout << -1;
    return 0;
}