// https://codeforces.com/problemset/problem/1352/A
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
        ll n;
        cin >> n;
        ll i = 0, co = 0;
        vector <string> arr;
        while (n != 0) {
            if (n % 10 != 0) {
                co++;
                string a = "";
                a += (n % 10) + 48;
                for (ll j = 0; j < i; j++)
                    a += '0';
                arr.pb(a);
            }
            i++;
            n /= 10;
        }
        cout << co << "\n";
        for (ll i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

    return 0;
}