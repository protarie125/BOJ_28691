#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	char c;
	cin >> c;

	if ('M' == c) {
		cout << "MatKor";
	}
	else if ('W' == c) {
		cout << "WiCys";
	}
	else if ('C' == c) {
		cout << "CyKor";
	}
	else if ('A' == c) {
		cout << "AlKor";
	}
	else if ('$' == c) {
		cout << "$clear";
	}

	return 0;
}