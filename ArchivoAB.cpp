//Beltran Alison Judith
//Crear un Archivo
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

    bool is_file(string file){
         FILE * archivo;

         if (archivo = fopen(file.c_str(), "r")){
          fclose(archivo);
          return true;
         }
         else{
          return false;
         }
    }
    
    int main(int argc, char *nombreArchivo[]){

         if (is_file(nombreArchivo[1])){
         	
          cout << "El Archivo ya Existe" << endl;
         }
         else{
		  fopen(nombreArchivo[1],"w+");
          cout << "Archivo creado Correctamente" << endl;
         }

        return 0;
    }


