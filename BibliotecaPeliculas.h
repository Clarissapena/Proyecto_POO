// Este archivo contiene la biblioteca y metodos de busqueda
#pragma once
#include "Pelicula.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//-------------------Clase BibliotecaPeliculas--------------------------

class BibliotecaPeliculas {
private:
  vector<Pelicula> peliculasInformacion;

public:
  // Métodos
  //(Agregar películas)
  void agregarPelicula(Pelicula peliculaInfo);

  //(Buscar películas)
  void buscarPeliculas(int filtro, string valor);
  Pelicula buscarPeliculaPorNombre(string nombre);
};

// Implementación del método agregarPelicula
void BibliotecaPeliculas::agregarPelicula(Pelicula peliculaInfo) {
  peliculasInformacion.push_back(peliculaInfo);
}

// Implementación del método buscarPeliculas
void BibliotecaPeliculas::buscarPeliculas(int filtro, string valor) {
  for (Pelicula pelicula : peliculasInformacion) {
    switch (filtro) {
    case 1: // Por nombre
      if (pelicula.getNombre() == valor) {
        cout << "Pelicula encontrada por nombre: " << pelicula.getNombre()
             << endl;
      }
      break;

    case 2: // Por año
      if (pelicula.getAnno() == stoi(valor)) {
        cout << "Pelicula encontrada por año: " << pelicula.getNombre() << endl;
      }
      break;

    case 3: // Por género
      if (pelicula.getGenero().find(valor) != string::npos) {
        cout << "Pelicula encontrada por género: " << pelicula.getNombre()
             << endl;
      }
      break;

    case 4: // Por puntuación
      if (pelicula.getPuntuacion() == valor) {
        cout << "Pelicula encontrada por puntuación: " << pelicula.getNombre()
             << endl;
      }
      break;

    default:
      cout << "Filtro no válido" << endl;
      break;
    }
  }
}

Pelicula BibliotecaPeliculas::buscarPeliculaPorNombre(string nombre) {
  for (Pelicula pelicula : peliculasInformacion) {
    if (pelicula.getNombre() == nombre) {
      return pelicula;
    }
  }
  return Pelicula();
}