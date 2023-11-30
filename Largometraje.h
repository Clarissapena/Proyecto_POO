// Este archivo es una herencia de Peliculas y contiene Largometrajes
#pragma once
#include "Pelicula.h"
#include <iostream>
#include <string>

//-------------------Clase Largometraje--------------------------

class Largometraje : public Pelicula {
private:
  string estudioCinematografico;

public:
  Largometraje();
  Largometraje(string nombre, int anno, string genero, string puntuacion,
               string presentacion)
      : Pelicula(nombre, anno, genero, puntuacion, presentacion){};
  string getEstudioCinematografico();
};

// Constructor por omision
Largometraje::Largometraje() { estudioCinematografico = presentacion; }

string Largometraje::getEstudioCinematografico() {
  return estudioCinematografico;
}
