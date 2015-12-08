/*
https://www.hackerrank.com/challenges/pangrams
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	string input;
	int mask;
	int test = (1 << 26) - 1;
	getline(cin, input);

	for (int i = 0; i < input.size() && test; i++) {
		if (input[i] >= 'a' && input[i] <= 'z') {
			mask = (1 << (input[i] - 'a'));
			if(test & mask)
				test ^= mask;
		}
		else if (input[i] >= 'A' && input[i] <= 'Z') {
			mask = (1 << (input[i] - 'A'));
			if (test & mask)
				test ^= mask;
		}
		else
			continue;
	}

	if (test)
		cout << "not pangram";
	else
		cout << "pangram";



	return 0;
}