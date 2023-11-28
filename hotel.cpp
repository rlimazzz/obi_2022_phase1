#include <bits/stdc++.h>

using namespace std;

int main() {
        int d, a , n, conta = 0;
        cin >> d >> a >> n;
        if(n == 1) {
                conta = (32 - n) * (d);
        }
        else if(n >= 2 && n <= 15) {
                conta = (32 - n) * (d + ((n - 1) * a ));
        }else {
                conta = (32 - n) * (d + ((14 * a)));
        }
        cout << conta << endl;
        return 0;
}
           
