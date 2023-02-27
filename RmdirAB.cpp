//Beltran Alison Judith
//Rdir
#include <iostream>
#include <direct.h> 
#include <string>

using namespace std;

void Directorio(string Ruta, string Carpeta){

	string Ruta_absoluta =Ruta + "\\" + Carpeta;
	if(mkdir(Ruta_absoluta.c_str())!=0){
	   rmdir(Ruta_absoluta.c_str());
	cout<<"Carpeta eliminada correctamente \n";
}
		else
	cout<<"La Carpeta no se ha encontrado \n";
}

int main(int argc, char *Ruta[]){
	Directorio(Ruta[1],Ruta[2]);
	system("pause");
	return 0;
}
