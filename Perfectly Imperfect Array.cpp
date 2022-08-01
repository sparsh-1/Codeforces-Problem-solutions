// https://codeforces.com/contest/1514/problem/A
#include <bits/stdc++.h>

using namespace std;

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
#define fori(a, n)  for (ll i = a; i < n; i++)
#define forj(a, n)  for (ll j = a; j < n; j++)
#define fork(a, n)  for (ll k = a; k < n; k++)
#define print(x)    for (auto i : x) {cout << i << " ";}
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

template <class T>
bool comp(T a, T b) {
    if (a < b)
        return true;
    return false;
}

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vll car(n);
        fori(0, n)
            cin >> car[i];
        vll arr(10001);
        ll temp;
        bool flag = false;
        fori(0, n) {
            temp = car[i];
            ll k = 2;
            while(k <= car[i] && temp > 1) {
                while (temp % k == 0) {
                    arr[k]++;
                    temp /= k;
                }
                k++;
                if (k > temp / 2) {
                    arr[temp]++;
                    break;
                }
            }
            forj(2, 10001) {
                if (arr[j] % 2 == 1) {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        forj(2, 10001) {
            if (arr[j] % 2 == 1) {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}