#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> ar;
	for (int i = 0; i < n; i++) {
		int start, end;
		cin >> start >> end;
		ar.push_back({start, 1});
		ar.push_back({end, -1});
	}

	sort(times.begin(), times.end());

	int cur = 0;
	int m = 0;
	for (pair<int, int> t : times) {
		cur += t.second;
		m = max(m, cur);
	}

	cout << max_ppl << endl;
}
