// https://codeforces.com/contest/1294/problem/C
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
        if (n % 2 == 0) {
            ll co = 1;
            vll arr{2};
            n /= 2;
            for (ll i = 3; i < sqrt(n) * log(n); i++) {
                if (n % i == 0) {
                    arr.pb(i);
                    n /= i;
                    co++;
                    break;
                }
                if ((n / i) < 3)
                    break;
            }
            if (co == 2 && n > arr[1]) {
                cout << "YES\n";
                for (ll i = 0; i < 2; i++)
                    cout << arr[i] << " ";
                cout << n;
                cout << "\n";
            }
            else
                cout << "NO\n";
        }
        else {
            ll co = 0;
            vll arr;
            for (ll i = 3; i < sqrt(n) * log(n); i += 2) {
                if (n % i == 0) {
                    co++;
                    arr.pb(i);
                    n /= i;
                    break;
                }
            }
            if (arr.size() > 0) {
                for (ll i = arr[0] + 2; i < sqrt(n) * log(n); i += 2) {
                    if (n % i == 0) {
                        co++;
                        arr.pb(i);
                        n /= i;
                        break;
                    }
                    if ((n / i) < arr[0] + 2)
                        break;
                }
                if (arr.size() > 1) {
                    if (n > arr[1]) {
                        cout << "YES\n";
                        cout << arr[0] << " " << arr[1] << " " << n <<"\n";
                    }
                    else
                        cout << "NO\n";
                }
                else 
                    cout << "NO\n";
            }
            else 
                cout << "NO\n";
        }
    }

    return 0;
}