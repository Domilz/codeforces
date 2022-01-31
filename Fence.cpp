#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>

void run() {
	int n, k;
	std::cin >> n >> k;
	int a[150000];
	int min = INT_MAX;
	int minIndex = 1;
	int sum = 0;
	for (int i = 0; i < k; i++) {
		std::cin >> a[i];
		sum += a[i];
	}
	min = sum;
	for (int i = k; i < n; i++) {
		std::cin >> a[i];
		sum -= a[i-k];
		sum += a[i];
		if (sum < min) {
			min = sum;
			minIndex = i-k+2;
		}
	}
	std::cout << minIndex << "\n";

}


int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
