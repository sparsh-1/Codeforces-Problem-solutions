// https://codeforces.com/problemset/problem/1496/A
#include <bits/stdc++.h>

using namespace std;

int main() {
	long long t;
	cin >> t;
	while (t--) {
	    long long n, k;
	    cin >> n >> k;
	    string s;
	    cin >> s;
	    long long co = 0;
	    for (long long i = 0; i < n / 2; i++) {
	        if (s[i] == s[n - i - 1]) {
	            co++;
	        }
	        else
	            break;
	    }
	    if (n % 2 != 0)
	        co++;
	    if (co > k || k == 0)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}
