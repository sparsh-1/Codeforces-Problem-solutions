#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a == b) {
            cout << 0 << "\n";
        }
        else {
            if ((abs(a - b) % 10) == 0) {
                cout << abs(a - b) / 10 << "\n";
            }
            else {
                cout << (abs(a - b) / 10) + 1 << "\n";
            }
        }
    }
    return 0;
}

/* Setter's solution
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << (abs(a - b) + 9) / 10 << endl;
	}

	return 0;
}
*/