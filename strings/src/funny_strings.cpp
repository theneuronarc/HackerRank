#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string isFunny(string& str) {
	int n = str.size();
	for (int i = 1; i <= n/2; i++) {
		if (abs(str[i] - str[i - 1]) == abs(str[n - i - 1] - str[n - i]))
			continue;
		else {
			return "Not Funny";
		}
	}
	return "Funny";
}

int funnyStringsMain() {
	int testCount = 0;
	string input;
	cin >> testCount;

	for (int i = 0; i < testCount; i++) {
		cin  >> input;
		cout << isFunny(input);
	}
	return 0;
}
