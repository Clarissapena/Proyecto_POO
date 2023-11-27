// Este archivo es una herencia de Peliculas y contiene Cortometrajes
#pragma once
#include "Pelicula.h"
#include <iostream>
#include <string>

//-------------------Clase Largometraje--------------------------

class Cortometraje : public Pelicula {
private:
  string festivalCine;

public:
  Cortometraje();
  Cortometraje(string nombre, int anno, string genero, string puntuacion, string presentacion);
  string getFestivalCine();
  void setPresentacion();
};

// Constructor por omision
Cortometraje::Cortometraje(){ 
  festivalCine = presentacion; 
}

string Cortometraje::getFestivalCine(){ 
  return festivalCine; 
}

