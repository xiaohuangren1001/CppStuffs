#include <bits/stdc++.h>
namespace MATH {
	struct Math {
		int gcd(int x, int y);
		int divide(int a, int b, int& remainder);
		double avg(double *a, int n);
		struct Point {
			double x, y;
		};
		double distance(Point *p1, Point *p2);
		bool in_mandel(double x, double y, int n);
	};
}
#if __cplusplus >= 201103L
namespace MATH {
	bool is_circle(int x, int y) noexcept;
	namespace MATH_literals {
		bool sxhs(int x) noexcept;
	}
}
#else
namespace MATH {
	bool is_circle(int x, int y) throw();
	bool sxhs(int x) throw();
}
#endif


