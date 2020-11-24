#include <iostream>
#include <vector>

using namespace std;

// TODO: Return the determinant of the square matrix passed in
long long determinant(vector< vector<long long> > m) {
	long long sum = 0;
	long long v_size = m.size();
	if (v_size == 1) {
		return m[0][0];
	}
	if (v_size == 2) {
		return m[0][0] * m[1][1] - m[0][1] * m[1][0];
	}

	if (v_size > 2) {
		for (size_t i = 0; i < v_size; i++) {
			vector<vector<long long>> n_vec;
			for (size_t j = 1; j < v_size; j++) {
				n_vec.push_back(vector<long long>{});
				for (size_t k = 0; k < v_size; k++) {
					if (i != k) {
						n_vec.back().push_back(m[j][k]);
					}
				}
			}
			if (i % 2 == 0)
				sum += m[0][i] * determinant(n_vec);
			else
				sum -= m[0][i] * determinant(n_vec);
		}
	}
	return sum;
}



int main() {
	vector<vector<long long>> v{ {1, 2, 3}, {7, 6, 5}, {8, 9, 0} };
	cout << determinant(v) << endl;
	return 0;
}