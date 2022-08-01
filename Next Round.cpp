// https://codeforces.com/problemset/problem/158/A
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

    ll n, k, temp;
    cin >> n >> k;
    vll arr(n);
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[i] = temp;
    }
    if (arr[0] <= 0)
        cout << 0;
    else {
        if (arr[k - 1] <= 0) 
            while (k > 0 && arr[k - 1] <= 0)
                k--;
        else
            while (k < n && arr[k - 1] == arr[k])
                k++;
        cout << k;
    }
    return 0;
}