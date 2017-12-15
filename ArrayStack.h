#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "Stack.h"

class ArrayStack : public Stack{
private:
	string* array;//vector
	int size;//tama;no de la pila 
	int availPos;//puntero de mi pila
public:
	ArrayStack(int);//crear
	virtual bool push(string);//meter dato
	virtual bool revertir();//meter dato	
	virtual string pop();//eliminar  	
	virtual bool isEmpty();//ver si esta vacia 
	virtual bool isFull();//ver si esta llena 


	~ArrayStack();
};
#endif
