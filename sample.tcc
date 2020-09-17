#include "sample.h"
namespace MATH {
	int Math::gcd(int x, int y) {
		int g = y;
		while (x > 0) {
			g = x;
			x = y % x;
			y = g;
		}
		return g;
	}
	int Math::divide(int a, int b, int& remainder) {
		int quot = a / b;
		remainder = a % b;
		return quot;
	}
	double Math::avg(double *a, int n) {
		int i;
		double total = 0.0;
		for (i = 0; i < n; i++) {
			total += a[i];
		}
		return total / n;
	}
	double square(double x) {
		return x * x;
	}
	double cube(double x) {
		return square(x) * x;
	}
	double Math::distance(Point *p1, Point *p2) {
		return sqrt(square(p1->x - p2->x) + square(p1->y - p2->y));
	}
	bool Math::in_mandel(double x, double y, int n) {
		double x0 = 0, y0 = 0, xtemp;
		while (n > 0) {
			xtemp = square(x0) - square(y0) + x;
			y0 = 2 * x0 * y0 + y;
			x0 = xtemp;
			n -= 1;
			if (square(x0) + square(y0) > 4) {
				return false;
			}
		}
		return true;
	}
	bool is_circle(int x, int y)
	#if __cplusplus >= 201103L
	noexcept
	#else
	throw()
	#endif
	{
		return square(x) + square(y) == 1;
	}
	#if __cplusplus >= 201103L
	namespace MATH_literals {
	#endif
	bool sxhs(int x)
	#if __cplusplus >= 201103L
	noexcept
	#else
	throw()
	#endif
	{
		if (x < 100 && x > 999)
			return false;
		else if (x % 100 == 0)
			return true;
		int x1 = x / 100;
		int x2 = (x - x1 * 100) / 10;
		int x3 = x % 10;
		if (cube(x1) + cube(x2) + cube(x3) == x) {
			return true;
		}
		return false;
	}
	#if __cplusplus >= 201103L
	}
	#endif
}
