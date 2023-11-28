#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, linhazer, colzer;
	cin >> n;
	int quadrado[n][n];
	for(int i = 0;i < n;i++) {
		for(int k = 0;k < n;k++) {
			int entr;
			cin >> entr;
			if(entr == 0) {
				linhazer = i;
				colzer = k;
			}
			quadrado[i][k] = entr;
		}
	}
	int number;
	vector<int> check;
	for(int i = 0;i < n;i++) {
		int soma= 0;
		for(int j = 0;j < n;j++) {
			soma += quadrado[i][j];
		}
		check.push_back(soma);
		if(check[i - 1] == soma || check[i- 2] == soma) {
			number = soma;
		}
	}
	int somageral = 0;
	for(int i = linhazer; i < linhazer + 1;i++) {
		for(int k = 0;k < n;k++) {
			somageral += quadrado[i][k];
		}
	}
	int zero;
	if(somageral- number <0) {
		zero = -(somageral - number);
	}
	cout << zero << "\n" << linhazer + 1 << "\n" << colzer + 1 << "\n";
	return 0;
}
