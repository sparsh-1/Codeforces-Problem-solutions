// https://codeforces.com/contest/199/problem/A
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

    ll n;
    cin >> n;
    vll arr;
    arr.pb(0);
    arr.pb(1);
    arr.pb(1);
    ll i = 2;
    while (arr[i] < n) {
        arr.pb(arr[i] + arr[i-1]);
        i++;
    }
    if (n == 0 || n == 1 || n == 2) {
        if (n == 0)
            cout << 0 << " " << 0 << " " << 0;
        else if (n == 1)
            cout << 0 << " " << 0 << " " << 1;
        else
            cout << 0 << " " << 1 << " " << 1;
    }
    else {
        cout << 0 << " " << arr[i - 1] << " " << arr[i - 2];
    }
    return 0;
}