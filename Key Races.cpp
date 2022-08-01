#include <iostream>

using namespace std;

int main()
{
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    if (((v1 * s) + (2 * t1)) == ((v2 * s) + (2 * t2))) {
        cout << "Friendship";
    }
    else if (((v1 * s) + (2 * t1)) < ((v2 * s) + (2 * t2))) {
        cout << "First";
    }
    else {
        cout << "Second";
    }
    return 0;
}

/* Setter's Code
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    ll q1 = 2 * t1 + s * v1;
    ll q2 = 2 * t2 + s * v2;

    if (q1 < q2) {
        cout << "First\n";
    } else if (q1 > q2) {
        cout << "Second\n";
    } else {
        cout << "Friendship\n";
    }

    return 0;
}
*/
