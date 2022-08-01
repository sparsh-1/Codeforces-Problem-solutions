// https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(), x.end()
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
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    string s;
    cin >> s;
    vll arr(10);
    ll ans = count(s.begin(), s.end(), '4') + count(s.begin(), s.end(), '7');
    bool flag = false;
    while (ans > 0) {
        if (ans % 10 == 4 or ans % 10 == 7) {
            ans /= 10;
            flag = true;
            continue;
        }
        else {
            flag = false;
            break;
        }

    }
    if (!ans and flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}