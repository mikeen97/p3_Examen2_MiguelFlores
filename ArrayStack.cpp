#include "ArrayStack.h"

ArrayStack::ArrayStack(int pSize){ //Crear una pila y le das el size 
	size=pSize;
	array = new string[size];
	availPos=0;
}

bool ArrayStack::push(string dato){//Para meter el dato a la pila 
	bool retval=false;//fallo en meter un dato 
	cout<<availPos<<"\n";
	if (availPos==size) {
		string pos1=array[0],pos2=array[1],pos3=array[2],pos4=array[3];
		//muevo las pilas 
		array[0]=dato;		
		array[1]=pos1;
		array[2]=pos2;
		array[3]=pos3;
		array[4]=pos4;
		cout<<"EMPUJO EN 1)\n";
		cout<<array[0]<<": 1\n";
		cout<<array[1]<<": 2\n";
		cout<<array[2]<<": 3\n";
		cout<<array[3]<<": 4\n";
		cout<<array[4]<<": 5\n";		
	}else{
		array[availPos++]=dato;
		retval=true;//metio dato correctamente!
		cout<<"EMPUJO EN 2)\n";
		cout<<array[0]<<": 1\n";
		cout<<array[1]<<": 2\n";
		cout<<array[2]<<": 3\n";
		cout<<array[3]<<": 4\n";
		cout<<array[4]<<": 5\n";		
		return retval;
	}
}

bool ArrayStack::revertir(){//Para meter el dato a la pila 	
	string aux1,aux2,aux3,aux4; 
		aux1 = array[1];
		aux2 = array[2];
		aux3 = array[3];
		aux4 = array[4];
		//mwto en la pila
		array[0]= aux1;
		array[1]= aux2;
		array[2]= aux3;
		array[3]= aux4;
		array[4]= "";		
	cout<<"EMPUJO EN 2)\n";
	cout<<array[0]<<": 1\n";
	cout<<array[1]<<": 2\n";
	cout<<array[2]<<": 3\n";
	cout<<array[3]<<": 4\n";
	cout<<array[4]<<": 5\n";		
}

bool ArrayStack::isEmpty(){//si la pila esta vacia 
	if (availPos==0){
		return true;
	}
}

bool ArrayStack::isFull(){//si la pila esta llena 
	if (availPos==4){
		return true;
	}
} 

string ArrayStack::pop(){//Borrar de la pila 
	if (isEmpty()) {
		return 0;
	}
	else{
		string retval=array[availPos-1];
		availPos--;
		return retval;
	}
}

ArrayStack::~ArrayStack(){//eliminar pila s
	delete[] array;
}
