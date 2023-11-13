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

  // Metodos
  void verificador(string usuario, string contrasena);
};

// Constructor por omision
Registro::Registro() {

  usuarioNube = "Usuario01";
  contrasenaNube = "123";
}

// Verificando los datos
void Registro::verificador(string usuario, string contrasena) {
  if ((usuario == usuarioNube) && (contrasena == contrasenaNube)) {
    cout << "Ingreso de sesión con éxito" << endl;
  } else {
    cout << "Nombre de usuario o contraseña incorrectos" << endl;
  }
}


