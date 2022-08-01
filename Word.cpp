// https://codeforces.com/problemset/problem/59/A
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

    string s;
    cin >> s;
    ll cnt1 = 0, cnt2 = 0;
    for (auto i:s) {
        if (i <= (char)90)
            cnt1++;
        else 
            cnt2++;
    }
    if (cnt1 <= cnt2)
        for (auto i : s) {
            if (i <= (char)90)
                cout << (char)(i + 32);
            else
                cout << i;
        }
    else 
        for (auto i : s) {
            if (i <= (char)90)
                cout << i;
            else 
                cout << (char)(i - 32);
        }
    return 0;
}