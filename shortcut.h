#include <iostream>
#include <string>
using namespace std;
#define max(a, b) (a) > (b) ? (a) : (b)
#define min(a, b) (a) < (b) ? (a) : (b)
#define abs(a) (a) > 0 ? (a) : -(a)
#define max3(a, b, c) max(max(a, b), c)
#define max4(a, b, c, d) max(max3(a, b, c), d)
#define max5(a, b, c, d, e) max(max4(a, b, c, d), e)
#define max6(a, b, c, d, e, f) max(max5(a, b, c, d, e), f)
#define max7(a, b, c, d, e, f, g) max(max6(a, b, c, d, e, f), g)
#define max8(a, b, c, d, e, f, g, h) max(max7(a, b, c, d, e, f, g), h)
#define max9(a, b, c, d, e, f, g, h, i) max(max8(a, b, c, d, e, f, g, h), i)
#define max10(a, b, c, d, e, f, g, h, i, j) max(max9(a, b, c, d, e, f, g, h, i), j)
#define min3(a, b, c) min(min(a, b), c)
#define min4(a, b, c, d) min(min3(a, b, c), d)
#define min5(a, b, c, d, e) min(min4(a, b, c, d), e)
#define min6(a, b, c, d, e, f) min(min5(a, b, c, d, e), f)
#define min7(a, b, c, d, e, f, g) min(min6(a, b, c, d, e, f), g)
#define min8(a, b, c, d, e, f, g, h) min(min7(a, b, c, d, e, f, g), h)
#define min9(a, b, c, d, e, f, g, h, i) min(min8(a, b, c, d, e, f, g, h), i)
#define min10(a, b, c, d, e, f, g, h, i, j) min(min9(a, b, c, d, e, f, g, h, i), j)

bool is_prime(int a)
{
	for (int i = 2; i * i < a; i++)
	{
		if (i % a == 0)
			return false;
		else continue;
	}
	return true;
}
template <typename T>
T input()
{
	T a;
	cin >> a;
	return a;
}
template <typename T>
void print(T t)
{
	cout << t;
}
template <typename T>
int len(T *t)
{
	return sizeof(t)/sizeof(T);
}
string reverse(string s)
{
	int l = s.length();
	for (int i = 0; i < l / 2 + 1; i++)
	{
		char t = s[i];
		s[i] = s[l-i];
		s[l-i] = t;
	}
	return s;
}
const bool True = true;
const bool False = false;
