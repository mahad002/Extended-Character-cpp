#pragma once
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class ExtendedCharacter {
	// think about the private data members...
private: 
	char c;
	int i;
	string s;
public:
	//include all the necessary checks before performing the operations in the functions
	ExtendedCharacter();// a default constructor
	ExtendedCharacter(int);// a parametrized constructor
	ExtendedCharacter(char); // a parametrized constructor
	void set(char);//set value
	string toString(char);//write your own function that converts a character into its
	//binary equivalentand return it as string, you can use this function in the
	//parameterized constructor when constructing the object
	//ExtendedCharacter& operator=(const ExtendedCharacter&); 
	ExtendedCharacter& operator+(const ExtendedCharacter&); 
	ExtendedCharacter& operator-(const ExtendedCharacter&); 
	bool operator==(const ExtendedCharacter&); 
	bool operator!=(const ExtendedCharacter&); 
	bool operator<=(const ExtendedCharacter&); 
	bool operator>=(const ExtendedCharacter&); 
	bool operator<(const ExtendedCharacter&); 
	bool operator>(const ExtendedCharacter&); 
	ExtendedCharacter& operator++(); 
	ExtendedCharacter& operator++(int); 
	ExtendedCharacter& operator--(); 
	ExtendedCharacter& operator--(int); 
	operator int(); //converts the ExtendedCharacter into an integer
	//operator short(); //converts the ExtendedCharacter into an integer
	//void operator()(int, int); //Given a range in integers determine if the character is an alphabet (lower or upper), number
	char getC() {
		return this->c;
	}
	void setC(char c) {
		this->c = c;
	}


	int getI() {
		return this->i;
	}
	void setI(int i) {
		this->i = i;
	}


	string getS() {
		return this->s;
	}
	void setS(string s) {
		this->s = s;
	}

};

