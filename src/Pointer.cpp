//============================================================================
// Name        : Pointer.cpp
// Author      : Me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
	string name;


    Dog (){
    	name = "He";


    };
    Dog (string s){
        	name = s;


        };
};

void func(Dog dog){
    dog = Dog("hello world"); //Change the value of dog to a new object
}


int main() {

	string str2 = "World";
	Dog dog1(str2);                            //Create a dog object
	func(dog1);                               //pass the address of dog
	cout << dog1.name;                         //Prints "hello world" not hi.



	return 0;
}


