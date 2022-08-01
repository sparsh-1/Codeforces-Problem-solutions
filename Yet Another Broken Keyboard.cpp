// Mine code
// https://codeforces.com/contest/1272/problem/C
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    vector <int> ke(26);
    cin >> s;
    vector <long long> ans(s.size());
    long long answer = 0;
    char temp;
    for (int i = 0; i < k; i++) {
        cin >> temp;
        ke[(int)(temp - 97)]++;
    }
    if (ke[s[0] - 97]) {
        ans[0]++;
    }
    for (int i = 1; i < s.size(); i++) {
        if (ke[s[i] - 97]) {
            ans[i] = 1 + ans[i - 1];
        }
        else {
            answer += (ans[i - 1] * (ans[i - 1] + 1)) / 2;
        }
    }
    answer += (ans[s.size() - 1] * (ans[s.size() - 1] + 1)) / 2;
    cout << answer;
    return 0;
}

/* Pulkit chabra's code where he stored indices of broken keys and then count the no. in b/w and applied the formula, he also for corner test cases pushed 0 and nth element
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	vector <int> ok(26);

	while (k--)
	{
		char ch;
		cin >> ch;
		ok[ch - 'a']++;
	}

	vector <int> v;

	v.push_back(-1); //corner case

	for (int i = 0; i < n; ++i)
		if (ok[s[i] - 'a'] == false)
			v.push_back(i);

	v.push_back(n); // corner case

	long long ans = 0;

	for (int i = 0; i + 1 < v.size(); ++i)
	{
		long long c = v[i + 1] - v[i] - 1;
		ans += (c * (c + 1)) / 2;
	}

	cout << ans << '\n';

	return 0;
}
*/
