#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>

void run() {
	
	double n, l;
	std::cin >> n >> l;
	std::vector<double> v;
	double input;
	double d;
	for (int i = 0; i < n; i++) {
		std::cin >> input;
		v.push_back(input);
	}
	std::sort(v.begin(), v.end());
	
	if (l - v[v.size() - 1] > v[0]) {
		d = l - v[v.size() - 1];
	}
	else {
		d = v[0];
	}
	double last = 0;
	
	for (auto &ele : v) {
		if ((ele - last) / 2 > d) {
			d = (ele - last) / 2;
		}
		last = ele;
	}
	std::cout.precision(10);
	std::cout << d << std::endl;
}


int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
