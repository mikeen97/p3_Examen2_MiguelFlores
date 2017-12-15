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
     	cout<<"1) SALIR\n";
		cin>>menu;
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
			bool archivoEntrar=false;
			if (Archivo.is_open()) {	
				while(!Archivo.eof()){
					getline(Archivo,texto);
					archivoEntrar=true;
				}
			}
			Stack *text = new ArrayStack(5);
			bool editar=true;
			int opciones=0;
			if(archivoEntrar==true){
				while(editar){
					cout<<"----OPCIONES------\n";
			     	cout<<"1) Agregar texto\n";
			     	cout<<"2) Revertir una vez un dato\n";
			     	cout<<"3) Guardar y salir\n";
			     	cin>>opciones;
			     	if (opciones==1){//agregar
						cout<<"ingrese el texto que desea ingresar: \n";
						string addText="";
						cin>>addText;
						text->push(addText);
						cout<<"Lo ingreso correctamente! xD\n";
					}
					if (opciones==2){//revertir cambios 
						text->revertir();
					}						
					if (opciones==3){//salir
						
					}
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














