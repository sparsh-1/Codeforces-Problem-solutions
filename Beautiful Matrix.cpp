// https://codeforces.com/problemset/problem/263/A
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
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll arr[6][6], temp;
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            cin >> temp;
            if (temp) {
                cout << (abs(j - 3) + abs(i - 3));
                break;
            }
        }
    }

    return 0;
}