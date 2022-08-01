// https://codeforces.com/problemset/problem/1475/A
#include <bits/stdc++.h>

using namespace std;

int main() {
	long long t;
	cin >> t;
	while (t--) {
	    unsigned long long n;
	    cin >> n;
	    if (n % 2 != 0 && n != 1)
	        cout << "YES\n";
	    else {
	        while (n % 2 == 0)
	            n /= 2;
	        if (n % 2 != 0 && n != 1)
	            cout << "YES\n";
	        else
	            cout << "NO\n";
	    }
	            
	}
	return 0;
}
