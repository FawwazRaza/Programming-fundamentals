#include<iostream>
int main()
{
	int num, a, b, c, d, e, f, g, h, i, j, rev, r;
	std::cout << "enter any number";
	std::cin >> num;
	if (num < 10)
	{
		std::cout << "count=1\n";
		std::cout << num;
	}
	else if (num >= 10 && num <= 99)
	{
		a = (num / 10);
		b = num % 10;
		rev = (b * 10) + (a * 1);
		std::cout << "count=2\n";
		std::cout << "reverse is= " << rev;
	}
	else if (num >= 100 && num <= 999)
	{
		a = (num / 100);
		b = (num % 100) / 10;
		c = (num % 10);
		rev = (c * 100) + (b * 10) + (a * 1);
		std::cout << "count=3\n";
		std::cout << "reverse is= " << rev;
	}
	else if (num >= 1000 && num <= 9999)
	{
		a = (num / 1000);
		b = (num % 1000) / 100;
		c = (num % 100) / 10;
		d = (num % 10) / 1;
		rev = (d * 1000) + (c * 100) + (b * 10) + (a * 1);
		std::cout << "count=4\n";
		std::cout << "reverse is= " << rev;
	}
	else if (num >= 10000 && num <= 99999)
	{
		a = (num / 10000);
		b = (num % 10000) / 1000;
		c = (num % 1000) / 100;
		d = (num % 100) / 10;
		r = (num % 10);
		rev = (r * 10000) + (d * 1000) + (c * 100) + (b * 10) + (a * 1);
		std::cout << "count=5\n";
		std::cout << "reverse is= " << rev;
	}
	else if (num >= 100000 && num <= 999999)
	{
		a = (num / 100000);
		b = (num % 100000) / 10000;
		c = (num % 10000) / 1000;
		d = (num % 1000) / 100;
		r = (num % 100) / 10;
		e = num % 10;
		rev = (e * 100000) + (r * 10000) + (d * 1000) + (c * 100) + (b * 10) + (a * 1);
		std::cout << "count=6\n";
		std::cout << "reverse is= " << rev;
	}
	else if (num >= 1000000 && num <= 9999999)
	{
		a = (num / 1000000);
		b = (num % 1000000) / 100000;
		c = (num % 100000) / 10000;
		d = (num % 10000) / 1000;
		r = (num % 1000) / 100;
		e = (num % 100) / 10;
		f = num % 10;
		rev = (f * 1000000) + (e * 100000) + (r * 10000) + (d * 1000) + (c * 100) + (b * 10) + (a * 1);
		std::cout << "count=7\n";
		std::cout << "reverse is= " << rev;
	}
	else if (num >= 10000000 && num <= 99999999)
	{
		a = (num / 10000000);
		b = (num % 10000000) / 1000000;
		c = (num % 1000000) / 100000;
		d = (num % 100000) / 10000;
		r = (num % 10000) / 1000;
		e = (num % 1000) / 100;
		f = (num % 100) / 10;
		g = num % 10;
		rev = (g * 10000000) + (f * 1000000) + (e * 100000) + (r * 10000) + (d * 1000) + (c * 100) + (b * 10) + (a * 1);
		std::cout << "count=8\n";
		std::cout << "reverse is= " << rev;
	}
	else if (num >= 100000000 && num <= 999999999)
	{
		a = (num / 100000000);
		b = (num % 100000000) / 10000000;
		c = (num % 10000000) / 1000000;
		d = (num % 1000000) / 100000;
		r = (num % 100000) / 10000;
		e = (num % 10000) / 1000;
		f = (num % 1000) / 100;
		g = (num % 100) / 10;
		h = num % 10;
		rev = (h * 100000000) + (g * 10000000) + (f * 1000000) + (e * 100000) + (r * 10000) + (d * 1000) + (c * 100) + (b * 10) + (
			a * 1);
		std::cout << "count=9\n";
		std::cout << "reverse is= " << rev;
	}
	else if (num >= 1000000000 && num <= 9999999999)
	{
		a = (num / 1000000000);
		b = (num % 1000000000) / 100000000;
		c = (num % 100000000) / 10000000;
		d = (num % 10000000) / 1000000;
		r = (num % 1000000) / 100000;
		e = (num % 100000) / 10000;
		f = (num % 10000) / 1000;
		g = (num % 1000) / 100;
		h = (num % 100) / 10;
		i = num % 10;
		rev = (i * 1000000000) + (h * 100000000) + (g * 10000000) + (f * 1000000) + (e * 100000) + (r * 10000) + (d * 1000) +
			(c * 100) + (b * 10) + (a * 1);
		std::cout << "count=10\n";
		std::cout << "reverse is= " << rev;
	}
	else if (num >= 10000000000 && num <= 99999999999)
	{
		a = (num / 10000000000);
		b = (num % 10000000000) / 1000000000;
		c = (num % 1000000000) / 100000000;
		d = (num % 100000000) / 10000000;
		r = (num % 10000000) / 1000000;
		e = (num % 1000000) / 100000;
		f = (num % 100000) / 10000;
		g = (num % 10000) / 1000;
		h = (num % 1000) / 100;
		i = (num % 100) / 10;
		j = num % 10;
		rev = (j * 10000000000) + (i * 1000000000) + (h * 100000000) + (g * 10000000) + (f * 1000000) + (e * 100000) + (r *
			10000) + (d * 1000) + (c * 100) + (b * 10) + (a * 1);
		std::cout << "count=11\n";
		std::cout << "reverse is= " << rev;
	}
	else
	{
		std::cout << "number is out of range";
	}
}