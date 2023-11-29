// Este archivo contiene estrctura de una pelicula
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Comentario.h" 

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
  vector<Comentario> comentarios; 

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

   // Setter
  void setPresentacion(string presentacion2);

  // Métodos para comentarios
  void agregarComentario(const Comentario& comentario);
  const vector<Comentario>& getComentarios() const;
  
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

// Setters
void Pelicula::setPresentacion(string presentacion2){
  presentacion = presentacion2;
}

// Generar una carta descrptiva
void Pelicula::generarCarta() {
  cout << "----- Carta Descriptiva -----" << endl;
  cout << "Nombre: " << nombre << endl;
  cout << "Año: " << anno << endl;
  cout << "Género: " << genero << endl;
  cout << "Puntuación: " << puntuacion << endl;
  cout << "Presentación: " << presentacion << endl;
  cout << "-----------------------------" << endl;
}

// Métodos para comentarios
void Pelicula::agregarComentario(const Comentario& comentario) {
    comentarios.push_back(comentario);
}

const vector<Comentario>& Pelicula::getComentarios() const {
    return comentarios;
}

