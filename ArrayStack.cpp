#include "ArrayStack.h"

ArrayStack::ArrayStack(int pSize){ //Crear una pila y le das el size 
	size=pSize;
	array = new string[size];
	availPos=0;
}


bool ArrayStack::push(string dato){//Para meter el dato a la pila 
	bool retval=false;

	if (availPos==size) {
		return retval;
	}else{
		array[availPos++]=dato;
		retval=true;
		return retval;
	}
}

bool ArrayStack::isEmpty(){//si la pila esta vacia 
	return availPos==0;
}

string ArrayStack::pop(){//Borrar de la pila 
	if (isEmpty()) {
		return 0;
	}else{
		string retval=array[availPos-1];
		availPos--;
		return retval;
	}
}

ArrayStack::~ArrayStack(){
	delete[] array;
}
