#include <iostream>
#include <string>
#include "archivo.h"
#include "ArrayStack.h"
#include <fstream>

using namespace std;

int main(){
     cout<<"BIENVENIDO AL SISTEMA \n";
     int menu=0;
     while(menu!=4){
     	cout<<"1) Crear un archivo\n";
     	cout<<"2) Modificar archivo\n";
     	cout<<"3) \n";
     	cout<<"1) SALIR\n";
		if (menu==1){
			cout<<"Ingrese la ruta donde lo desea crear\n";
			string name;
			cin>>name;
			name+=".txt";
			ofstream Archivo;
			Archivo.open(name.c_str());
			if (Archivo.fail()){
				cout<<"ALGO TOCO MAL Y NO FUNCIONO BIEN :(\n";
			}else{
				cout<<"Creo el archivo "<<name<<" exitosamente!! \n";
			}
			Archivo.close();
		}
		if (menu==2){
			cout<<"Ingrese la direccion del archivo\n";
			string archivorecuperar,texto;
			cin>>archivorecuperar;
			fstream Archivo(archivorecuperar.c_str());
			if (Archivo.is_open()) {	
				while(!Archivo.eof()){
					getline(Archivo,texto);
				}
			}				
			
		}		
		if (menu==3){
			
		}
		if (menu==4){
			
		}				
     }



     
     return 0;
}














