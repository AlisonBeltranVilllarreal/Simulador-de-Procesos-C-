//Beltran Alison Judith
//Dir
#include <iostream>
#include <dirent.h> 
#include <string>
#include <fstream>

using namespace std;

void listarArchivo(string dir){
    //string elem;
    DIR *direccion;
    struct dirent *elementos;
    
    if(direccion=opendir(dir.c_str())){
        while (elementos=readdir(direccion)){
            if(elementos->d_name!="." && elementos->d_name!=".." ){
                cout<<elementos->d_name<<"\n";
            }
        }
    }
    closedir(direccion);
}

int main(int argc, char *direccion[]){
	listarArchivo(direccion[1]);
	system("pause");
	return 0;
}
