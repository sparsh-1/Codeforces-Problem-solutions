// https://codeforces.com/contest/1337/problem/D
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
#define inf         2 * 1e18
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
        ll nr, ng, nb;
        cin >> nr >> ng >> nb;
        vll red(nr), green(ng), blue(nb);
        fori(0, nr)
            cin >> red[i];
        fori(0, ng)
            cin >> green[i];
        fori(0, nb)
            cin >> blue[i];
        sort(all(red));
        sort(all(green));
        sort(all(blue));
        ll i = 0, j = 0, k = 0;
        unsigned ll ans = inf;
        fori(0, nr) {
            auto it1 = lower_bound(all(green), red[i]);
            auto it2 = lower_bound(all(blue), red[i]);
            if (it1 - green.begin() == 0) {
                if (it2 - blue.begin() == 0) {
                    if (((((*it1) - red[i]) * ((*it1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans)
                        ans = ((((*it1) - red[i]) * ((*it1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                }
                else {
                    if (it2 != blue.end() && (((((*it1) - red[i]) * ((*it1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans))
                        ans = ((((*it1) - red[i]) * ((*it1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                    if ((((((*it1) - red[i]) * ((*it1) - red[i])) + ((*(it2 - 1) - red[i]) * (*(it2 - 1) - red[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1)))) < ans))
                        ans = ((((*it1) - red[i]) * ((*it1) - red[i])) + ((*(it2 - 1) - red[i]) * (*(it2 - 1) - red[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1))));
                }
            }
            else {
                if (it2 - blue.begin() == 0) {
                    if (it1 != green.end() && (((((*it1) - red[i]) * ((*it1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans))
                        ans = ((((*it1) - red[i]) * ((*it1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                    if ((((*(it1 - 1) - red[i]) * (*(it1 - 1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2)))) < ans)
                        ans = (((*(it1 - 1) - red[i]) * (*(it1 - 1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2))));
                }
                else {
                    if (it1 != green.end() && it2 != blue.end() && (((((*it1) - red[i]) * ((*it1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans))
                        ans = ((((*it1) - red[i]) * ((*it1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                    if (it2 != blue.end() && ((((*(it1 - 1) - red[i]) * (*(it1 - 1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2)))) < ans))
                        ans = (((*(it1 - 1) - red[i]) * (*(it1 - 1) - red[i])) + (((*it2) - red[i]) * ((*it2) - red[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2))));
                    if (it1 != green.end() && (((((*it1) - red[i]) * ((*it1) - red[i])) + ((*(it2 - 1) - red[i]) * (*(it2 - 1) - red[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1)))) < ans))
                        ans = ((((*it1) - red[i]) * ((*it1) - red[i])) + ((*(it2 - 1) - red[i]) * (*(it2 - 1) - red[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1))));
                    if ((((*(it1 - 1) - red[i]) * (*(it1 - 1) - red[i])) + ((*(it2 - 1) - red[i]) * (*(it2 - 1) - red[i])) + ((*(it1 - 1) - *(it2 - 1)) * (*(it1 - 1) - *(it2 - 1)))) < ans)
                        ans = (((*(it1 - 1) - red[i]) * (*(it1 - 1) - red[i])) + ((*(it2 - 1) - red[i]) * (*(it2 - 1) - red[i])) + ((*(it1 - 1) - *(it2 - 1)) * (*(it1 - 1) - *(it2 - 1))));
                }
            }
        }
        fori(0, ng) {
            auto it1 = lower_bound(all(red), green[i]);
            auto it2 = lower_bound(all(blue), green[i]);
            if (it1 - red.begin() == 0) {
                if (it2 - blue.begin() == 0) {
                    if (((((*it1) - green[i]) * ((*it1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans)
                        ans = ((((*it1) - green[i]) * ((*it1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                }
                else {
                    if (it2 != blue.end() && (((((*it1) - green[i]) * ((*it1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans))
                        ans = ((((*it1) - green[i]) * ((*it1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                    if ((((((*it1) - green[i]) * ((*it1) - green[i])) + ((*(it2 - 1) - green[i]) * (*(it2 - 1) - green[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1)))) < ans))
                        ans = ((((*it1) - green[i]) * ((*it1) - green[i])) + ((*(it2 - 1) - green[i]) * (*(it2 - 1) - green[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1))));
                }
            }
            else {
                if (it2 - blue.begin() == 0) {
                    if (it1 != red.end() && (((((*it1) - green[i]) * ((*it1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans))
                        ans = ((((*it1) - green[i]) * ((*it1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                    if ((((*(it1 - 1) - green[i]) * (*(it1 - 1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2)))) < ans)
                        ans = (((*(it1 - 1) - green[i]) * (*(it1 - 1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2))));
                }
                else {
                    if (it1 != red.end() && it2 != blue.end() && (((((*it1) - green[i]) * ((*it1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans))
                        ans = ((((*it1) - green[i]) * ((*it1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                    if (it2 != blue.end() && ((((*(it1 - 1) - green[i]) * (*(it1 - 1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2)))) < ans))
                        ans = (((*(it1 - 1) - green[i]) * (*(it1 - 1) - green[i])) + (((*it2) - green[i]) * ((*it2) - green[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2))));
                    if (it1 != red.end() && (((((*it1) - green[i]) * ((*it1) - green[i])) + ((*(it2 - 1) - green[i]) * (*(it2 - 1) - green[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1)))) < ans))
                        ans = ((((*it1) - green[i]) * ((*it1) - green[i])) + ((*(it2 - 1) - green[i]) * (*(it2 - 1) - green[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1))));
                    if ((((*(it1 - 1) - green[i]) * (*(it1 - 1) - green[i])) + ((*(it2 - 1) - green[i]) * (*(it2 - 1) - green[i])) + ((*(it1 - 1) - *(it2 - 1)) * (*(it1 - 1) - *(it2 - 1)))) < ans)
                        ans = (((*(it1 - 1) - green[i]) * (*(it1 - 1) - green[i])) + ((*(it2 - 1) - green[i]) * (*(it2 - 1) - green[i])) + ((*(it1 - 1) - *(it2 - 1)) * (*(it1 - 1) - *(it2 - 1))));
                }
            }
        }
        fori(0, nb) {
            auto it1 = lower_bound(all(red), blue[i]);
            auto it2 = lower_bound(all(green), blue[i]);
            if (it1 - red.begin() == 0) {
                if (it2 - green.begin() == 0) {
                    if (((((*it1) - blue[i]) * ((*it1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans)
                        ans = ((((*it1) - blue[i]) * ((*it1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                }
                else {
                    if (it2 != green.end() && (((((*it1) - blue[i]) * ((*it1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans))
                        ans = ((((*it1) - blue[i]) * ((*it1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                    if ((((((*it1) - blue[i]) * ((*it1) - blue[i])) + ((*(it2 - 1) - blue[i]) * (*(it2 - 1) - blue[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1)))) < ans))
                        ans = ((((*it1) - blue[i]) * ((*it1) - blue[i])) + ((*(it2 - 1) - blue[i]) * (*(it2 - 1) - blue[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1))));
                }
            }
            else {
                if (it2 - green.begin() == 0) {
                    if (it1 != red.end() && (((((*it1) - blue[i]) * ((*it1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans))
                        ans = ((((*it1) - blue[i]) * ((*it1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                    if ((((*(it1 - 1) - blue[i]) * (*(it1 - 1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2)))) < ans)
                        ans = (((*(it1 - 1) - blue[i]) * (*(it1 - 1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2))));
                }
                else {
                    if (it1 != red.end() && it2 != green.end() && (((((*it1) - blue[i]) * ((*it1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2)))) < ans))
                        ans = ((((*it1) - blue[i]) * ((*it1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + (((*it1) - (*it2)) * ((*it1) - (*it2))));
                    if (it2 != green.end() && ((((*(it1 - 1) - blue[i]) * (*(it1 - 1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2)))) < ans))
                        ans = (((*(it1 - 1) - blue[i]) * (*(it1 - 1) - blue[i])) + (((*it2) - blue[i]) * ((*it2) - blue[i])) + ((*(it1 - 1) - (*it2)) * (*(it1 - 1) - (*it2))));
                    if (it1 != red.end() && (((((*it1) - blue[i]) * ((*it1) - blue[i])) + ((*(it2 - 1) - blue[i]) * (*(it2 - 1) - blue[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1)))) < ans))
                        ans = ((((*it1) - blue[i]) * ((*it1) - blue[i])) + ((*(it2 - 1) - blue[i]) * (*(it2 - 1) - blue[i])) + (((*it1) - *(it2 - 1)) * ((*it1) - *(it2 - 1))));
                    if ((((*(it1 - 1) - blue[i]) * (*(it1 - 1) - blue[i])) + ((*(it2 - 1) - blue[i]) * (*(it2 - 1) - blue[i])) + ((*(it1 - 1) - *(it2 - 1)) * (*(it1 - 1) - *(it2 - 1)))) < ans)
                        ans = (((*(it1 - 1) - blue[i]) * (*(it1 - 1) - blue[i])) + ((*(it2 - 1) - blue[i]) * (*(it2 - 1) - blue[i])) + ((*(it1 - 1) - *(it2 - 1)) * (*(it1 - 1) - *(it2 - 1))));
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}