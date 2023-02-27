//Beltran Alison Judith
//Delete
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
         remove(nombreArchivo[1]);
          cout << "Archivo borrado correctamente" << endl;
         }
         else{
          cout << "El archivo no existe" << endl;
         }

        return 0;
    }


