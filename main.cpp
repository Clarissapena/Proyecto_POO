// Archivos y librerias que se incluyen en el proyecto
#include "BibliotecaPeliculas.h"
#include "Cortometraje.h"
#include "Largometraje.h"
#include "Registro.h"
#include "Pelicula.h"
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
  while (!registro1.verificador(usuario, contrasena)) {
    cout << "Nombre de usuario o contraseña incorrectos." << endl
         << "Intenta nuevamente." << endl;

    // Pide los valores de inicio de sesión nuevamente
    cout << "Escribe tu nombre de usuario: " << endl;
    cin >> usuario;
    cout << "Escribe tu contraseña: " << endl;
    cin >> contrasena;
  }

  // Entrada a la biblioteca
  cout << "----------------------" << endl;
  cout << "Bienvenido a FILMOTECA" << endl;
  cout << "La mejor biblioteca de peliculas" << endl;
  cout << "----------------------------------" << endl;

  // Crear un largometraje
  Largometraje largometraje1("Titanic", 1997, "Drama", "9",
                             "20th Century Studios Paramount Pictures");
  Largometraje largometraje2("Matrix", 1999, "Ciencia ficción", "8",
                             "Warner Bros. Pictures");
  Largometraje largometraje3("El Padrino", 1972, "Ciencia ficcion", "10",
                             "Paramount Pictures");
  Largometraje largometraje4("Jack and Jill", 2011, "Comedia", "1",
                             "Columbia Pictures");
  Largometraje largometraje5("Emoji", 2019, "Animada", "3",
                             "Sony Pictures Animation");
  Largometraje largometraje6("La La Land", 2016, "Drama", "9",
                             "	Lionsgate");
  Largometraje largometraje7("Interestelar", 2014, "Ciencia ficción", "9",
                             "Paramount Pictures");
  Largometraje largometraje8("Toy Story", 1995, "Animada", "8",
                             " Walt Disney Pictures");
  Largometraje largometraje9("Forrest Gump", 1994, "Drama", "8",
                             "Paramount Pictures");

  // Crear un cortometraje
  Cortometraje cortometraje1("Aventuras en el Espacio", 2020, "Ciencia Ficción",
                             "8", "Cine Sci-Fi");
  Cortometraje cortometraje2("El Misterio de la Noche", 2021, "Suspense", "7",
                             "Cortos de Suspense");
  Cortometraje cortometraje3("Amor en el Tiempo", 2019, "Romance", "9",
                             "Cortometrajes Románticos");

  // Agrega Largometrajes a la biblioteca
  BibliotecaPeliculas biblioteca;
  biblioteca.agregarPelicula(largometraje1);
  biblioteca.agregarPelicula(largometraje2);
  biblioteca.agregarPelicula(largometraje3);
  biblioteca.agregarPelicula(largometraje4);
  biblioteca.agregarPelicula(largometraje5);
  biblioteca.agregarPelicula(largometraje6);
  biblioteca.agregarPelicula(largometraje7);
  biblioteca.agregarPelicula(largometraje8);
  biblioteca.agregarPelicula(largometraje9);

  // Agrega Cortometrajes a la biblioteca
  biblioteca.agregarPelicula(cortometraje1);
  biblioteca.agregarPelicula(cortometraje2);
  biblioteca.agregarPelicula(cortometraje3);

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
    cout << "Géneros disponibles: Drama, Ciencia Ficción, Animada, Comedia ";
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

  // Elegir una película por nombre
  string nombrePelicula;
  cout << "Ingresa el nombre de la película que deseas ver la carta "
          "descriptiva: ";
  cin.ignore(); // Ignorar el salto de línea
  getline(cin, nombrePelicula);

  // Buscar la película en la biblioteca
  Pelicula peliculaElegida = biblioteca.buscarPeliculaPorNombre(nombrePelicula);
  if (peliculaElegida.getNombre() != "") {
    // Crear una carta descritiva
    Pelicula carta;
    carta.generarCarta();
  } else {
    cout << "No se encontró ninguna película con esa descripción." << endl;
  }

  return 0;
}