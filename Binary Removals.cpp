// https://codeforces.com/contest/1499/problem/B
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
        string s;
        cin >> s;
        ll i = 0;
        while (i < s.size() && s[i] == '0') {
            i++;
        }
        if (i == s.size())
            cout << "YES\n";
        else {
            ll co1 = 0;
            bool flag = true;
            while ((i + 1) < s.size()) {
                flag = true;
                if (s[i] == '1' && s[i + 1] == '1') {
                    co1++;
                    ll j = i;
                    while ((j + 1) < s.size()) {
                        if (s[j] == '0' && s[j + 1] == '0')
                            flag = false;
                        j++;
                    }
                }
                if (!flag)
                    break;
                i++;
            }
            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        
    }

    return 0;
}