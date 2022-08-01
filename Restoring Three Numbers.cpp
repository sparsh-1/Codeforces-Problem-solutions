#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> temp;
    int a;
    for (int i = 0; i < 4; i++) {
        cin >> a;
        temp.push_back(a);
    }
    sort(temp.begin(), temp.end());
    cout << temp[3] - temp[0] << " " << temp[3] - temp[2] << " " << temp[3] - temp[1];
    return 0;
}

/* Setters solution
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	vector<int> a(4);
	for (int i = 0; i < 4; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2] << endl;

	return 0;
}
*/
