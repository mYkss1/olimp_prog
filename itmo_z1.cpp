#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <set>
#include <string>
#include <map>
#include <fstream>
#include <deque>
#include <queue>
#include <cmath>
#include <cstring>
#define long long ll;

using namespace std;



bool is_palindrom(string s) {
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] != s[s.length() - 1 - i]) {
			return false;
		}
	}
	return true;
}



int solve(string s) {
	int mx = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (is_palindrom(s.substr(0, i + 1))) {
			mx = max(mx, i + 1);
		}
	}
	return mx;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	/*ifstream cin("input.txt");
	ofstream cout("output.txt"); */
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		cout << solve(s) << "\n";
	}
}