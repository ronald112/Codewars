#include <string>
#include <algorithm>
#include <tuple>
#include <cassert>
#include <map>


/*
scramble('rkqodlw', 'world') ==> True
scramble('cedewaraaossoqqyt', 'codewars') ==> True
scramble('katas', 'steak') ==> False
*/

/*
bool scramble(const std::string& s1, const std::string& s2) {
	for (size_t i = 0; i < s2.size(); i++) {
		if (std::count(s1.begin(), s1.end(), s2[i])
			< std::count(s2.begin() + i, s2.end(), s2[i]))
			return false;
	}
	return true;
}
*/
/*
bool scramble(const std::string& s1, const std::string& s2) {
	auto first1 = s1.begin();
	auto first2 = s2.begin();
	std::tie(first2, first1) = std::mismatch(first2, s2.end(), first1);
	for (auto it = first2; it < s2.end(); it++) {
		if (std::count(first1, s1.end(), *it)
			< std::count(it, s2.end(), *it))
			return false;
	}
	return true;
}
*/

#include<string>

bool scramble(const std::string& s1, const std::string& s2){
	std::map<char,int> idx;
	for (auto &i : s1) idx[i]++;
	for (auto& i : s2) {
		if (idx[i]-- == 0)
			return false;
	}
	return true;
}


int main() {
	assert(scramble("rkqodlw", "world") == true);
	return 0;
}
