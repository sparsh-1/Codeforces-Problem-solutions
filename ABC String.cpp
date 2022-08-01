// https://codeforces.com/contest/1494/problem/A
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
    int t;
    cin >> t;
    string temp, ans;
    while(t--) {
        cin >> temp;
        if (temp[0] == temp[temp.size() - 1]) {
            cout << "NO\n";
            continue;
        }
        else {
            char open = temp[0];
            char close = temp[temp.size() - 1];
            int ans = 0;
            for (int i = 0; i < temp.size(); i++) {
                if (temp[i] == open)
                    ans++;
                else
                    ans--;
                if (ans < 0)
                    break;
            }
            if (!ans) {
                cout << "YES\n";
                continue;
            }
            else {
                ans = 0;
                for (int i = 0; i < temp.size(); i++) {
                    if (temp[i] == close)
                        ans--;
                    else
                        ans++;
                    if (ans < 0)
                        break;
                }
            }
            if (!ans)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}