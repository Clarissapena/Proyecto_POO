// Archivos y librerias que se incluyen en el proyecto
#include "BibliotecaPeliculas.h"
#include "Comentarios.h"
#include "Registro.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

  // Inicio de sesion
  cout << "Inicia Sesión" << endl;
  cout << "--------------" << endl;

  // Pide los valores de inicio de sesión
  string usuario;
  cout << "Escribe tu nombre de usuario: " << endl;
  cin >> usuario;
  string contrasena;
  cout << "Escribe tu contraseña: " << endl;
  cin >> contrasena;

  // Verifica los valores
  Registro registro1;
  registro1.verificador(usuario, contrasena);

  // Entrada a la biblioteca
  cout << "----------------------" << endl;
  cout << "Bienvenido a FILMOTECA" << endl;
  cout << "La mejor biblioteca de peliculas" << endl;
  cout << "----------------------------------" << endl;

  // Crear peliculas
  Pelicula pelicula1("Titanic", 1997, "Drama", "9");
  Pelicula pelicula2("Matrix", 1999, "Ciencia ficción", "8");
  Pelicula pelicula3("El Padrino", 1972, "Ciencia ficcion", "10");
  Pelicula pelicula4("Intelestalar", 2014, "Ciencia ficcion", "10");
  Pelicula pelicula5("Emoji", 2019, "Animada", "3");

  // Agrega peliculas a la biblioteca
  BibliotecaPeliculas biblioteca;
  biblioteca.agregarPelicula(pelicula1);
  biblioteca.agregarPelicula(pelicula2);
  biblioteca.agregarPelicula(pelicula3);
  biblioteca.agregarPelicula(pelicula4);
  biblioteca.agregarPelicula(pelicula5);

  // Elegir un filtro para buscar películas
  int filtro;
  cout << "Selecciona tu filtro para encontrar tu película" << endl;
  cout << "1. Por nombre  2. Por año  3. Por género  4. Por puntuación" << endl;
  cin >> filtro;

  switch (filtro) {
  case 1: {
    string valor;
    cout << "Ingrese el nombre de la película: ";
    cin >> valor;
    biblioteca.buscarPeliculas(filtro, valor);
  } break;
  case 2: {
    string valor;
    cout << "Ingrese el año de la película: ";
    cin >> valor;
    biblioteca.buscarPeliculas(filtro, valor);
  } break;
  case 3: {
    string valor;
    cout << "Géneros disponibles: Drama, Ciencia Ficción, Animada";
    cout << "Ingrese el género de la película: ";
    cin >> valor;
    biblioteca.buscarPeliculas(filtro, valor);
  } break;
  case 4: {
    string valor;
    cout << "Ingrese la puntuación de la película: ";
    cin >> valor;
    biblioteca.buscarPeliculas(filtro, valor);
  } break;

  default:
    cout << "Filtro no válido" << endl;
    break;
  }

  return 0;
}