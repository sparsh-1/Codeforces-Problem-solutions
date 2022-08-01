// https://codeforces.com/contest/476/problem/B
/*

     ░██████╗██████╗░░█████╗░██████╗░░██████╗██╗░░██╗  ░██████╗░██╗░░░██╗██████╗░████████╗░█████╗░
     ██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝██║░░██║  ██╔════╝░██║░░░██║██╔══██╗╚══██╔══╝██╔══██╗
     ╚█████╗░██████╔╝███████║██████╔╝╚█████╗░███████║  ██║░░██╗░██║░░░██║██████╔╝░░░██║░░░███████║
     ░╚═══██╗██╔═══╝░██╔══██║██╔══██╗░╚═══██╗██╔══██║  ██║░░╚██╗██║░░░██║██╔═══╝░░░░██║░░░██╔══██║
     ██████╔╝██║░░░░░██║░░██║██║░░██║██████╔╝██║░░██║  ╚██████╔╝╚██████╔╝██║░░░░░░░░██║░░░██║░░██║
     ╚═════╝░╚═╝░░░░░╚═╝░░╚═╝╚═╝░░╚═╝╚═════╝░╚═╝░░╚═╝  ░╚═════╝░░╚═════╝░╚═╝░░░░░░░░╚═╝░░░╚═╝░░╚═╝
    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
    █████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗
    ╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝
    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░

*/

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
#define setbits(x)  __builtin_popcountll(x)
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

ll fact(ll n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
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

    string s1, s2;
    cin >> s1 >> s2;
    ll pl1 = 0, pl2 = 0, mi1 = 0, mi2 = 0, qu2 = 0;
    pl1 = count(all(s1), '+');
    pl2 = count(all(s2), '+');
    mi1 = count(all(s1), '-');
    mi2 = count(all(s2), '-');
    qu2 = count(all(s2), '?');
    if (qu2 == 0)
        if (pl1 == pl2 && mi1 == mi2)
            cout << 1;
        else
            cout << 0;
    else if (pl1 < pl2 || mi1 < mi2)
        cout << 0 << "\n";
    else {
        pl1 -= pl2;
        mi1 -= mi2;
        bool flag = true;
        if (pl1 == 0 || mi1 == 0) {
            cout << (float)1 / (pow(2, qu2)) << "\n";
            flag = false;
        }
        if (flag) {
            float comb = 0;
            fori(1, min(pl1, mi1) + 1) {
                if (mi1 - i >= 0 && pl1 - i >= 0)
                    comb += (fact(pl1) / (fact(pl1 - i) * fact(i))) * (fact(mi1) / (fact(mi1 - i) * fact(i)));
                else
                    break;
            }
            comb++;
            comb /= pow(2, qu2);
            printf("%.9f", comb);
        }
    }
    return 0;
}