#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>

void run() {
	int n, t, l, r, input, m;
	std::vector<int> sortedVector;
	sortedVector.reserve(100000);
	long long unsortedArray[100001];
	long long sortedArray[100001];
	long long sum = 0;
	std::cin >> n;
	unsortedArray[0] = 0;
	sortedArray[0] = 0;
	for (int i = 1; i <= n; i++) {
		std::cin >> input;
		sortedVector.push_back(input);
		sum += input;
		unsortedArray[i] = sum;
	}
	std::sort(sortedVector.begin(), sortedVector.end());
	sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += sortedVector[i-1];
		sortedArray[i] = sum;
	}
	std::cin >> m;
	while (m--) {
		std::cin >> t >> l >> r;
		if (t == 1) {
			std::cout << unsortedArray[r] - unsortedArray[l-1] << std::endl;
		}
		else {
			std::cout << sortedArray[r] - sortedArray[l-1] << std::endl;
		}
	}
}


int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
