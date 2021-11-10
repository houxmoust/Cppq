#include <iostream>

using namespace std;

extern int test1; // Error : test1 can only be used in test1.cpp
extern int test2; 
extern int test3; // Error : test3 can only be used in test3.cpp

//void test1Func(); // Error : test1Func can only be used in test1.cpp
void test2Func();
void test3Func();
/*inline*/ void test4Func();
void Application1(int, int);


int main()
{	
	// Demo1 : static variables and functions : can only be used in the file which defined them.
	
		//cout << test1 << endl; // Error
		cout << test2 << endl;
		//cout << test3 << endl; // Error

		//test1Func(); // Error
		test2Func();
		test3Func(); 
		//cout << test3 << endl; // Although we define test3 in this file, but we still can not use test3 in this file.
		

		// PS : inline function has the same effect.
		//test4Func(); // Error

		// Application : use this function in another file and update the static variables in that file.
		int pass1 = 15, pass2 = 20;
		Application1(pass1, pass2);

	return 0;
}