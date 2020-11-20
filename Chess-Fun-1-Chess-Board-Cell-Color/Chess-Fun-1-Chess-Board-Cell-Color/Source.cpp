#include <string>
#include <cassert>
#include <iostream>

bool chessBoardCellColor(std::string cell1, std::string cell2) {
	if ((cell1[0] + cell1[1]) % 2 == 0 &&
		(cell2[0] + cell2[1]) % 2 == 0 ||
		(cell1[0] + cell1[1]) % 2 != 0 &&
		(cell2[0] + cell2[1]) % 2 != 0) {
		return true;

	}
	return false;
}

int main() {
	assert(chessBoardCellColor("A1", "C3") ==true);
	assert(chessBoardCellColor("A1", "H3") ==false);
	assert(chessBoardCellColor("A1", "A2") ==false);
	assert(chessBoardCellColor("A1", "C1") ==true);
	assert(chessBoardCellColor("A1", "A1") ==true);
	return 0;
}