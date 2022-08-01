// https://codeforces.com/contest/275/problem/A
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
#define gcd(a, b)   __gcd(a, b)
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

    vector <vll> mat(3, vll(3)), ans(3, vll(3, 1));
    fori(0, mat.size())
        forj(0, mat[i].size()) {
            cin >> mat[i][j];
            if (mat[i][j] % 2 == 0)
                mat[i][j] = 0;
            else
                mat[i][j] = 1;
        }

    fori(0, mat.size())
        forj(0, mat[i].size())
            if (mat[i][j]) {
                if (ans[i][j])
                    ans[i][j] = 0;
                else
                    ans[i][j] = 1;
                if (i != 0) {
                    if (ans[i - 1][j])
                        ans[i - 1][j] = 0;
                    else
                        ans[i - 1][j] = 1;
                }
                if (i != 2) {
                    if (ans[i + 1][j])
                        ans[i + 1][j] = 0;
                    else
                        ans[i + 1][j] = 1;
                }
                if (j != 0) {
                    if (ans[i][j - 1])
                        ans[i][j - 1] = 0;
                    else
                        ans[i][j - 1] = 1;
                }
                if (j != 2) {
                    if (ans[i][j + 1])
                        ans[i][j + 1] = 0;
                    else
                        ans[i][j + 1] = 1;
                }
            }
    fori(0, mat.size()) {
        forj(0, mat[i].size())
            cout << ans[i][j];
        cout << "\n";
    }

    return 0;
}