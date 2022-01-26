/*Code by Nguyen Tuan Dung*/
#pragma once
#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
	int *bin;
	int size;
public:
	binary()
	{
		this->bin = NULL;
		this->size = 0;
	}
	binary(string s)
	{
		size = s.size();
		bin = new int[s.size()];
		for (int i = 0; i < s.size(); i++)
			bin[i] = s[i] - '0';
	}
	friend istream& operator >> (istream& is, binary& b)
	{
		string s;
		is >> s;
		b= binary(s);
		return is;

	}
	friend ostream& operator << (ostream& os, binary& b)
	{
		for (int i = 0; i < b.size; i++)
			os << b[i];
		return os;
	}
	int & operator[](int c)
	{
		if (c < size&& c >= 0)
			return bin[c];
	}
	binary operator & (const binary& b)
	{
		if (this->size >= b.size)
		{
			binary c;
			c.bin = this->bin;
			c.size = this->size;
			for (int i = this->size - b.size; i < this->size; i++)
			{
				c[i] = c[i] & b.bin[i - (this->size - b.size)];
			}
			return c;
		}
		else
		{
			binary b1 = b;
			for (int i = b.size - this->size; i < b.size; i++)
			{
				b1.bin[i] = this->bin[i - (b.size - this->size)] & b.bin[i];
			}
			return b1;
		}
	}
	binary operator | (const binary &b)
	{
		if (this->size >= b.size)
		{
			binary c;
			c.bin = this->bin;
			c.size = this->size;
			for (int i = this->size - b.size; i < this->size; i++)
			{
				c[i] = c[i] | b.bin[i - (this->size - b.size)];
			}
			return c;
		}
		else
		{
			binary b1 = b;
			for (int i = b.size - this->size; i < b.size; i++)
			{
				b1.bin[i] = this->bin[i - (b.size - this->size)] | b.bin[i];
			}
			return b1;
		}
	}
	binary operator ^ (const binary& b)
	{
		if (this->size >= b.size)
		{
			binary c;
			c.bin = this->bin;
			c.size = this->size;
			for (int i = this->size - b.size; i < this->size; i++)
			{
				c[i] = c[i] ^ b.bin[i - (this->size - b.size)];
			}
			return c;
		}
		else
		{
			binary b1 = b;
			for (int i = b.size - this->size; i < b.size; i++)
			{
				b1.bin[i] = this->bin[i - (b.size - this->size)] ^ b.bin[i];
			}
			return b1;
		}
	}
	binary operator ~()
	{
		binary b;
		b.bin = this->bin;
		b.size = this->size;
		for (int i = 0; i < this->size; i++)
			b.bin[i] = ~b.bin[i];
		return b;
	}
	binary &operator >> (int c)
	{
		binary b;
		b.bin = this->bin;
		b.size = this->size;
		for (int i = b.size - 1; i >= c; i--)
		{
			b.bin[i] = b.bin[i - c];
		}
		for (int i = 0; i < c; i++)
		{
			b.bin[i] = 0;
		}
		return b;
	}
	binary operator <<(int c)
	{
		binary b;
		b.bin = this->bin;
		b.size = this->size;
		for (int i = 0; i < b.size - c; i++)
		{
			b.bin[i] = b.bin[i + c];
		}
		for (int i = size-c; i < size; i++)
		{
			b.bin[i] = 0;
		}
		return b;
	}
};

