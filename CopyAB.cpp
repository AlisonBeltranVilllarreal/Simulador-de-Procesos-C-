//Beltran Alison Judith
//Copy
#include <iostream>
#include <string.h>
#include <fstream>
#include<stdlib.h>


#include <unistd.h>
#include<cstdio>
#include <string>

using namespace std;

void CopiaMismoArc(string nombre){
	string copia;
	char SegCopia[100];
	ofstream archivo;
	FILE* arch;
	arch=fopen(nombre.c_str(),"r");
	copia= nombre + "Cop";
	archivo.open(copia.c_str());
	
	while(feof(arch)==0){
		fgets(SegCopia,100,arch);
		archivo<<SegCopia;
	}
	fclose(arch);
}

void CopiaArch(string nombre, string Ruta){
	ofstream archivo;
	FILE* arch;
	string copia;
	char SegCopia[100];
	
	arch=fopen(nombre.c_str(),"r");
	copia=Ruta + "\\" + nombre;
	archivo.open(copia.c_str());
	
	while(feof(arch)==0){
		fgets(SegCopia,100,arch);
		archivo<<SegCopia;
	}
	fclose(arch);
}

int main(int argc, char *direccion[]){
	
	ofstream archivo;
	FILE* arch;
	
	if(argc==2){
	CopiaMismoArc(direccion[1]);
	cout<<"Tu Archivo se ha Copiado \n";
	 }
	else{
	CopiaArch(direccion[1],direccion[2]);
	cout<<"Archivo Copiado en otro Directorio \n";
	}
	system("pause");
	return 0;
}
