#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
#include <string>
#include <vector>
#define ll long long int
#define pp pop_back
using namespace std;

const int MAX = 1e9;

void solve() {

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        set<int> tc;
        int counter = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (tc.find(arr[i]) != tc.end()) {
                if (tc.find(-1 * arr[i]) == tc.end()) {
                    counter++;
                tc.insert(-1*arr[i]);
                }
            }
            else {
                counter++;
                tc.insert(arr[i]);
            }
        }
        int ans = tc.size();
        cout << ans << endl;
    }
}
