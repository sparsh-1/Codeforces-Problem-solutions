// https://codeforces.com/problemset/problem/258/A
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

    string s;
    cin >> s;
    if (count(s.begin(), s.end(), '0') > 0) {
        ll i = 0;
        while (i < s.size() && s[i] != '0') 
            cout << s[i++];
        i++;
        while (i < s.size())
            cout << s[i++];
    }
    else {
        ll i = 0;
        while (i < s.size() - 1)
            cout << s[i++];
    }
    cout << "\n";
    return 0;
}