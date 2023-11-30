// Este archivo contiene estrctura de una pelicula
#pragma once
#include "Comentario.h"
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
  vector<Comentario> comentarios;

public:
  // Atributos publicos
  void generarCarta();

  // Atributos para constructor por omision
  Pelicula();
  Pelicula(string nombre, int anno, string genero, string puntuacion,
           string presentacion);

  // Getters
  string getNombre();
  int getAnno();
  string getGenero();
  string getPuntuacion();
  string getPresentacion();

  // Setter
  void setPresentacion(string presentacion2);
  void setNombre(string);
  void setAnno(int);
  void setGenero(string);
  void setPuntuacion(string);

  // Métodos para comentarios
  void agregarComentario(string nombreUsuario, int puntuacion,
                         string comentario);
  const vector<Comentario> &getComentarios() const;
};

// Constructor por omision
Pelicula::Pelicula() {
  nombre = "";
  anno = 0;
  genero = "";
  puntuacion = "";
  presentacion = "";
}

Pelicula::Pelicula(string nombre, int anno, string genero, string puntuacion,
                   string presentacion) {
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
void Pelicula::setPresentacion(string presentacion2) {
  presentacion = presentacion2;
}

void Pelicula::setNombre(string nuevoNombre) { nombre = nuevoNombre; }

void Pelicula::setAnno(int nuevoAnno) { anno = nuevoAnno; }

void Pelicula::setGenero(string nuevoGenero) { genero = nuevoGenero; }

void Pelicula::setPuntuacion(string nuevaPuntuacion) {
  puntuacion = nuevaPuntuacion;
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
void Pelicula::agregarComentario(string nombreUsuario, int puntuacion,
                                 string comentario) {
  Comentario nuevoComentario(nombreUsuario, puntuacion, comentario);
  comentarios.push_back(nuevoComentario);
}

const vector<Comentario> &Pelicula::getComentarios() const {
  return comentarios;
}
