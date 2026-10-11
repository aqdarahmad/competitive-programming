#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int x, y;
        cin >> x >> y;
 
        int start, end;
 
        if (x < y) {
            start = x;
            end = y;
        }
        else {
            start = y;
            end = x;
        }
 
        int sum = 0;
 
        for (int i = start + 1; i < end; i++) {
            if (i % 2 != 0)
                sum += i;
        }
 
        cout << sum << endl;
    }
 
    return 0;
}
