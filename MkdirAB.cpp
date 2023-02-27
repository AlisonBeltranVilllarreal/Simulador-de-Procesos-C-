//Beltran Alison Judith
//Mkdir
#include <iostream>
#include <direct.h> 
#include <string>

using namespace std;

void Directorio(string Ruta, string Carpeta){

	string Ruta_absoluta =Ruta + "\\" + Carpeta;
	if(mkdir(Ruta_absoluta.c_str())==0)
	cout<<"Carpeta creada con excito \n";
		else
	cout<<"La Carpeta no se ha creado Correctamente \n";
	
}

int main(int argc, char *Ruta[]){
	Directorio(Ruta[1],Ruta[2]);
	system("pause");
	return 0;
}
