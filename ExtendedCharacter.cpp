#include <iostream>
#include <string>
#include "ExtendedCharacter.h"

using namespace std;

string ExtendedCharacter::toString(char x) {
	int n = int(x);
	string y = "", a = "";
	int r, z = 0;
	//calculate the binary value of that number n
	while (n != 0)
	{
		r = n % 2; //check for the last term, by taking the remainder dividing by 2
		n /= 2; //divide number by 2
		y += to_string(r); //storing binary value
		//z = z * 10; //acting as power, that where to add r next time
		z++;
	}
	for (int i = 0; i < 16 - z; i++) {
		a += "0";
	}
	a += y;
	//cout << a << endl;
	return a;
}

ExtendedCharacter::ExtendedCharacter() {
	c = NULL;
	i = 0;
	s = "";
}

ExtendedCharacter::ExtendedCharacter(int x) {
	c = char(x);
	i = x;
	s = toString(c);
}

ExtendedCharacter::ExtendedCharacter(char x) {
	c = x;
	i = int(x);
	s = toString(c);
}

void ExtendedCharacter::set(char x) {
	c = x;
	i = int(x);
	s = toString(c);
}


ExtendedCharacter& ExtendedCharacter :: operator+(const ExtendedCharacter& E) {
	ExtendedCharacter* obj = new ExtendedCharacter(0);
	//ExtendedCharacter obj;
	obj->i = i + E.i;
	obj->c = char(obj->i);
	obj->s = toString(obj->c);
	return (*obj);
}

ExtendedCharacter& ExtendedCharacter :: operator-(const ExtendedCharacter& E) {
	ExtendedCharacter* obj = new ExtendedCharacter(0);
	//ExtendedCharacter obj;
	obj->i = i - E.i;
	obj->c = char(obj->i);
	obj->s = toString(obj->c);
	return (*obj);
}

bool ExtendedCharacter :: operator== (const ExtendedCharacter& E) {
	if (i == E.i)
		return true;

	return false;
}

bool ExtendedCharacter :: operator!= (const ExtendedCharacter& E) {
	if (i != E.i)
		return true;

	return false;
}

bool ExtendedCharacter :: operator<= (const ExtendedCharacter& E) {
	if (i <= E.i)
		return true;

	return false;
}

bool ExtendedCharacter :: operator>= (const ExtendedCharacter& E) {
	if (i >= E.i)
		return true;

	return false;
}

bool ExtendedCharacter :: operator< (const ExtendedCharacter& E) {
	if (i < E.i)
		return true;

	return false;
}

bool ExtendedCharacter :: operator> (const ExtendedCharacter& E) {
	if (i > E.i)
		return true;

	return false;
}

ExtendedCharacter& ExtendedCharacter :: operator++() {
	ExtendedCharacter* obj = new ExtendedCharacter(0);
	i++;
	obj->i = i;
	obj->c = char(obj->i);
	obj->s = toString(obj->c);
	return (*obj);
}
ExtendedCharacter& ExtendedCharacter :: operator++(int) {
	ExtendedCharacter* obj = new ExtendedCharacter(0);
	obj->i = i;
	obj->c = char(obj->i);
	obj->s = toString(obj->c);
	i++;
	return (*obj);
}
ExtendedCharacter& ExtendedCharacter :: operator--() {
	ExtendedCharacter* obj = new ExtendedCharacter(0);
	i--;
	obj->i = i;
	obj->c = char(obj->i);
	obj->s = toString(obj->c);
	return (*obj);
}
ExtendedCharacter& ExtendedCharacter :: operator--(int) {
	ExtendedCharacter* obj = new ExtendedCharacter(0);
	obj->i = i;
	obj->c = char(obj->i);
	obj->s = toString(obj->c);
	i--;
	return (*obj);
}

ExtendedCharacter :: operator int() {
	int x = 0;
	for (int i = 0; i < s.length(); i++)
	{
		//char c = s[i] - 48;
		x += (int(s[i] - 48) * pow(2, s.length() - i - 1));
	}
	return x;
}

//ExtendedCharacter :: operator short() {
//
//}
//
//void ExtendedCharacter :: operator()(int, int) {
//
//}