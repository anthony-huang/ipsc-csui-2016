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
		CONS(1 <= N && N <= 1000000000000000000LL);
	}
};

class Generator : public BaseGenerator<Problem> {
protected:
	void Config() {
		setSlug("iseng_hard");
		setTimeLimit(16);
		setMemoryLimit(16);
	}

	void SampleTestCases() {
		SAMPLE_CASE({"42"},{1});
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
		CASE(N = 19380109733LL);
		CASE(N = 965856528391LL);
		CASE(N = 1524212467931LL);
		CASE(N = 1843944010561LL);
		CASE(N = 4000064000087LL);
		CASE(N = 5294782284733LL);
		CASE(N = 5388029791369LL);
		CASE(N = 7294720184767LL);
		CASE(N = 7932711681049LL);
		CASE(N = 8410098600289LL);
		CASE(N = 9000000000059LL);
		CASE(N = 9754003459591LL);
		CASE(N = 9812981372141LL);
		CASE(N = 10000000000037LL);
		CASE(N = 17502852016877LL);
		CASE(N = 19753304691961LL);
		CASE(N = 35294782284733LL);
		CASE(N = 38241571536529LL);
		CASE(N = 50743896075589LL);
		CASE(N = 58008634995551LL);
		CASE(N = 71234567890147LL);
		CASE(N = 83158513718641LL);
		CASE(N = 92473841134223LL);
		CASE(N = 136849018309141LL);
		CASE(N = 7160508690404521LL);
		CASE(N = 777447717071221813LL);
		CASE(N = 868301738703447409LL);
		CASE(N = 999999354000104329LL);
		CASE(N = 999999943999999559LL);
		CASE(N = 999999999999999989LL);
	}
};

int main(int argc, char* argv[]) {
	Runner<Problem> runner(argc, argv);

	runner.setGenerator(new Generator());
	return runner.run();
}
