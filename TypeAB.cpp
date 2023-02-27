//Beltran Alison Judith
//Type
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
 char c;

 if (argc!=2)
 {
  cout << "\nParametro incorrecto\n";
  cout << "Syntaxis : \n";
  cout << "mytype <arch1>\n";
  return 1;
 }
 ifstream fich(argv[1]);
    
 if (!fich.is_open())
 {
  cout << "No se puede abrir el archivo \n";
  return 1;
 }
 
 while (fich)
 {
  fich.get(c);
  cout << c;
 }
    
 cout << "\n---------------"<< endl;
 cout << "Contenido del Archivo "<< endl;
 fich.close();
    cin.get();
 return 0;
}
