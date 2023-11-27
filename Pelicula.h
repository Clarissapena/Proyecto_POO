// Este archivo contiene estrctura de una pelicula
#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//-------------------Clase Pelicula-----------------------------------

class Pelicula {

protected:
  // Atributos privados
  string nombre;
  int anno;
  string genero;
  string puntuacion;
  string presentacion;

public:
  // Atributos publicos
  void generarCarta();

  // Atributos para constructor por omision
  Pelicula();
  Pelicula(string nombre, int anno, string genero, string puntuacion, string presentacion);

  // Getters
  string getNombre();
  int getAnno();
  string getGenero();
  string getPuntuacion();
  string getPresentacion();
  
};

// Constructor por omision
Pelicula::Pelicula() {
  nombre = "";
  anno = 0;
  genero = "";
  puntuacion = "";
  presentacion = "";
}

Pelicula::Pelicula(string nombre, int anno, string genero, string puntuacion, string presentacion) {
  this->nombre = nombre;
  this->anno = anno;
  this->genero = genero;
  this->puntuacion = puntuacion;
  this->presentacion = presentacion;
}

// Getters
string Pelicula::getNombre() { return nombre; }
int Pelicula::getAnno() { return anno; }
string Pelicula::getGenero() { return genero; }
string Pelicula::getPuntuacion() { return puntuacion; }
string Pelicula::getPresentacion() { return presentacion; }

// Generar una carta descrptiva
void Pelicula::generarCarta() {
  cout << "----- Carta Descriptiva -----" << endl;
  cout << "Nombre: " << getNombre() << endl;
  cout << "Año: " << getAnno() << endl;
  cout << "Género: " << getGenero() << endl;
  cout << "Puntuación: " << getPuntuacion() << endl;
  cout << "Presentación: " << getPresentacion() << endl;
  cout << "-----------------------------" << endl;
}
