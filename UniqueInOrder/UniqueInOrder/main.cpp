#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

/*
uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
uniqueInOrder([1,2,2,3,3])       == {1,2,3}
*/

template <typename T> 
std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
	std::vector<T> rslt;

	T temp = iterable[0];
	rslt.push_back(temp);

	for (const auto& it : iterable) {
		if (temp != it) {
			temp = it;
			rslt.push_back(temp);
		}
	}
	//std::unique_copy(iterable.begin(), iterable.end(), std::back_inserter(rslt));
	return rslt;
}

std::vector<char> uniqueInOrder(const std::string& iterable) {
	std::vector<char> rslt;
	char temp = '\0';
	for (const auto& it : iterable) {
		if (temp != it) {
			rslt.push_back(it);
			temp = it;
		}
	}
	//std::unique_copy(iterable.begin(), iterable.end(), std::back_inserter(rslt));
	return rslt;
}
