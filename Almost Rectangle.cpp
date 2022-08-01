// https://codeforces.com/contest/1512/problem/B
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
        vector <string> arr(n);
        ll row1 = 500, row2 = 500, col1, col2;
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            if (row1 == 500 || row2 == 500) {
                for (ll j = 0; j < n; j++) {
                    if (arr[i][j] == '*' && row1 == 500) {
                        row1 = i;
                        col1 = j;
                    }
                    else if (arr[i][j] == '*') {
                        row2 = i;
                        col2 = j;
                    }
                }
            }
        }
        if (row1 != row2 && col1 != col2) {
            for (ll i = 0; i < min(row1, row2); i++)
                cout << arr[i] << "\n";
            for (ll i = 0; i < min(col1, col2); i++)
                cout << ".";
            cout << "*";
            for (ll i = min(col1, col2) + 1; i < max(col1, col2); i++)
                cout << ".";
            cout << "*";
            for (ll i = max(col1, col2) + 1; i < n; i++)
                cout << ".";
            cout << "\n";
            for (ll i = min(row1, row2) + 1; i < max(row1, row2); i++)
                cout << arr[i] << "\n";
            for (ll i = 0; i < min(col1, col2); i++)
                cout << ".";
            cout << "*";
            for (ll i = min(col1, col2) + 1; i < max(col1, col2); i++)
                cout << ".";
            cout << "*";
            for (ll i = max(col1, col2) + 1; i < n; i++)
                cout << ".";
            cout << "\n";
            for (ll i = max(row1, row2) + 1; i < n; i++)
                cout << arr[i] << "\n";
        }
        else if (row1 == row2) {
            if (row1 == n - 1) {
                for (ll i = 0; i < min(col1, col2); i++)
                    cout << ".";
                cout << "*";
                for (ll i = min(col1, col2) + 1; i < max(col1, col2); i++)
                    cout << ".";
                cout << "*";
                for (ll i = max(col1, col2) + 1; i < n; i++)
                    cout << ".";
                cout << "\n";
                for (ll i = 1; i < n; i++)
                    cout << arr[i] << "\n";
            }
            else {
                for (ll i = 0; i < min(row1, row2) + 1; i++)
                    cout << arr[i] << "\n";
                for (ll i = 0; i < min(col1, col2); i++)
                    cout << ".";
                cout << "*";
                for (ll i = min(col1, col2) + 1; i < max(col1, col2); i++)
                    cout << ".";
                cout << "*";
                for (ll i = max(col1, col2) + 1; i < n; i++)
                    cout << ".";
                cout << "\n";
                for (ll i = row1 + 2; i < n; i++)
                    cout << arr[i] << "\n";
            }
        }
        else if (col1 == col2) {
            if (col1 == 0) {
                for (ll i = 0; i < min(row1, row2); i++)
                    cout << arr[i] << "\n";
                cout << "**";
                for (ll i = max(col1, col2) + 2; i < n; i++)
                    cout << ".";
                cout << "\n";
                for (ll i = min(row1, row2) + 1; i < max(row1, row2); i++)
                    cout << arr[i] << "\n";
                cout << "**";
                for (ll i = max(col1, col2) + 2; i < n; i++)
                    cout << ".";
                cout << "\n";
                for (ll i = max(row1, row2) + 1; i < n; i++)
                    cout << arr[i] << "\n";
            }
            else {
                for (ll i = 0; i < min(row1, row2); i++)
                    cout << arr[i] << "\n";
                cout << "*";
                for (ll i = 1; i < min(col1, col2); i++)
                    cout << ".";
                cout << "*";
                for (ll i = max(col1, col2) + 1; i < n; i++)
                    cout << ".";
                cout << "\n";
                for (ll i = min(row1, row2) + 1; i < max(row1, row2); i++)
                    cout << arr[i] << "\n";
                cout << "*";
                for (ll i = 1; i < min(col1, col2); i++)
                    cout << ".";
                cout << "*";
                for (ll i = max(col1, col2) + 1; i < n; i++)
                    cout << ".";
                cout << "\n";
                for (ll i = max(row1, row2) + 1; i < n; i++)
                    cout << arr[i] << "\n";
            }
        }
    }

    return 0;
}