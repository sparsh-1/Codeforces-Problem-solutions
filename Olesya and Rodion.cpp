// https://codeforces.com/contest/584/problem/A
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

    ll n, t;
    cin >> n >> t;
    if (t == 1)
        for (int i = 0; i < n; i++)
            cout << 1;
    else if (t == 2)
        for (int i = 0; i < n; i++)
            cout << 2;
    else if (t == 3)
        for (int i = 0; i < n; i++)
            cout << 3;
    else if (t == 4)
        for (int i = 0; i < n; i++)
            cout << 4;
    else if (t == 5)
        for (int i = 0; i < n; i++)
            cout << 5;
    else if (t == 6)
        for (int i = 0; i < n; i++)
            cout << 6;
    else if (t == 7)
        for (int i = 0; i < n; i++)
            cout << 7;
    else if (t == 8)
        for (int i = 0; i < n; i++)
            cout << 8;
    else if (t == 9)
        for (int i = 0; i < n; i++)
            cout << 9;
    else if (t == 10)
        if (n == 1)
            cout << -1;
        else {
            cout << 1;
            for (int i = 1; i < n; i++)
                cout << 0;
        }
    return 0;
}