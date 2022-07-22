#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto v = vector<int>(4, 0);
	for (auto i = 0; i < 4; ++i) {
		cin >> v[i];
	}

	auto x = int{};
	cin >> x;

	auto ans = int{ 0 };
	for (auto i = 0; i < 4; ++i) {
		if (x == v[i]) {
			ans = i + 1;
		}
	}

	cout << ans;

	return 0;
}