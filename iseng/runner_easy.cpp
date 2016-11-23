#include "tcframe/runner.hpp"
using namespace tcframe;

#include <bits/stdc++.h>
using namespace std;

class Problem : public BaseProblem {
protected:
	long long N;
	string S;
	
	void InputFormat() {
		LINE(N);
	}

	void OutputFormat() {
		LINE(S);
	}

	void Subtask1() {
		CONS(1 <= N && N <= 1000000000);
	}
};

class Generator : public BaseGenerator<Problem> {
protected:
	void Config() {
		setSlug("iseng_easy");
		setTimeLimit(16);
		setMemoryLimit(16);
	}

	void SampleTestCases() {
		SAMPLE_CASE({"42",{1});
	}

	void TestGroup1() {
		assignToSubtasks({1});
		CASE(N = 1);
		CASE(N = 2);
		CASE(N = 3);
		CASE(N = 4);
		CASE(N = 6);
		CASE(N = 9);
		CASE(N = 24);
		CASE(N = 55);
		CASE(N = 91);
		CASE(N = 127);
		CASE(N = 484);
		CASE(N = 777);
		CASE(N = 3121);
		CASE(N = 4242);
		CASE(N = 7396);
		CASE(N = 47524);
		CASE(N = 541589);
		CASE(N = 7124099);
		CASE(N = 81029196);
		CASE(N = 751198464);
	}
};

int main(int argc, char* argv[]) {
	Runner<Problem> runner(argc, argv);

	runner.setGenerator(new Generator());
	return runner.run();
}
