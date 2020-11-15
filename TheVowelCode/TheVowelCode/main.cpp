#include <string>

/*
* a -> 1
* e -> 2
* i -> 3
* o -> 4
* u -> 5
*/

std::string encode(const std::string& str) {
	std::string rslt = str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a')
			rslt[i] = '1';
		else if (str[i] == 'e')
			rslt[i] = '2';
		else if (str[i] == 'i')
			rslt[i] = '3';
		else if (str[i] == 'o')
			rslt[i] = '4';
		else if (str[i] == 'u')
			rslt[i] = '5';
	}
	return rslt;
}

std::string decode(const std::string& str) {
	std::string rslt = str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '1')
			rslt[i] = 'a';
		else if (str[i] == '2')
			rslt[i] = 'e';
		else if (str[i] == '3')
			rslt[i] = 'i';
		else if (str[i] == '4')
			rslt[i] = 'o';
		else if (str[i] == '5')
			rslt[i] = 'u';
	}
	return rslt;
}
