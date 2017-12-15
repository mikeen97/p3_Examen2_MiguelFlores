#ifndef STACK_H
#define STACK_H
#include <string> 
#include <iostream>
using namespace std;

class Stack{

public:
	virtual bool push(string)=0;
	virtual bool revertir()=0;
	virtual string pop()=0;
	virtual bool isEmpty()=0;
	virtual bool isFull()=0;

};
#endif
