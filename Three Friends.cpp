// https://codeforces.com/contest/1272/problem/A
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int q;
    long long a, b, c;
    cin >> q;
    while (q--) {
        cin >> a >> b >> c;
        vector <long long> temp = {a, b, c};
        sort(temp.begin(), temp.end());
        if (temp[0] == temp[1] && temp[1] == temp[2]) {
            cout << "0\n";
        }
        else if (temp[0] == temp[1] || temp[1] == temp[2]) {
            if (temp[0] == temp[1]) {
                temp[0]++; temp[1]++;
                if (temp[0] == temp[2]) {
                    cout << "0\n";
                }
                else {
                    temp[2]--;
                    cout << 2 * (temp[2] - temp[1]) << "\n";
                }
            }
            else {
                temp[2]--; temp[1]--;
                if (temp[2] == temp[0]) {
                    cout << "0\n";
                }
                else {
                    temp[0]++;
                    cout << 2 * (temp[2] - temp[0]) << "\n";
                }
            }
        }
        else {
            if ((temp[0] + 1) == temp[1] && (temp[2] - 1) == temp[1]) {
                cout << "0\n";
            }
            else if ((temp[0] + 1) == temp[1] || (temp[2] - 1) == temp[1]) {
                if ((temp[0] + 1) == temp[1]) {
                    temp[2]--; temp[0]++;
                    cout << 2 * (temp[2] - temp[1]) << "\n";
                }
                else {
                    temp[0]++; temp[2]--;
                    cout << 2 * (temp[2] - temp[0]) << "\n";
                }
            }
            else {
                temp[0]++;
                temp[2]--;
                int t1, t2, t3, v1, v2;
                t1 = abs(temp[2] - temp[1]) + abs(temp[1] - temp[0]) + abs(temp[2] - temp[0]);
                v1 = temp[1] + 1;
                t2 = abs(temp[2] - v1) + abs(v1 - temp[0]) + abs(temp[2] - temp[0]);
                v2 = temp[1] - 1;
                t3 = abs(temp[2] - v2) + abs(v2 - temp[0]) + abs(temp[2] - temp[0]);
                cout << min(min(t1, t2), t3) << "\n";
            }
        }
    }
    return 0;
}
