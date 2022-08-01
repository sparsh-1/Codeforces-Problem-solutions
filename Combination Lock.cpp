#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector <int> curr, real;
    cin >> n;
    string temp;
    cin >> temp;
    for (int i = 0; i < n; i++) {
        curr.push_back(int(temp[i]));
    }
    cin >> temp;
    for (int i = 0; i < n; i++) {
        real.push_back(int(temp[i]));
    }
    int sume = 0;
    for (int i = 0; i < n; i++) {
        sume += int(min(abs(real[i] - curr[i]), 10 - abs(real[i] - curr[i])));
    }
    cout << sume;
    return 0;
}
