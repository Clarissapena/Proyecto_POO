// Este archivo se utilizara para el registro
#include <iostream>
#include <string>

using namespace std;

class Registro {

private:
  // Atributos privados
  string usuarioNube;
  string contrasenaNube;

public:
  // Atributos publicos
  Registro();

  // Getters
  string getUsuarioNube();
  string getContrasenaNube();

  // Setters
  void setUsuarioNube(string);
  void setContrasenaNube(string);

  // Metodos
  bool verificador(string usuario, string contrasena);
};

// Constructor por omision
Registro::Registro() {

  usuarioNube = "usuario01";
  contrasenaNube = "123";
}

// Getters
string Registro::getUsuarioNube() { return usuarioNube; }

string Registro::getContrasenaNube() { return contrasenaNube; }

// Setters
void Registro::setUsuarioNube(string nuevoUsuario) {
  usuarioNube = nuevoUsuario;
}

void Registro::setContrasenaNube(string nuevaContrasena) {
  contrasenaNube = nuevaContrasena;
}

// Verificando los datos
bool Registro::verificador(string usuario, string contrasena) {
  if ((usuario == usuarioNube) && (contrasena == contrasenaNube)) {
    cout << "---------------------------" << endl;
    cout << "Ingreso de sesión con éxito" << endl;
    return true; // Verificación exitosa
  } else {
    cout << endl;
    return false; // Verificación fallida
  }
}
