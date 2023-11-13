// Este archivo contiene estrctura de una pelicula
#include <iostream>
#include <string> 
#include <vector>

using namespace std; 

//-------------------Clase Pelicula-----------------------------------

class Pelicula {

    private: 
    //Atributos privados
    string nombre;  
    int anno; 
    string genero;
    string puntuacion;

    
    public: 
    //Atributos publicos 

    //Atributos para constructor por omision
    Pelicula();
    Pelicula(string nombre, int anno, string genero, string puntuacion);

    //Getters
    string getNombre();  
    int getAnno(); 
    string getGenero();
    string getPuntuacion();
};


//Constructor por omision
Pelicula::Pelicula(){

    nombre = "";
    anno = 0;
    genero = "";
    puntuacion = "";

}

Pelicula::Pelicula(string nombre, int anno, string genero, string puntuacion) {
  this->nombre = nombre;
  this->anno = anno;
  this->genero = genero;
  this->puntuacion = puntuacion;
}

//Getters
string Pelicula::getNombre(){
    return nombre;
}

int Pelicula::getAnno(){
    return anno;
}

string Pelicula::getGenero(){
    return genero;
}

string Pelicula::getPuntuacion(){
    return puntuacion;
}




