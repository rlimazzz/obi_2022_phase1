#include <bits/stdc++.h>

using namespace std;

int main() {
        int n , m , s, maior = 0;
        cin >> n >> m >> s;
        for(int i = n;i <= m;i++) {
                stringstream entr;
                int soma = 0;
                string numero;
                entr << i;
                entr >> numero;
                for(int k = 0;k < (int)numero.size();k++) {
                        soma += numero[k] - '0';
                }
                if(soma == s) {
                        maior = max(maior, i);
                }
        }
        if(maior == 0) {
                cout << -1 << endl;
        }else {
                cout << maior << endl;
        }
        return 0;
}
