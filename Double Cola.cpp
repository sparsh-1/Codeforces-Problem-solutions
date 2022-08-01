// https://codeforces.com/contest/82/problem/A
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

    vector <string> arr {" ", "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    ll n;
    cin >> n;
    ll ans = (n / 5);
    if (n % 5 != 0)
        ans++;
    ll i = 0;
    while (ans >= pow(2, i))
        i++;
    ans = pow(2, i - 1);
    ll chk = 5 * (ans - 1);
    cout << arr[(n - chk + ans - 1) / ans] << "\n";
    return 0;
}