#include <ctime>
#include <cstdio>
#include <iostream>
using namespace std;
struct Timer
{
private:
	int start_;
	int end_;
	int elapsed;
public:
	Timer() {start_ = 0; end_ = 0; elapsed = 0;}
	void start();
	void end();
	void reset();
	int getElapsed();
};

void Timer::start()
{
	start_ = time(0);
}
void Timer::end()
{
	end_ = time(0);
	elapsed += end_ - start_;
}
void Timer::reset()
{
	elapsed = 0;
}
int Timer::getElapsed()
{
	return elapsed;
}

