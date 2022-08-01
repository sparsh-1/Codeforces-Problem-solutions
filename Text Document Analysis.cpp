// https://codeforces.com/contest/723/problem/B
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

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll i = 0;
    ll word = 0, bword = 0;
    while (i < n) {
        if (s[i] != '_' && s[i] != '(' && s[i] != ')') {
            ll j = 0;
            while (i < n && (s[i] != '_' && s[i] != '(' && s[i] != ')')) {
                i++;
                j++;
            }
            if (j > word)
                word = j;
        }
        else if (s[i] == '(') {
            ll j = 1;
            i++;
            while (i < n && s[i] == '_') {
                i++;
            }
            while (i < n && s[i] != ')') {
                if (s[i] == '_') {
                    j++;
                    while (i < n && s[i] == '_') {
                        i++;
                    }
                }
                else
                    i++;
            }
            if (s[i - 1] == '_' || s[i - 1] == '(')
                j--;
            bword += j;
        }
        else
            i++;
    }
    cout << word << " " << bword << "\n";
    return 0;
}