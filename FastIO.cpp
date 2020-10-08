#include <cstdio>
#include <iostream>
using namespace std;
namespace FastIO
{
	class Scanner
	{
	private:
		bool blank(char c);
	public:
		Scanner operator>>(int &i);
		Scanner operator>>(double &d);
		Scanner operator>>(long long &i);
		Scanner operator>>(char &i);
		Scanner operator>>(char *c);
		Scanner operator>>(string &s);
		template <typename A>
		inline Scanner operator>>(A &a)
		{
			cin >> a;
			return *this;
		}
	};
	class Printer
	{
	public:
		Printer operator<<(int i);
		Printer operator<<(long long i);
		Printer operator<<(char i);
		Printer operator<<(const char *c);
		Printer operator<<(string s);
		template <typename A>
		inline Printer operator<<(A &a)
		{
			cout << a;
			return *this;
		}
	};
	Scanner qin;
	Printer qout;
	#define endl '\n'
}
namespace FastIO
{
	bool Scanner::blank(char c)
	{
		return c == ' ' || c == '\r' || c == '\n' || c == '\t';
	}
	Scanner Scanner::operator>>(int &i)
	{
		int s = 0, w = 1;
		char ch = getchar();
		while (ch < '0' || ch > '9')
		{
			if (ch == '-') w = -1;
			ch = getchar();
		}
		while (ch >= '0' && ch <= '9')
		{
			s = (s << 1) + (s << 3) + ch - '0';
			ch = getchar();
		}
		i = s * w;
		return *this;
	}
	Scanner Scanner::operator>>(long long &i)
	{
		long long s = 0, w = 1;
		char ch = getchar();
		while (ch < '0' || ch > '9')
		{
			if (ch == '-') w = -1;
			ch = getchar();
		}
		while (ch >= '0' && ch <= '9')
		{
			s = (s << 1) + (s << 3) + ch - '0';
			ch = getchar();
		}
		i = s * w;
		return *this;
	}
	Scanner Scanner::operator>>(char &i)
	{
		i = getchar();
		return *this;
	}
	Scanner Scanner::operator>>(char *c)
	{
		char ch = getchar();
		while(blank(ch)) ch = getchar();
		int p = 0;
		for (c[p++] = ch; !blank(ch = getchar()); c[p++] = ch);
		c[p] = '\0';
		return *this;
	}
	Scanner Scanner::operator>>(string &c)
	{
		char strBuf[10000];
		char ch = getchar();
		while (blank(ch)) ch = getchar();
		int p = 0;
		for (strBuf[p++] = ch; !blank(ch = getchar()); strBuf[p++] = ch);
		strBuf[p] = '\0';
		c = strBuf;
		return *this;
	}
	Scanner Scanner::operator>>(double & d)
	{
		double zh = 0.0, xi = 0.0;
		int f = 1;
		double x = 1.0;
		bool flag = false;
		char ch = getchar();
		while (ch < '0' || ch > '9')
		{
			if (ch == '-')
			{
				f = -1;
			}
			ch = getchar();
        }
        while (ch >= '0' && ch <= '9')
        {
			zh = zh * 10 + ch - '0';
			ch = getchar();
		}
		while (ch < '0' || ch > '9')
		{
			if (ch == '.') flag = true;
			ch = getchar();
		}
		if (!flag)
		{
			d = zh;
			return *this;
		}
		while (ch >= '0' && ch <= '9')
		{
			x = x * 10;
			xi = xi + (ch - '0') / x;
			ch = getchar();
		}
		if (f == 1) d = zh + xi;
		else d = zh - xi;
		return *this;
	}
	Printer Printer::operator<<(int i)
	{
		int tmp = i > 0 ? i : -i;
		if (i < 0) 
		{
			putchar('-');
		}
		int cnt = 0;
		char F[20];
		while (tmp > 0)
		{
			F[cnt++] = (tmp % 10) + '0';
			tmp /= 10;
		}
		while (cnt > 0)
		{
			putchar(F[--cnt]);
		}
		return *this;
	}
	Printer Printer::operator<<(long long i)
	{
		long long tmp = i < 0 ? i : -i;
		if (i < 0) putchar('-');
		int cnt = 0;
		char F[200];
		while (tmp) F[cnt++] = char(tmp % 10 + '0'), tmp /= 10;
		while (cnt) putchar(F[--cnt]);
		return *this;
	}
	Printer Printer::operator<<(char i)
	{
		putchar(i);
		return *this;
	}
	Printer Printer::operator<<(const char *i)
	{
		int p = 0;
		while (i[p])
		{
			putchar(i[p++]);
		}
		return *this;
	}
	Printer Printer::operator<<(string s)
	{
		for (string::iterator i = s.begin(); i < s.end(); i++) putchar(*i);
		return *this;
	}
}
using namespace FastIO;
int main()
{
	double x;
	qin >> x;
	cout << "Input end" <<endl;
	cout << x;
	return 0;
}
