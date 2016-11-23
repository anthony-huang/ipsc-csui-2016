#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

string input;
string output;

int wa() {
	cout << "WA" << endl;
	cout << "Wrong answer on testcase file: iseng-" << input << ".in" << endl;
	return 0;
}

int ac() {
	cout << "AC" << endl;
	cout << "Accepted on testcase file: iseng-" << input << ".in" << endl;
	return 0;
}

int main(int argc, char* argv[]) {
	ifstream tc_in(argv[1]);
	ifstream tc_out(argv[2]);
	ifstream con_out(argv[3]);

	tc_in >> input;
	tc_out >> output;

	string con_ans;
	if (!(con_out >> con_ans)) {
		return wa();
	}

	if (output == con_ans) {
		return ac();
	} else {
		return wa();
	}
}