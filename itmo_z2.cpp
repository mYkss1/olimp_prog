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


/*void is_palindrome(string n) {
	bool True = true;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] != s[-1 - i]) {
			true = false;
		}
	}
	return True;
}
*/

int solve(string s) {
	string reversed_s = s;
	reverse(reversed_s.begin(), reversed_s.end());
	int res = 0;
	int n = s.length();
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			string suffix = reversed_s.substr(0, j-i+1);
            reverse(suffix.begin(), suffix.end());
            res += ((s.substr(i, j - i + 1) == s.substr(0, j - i + 1)) ^ (s.substr(i, j - i + 1) == suffix));
		}
	}
	return res;
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