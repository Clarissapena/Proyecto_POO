#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

//-------------------Clase Comentario--------------------------
class Comentario {

  private:
    string nombreUsuario;
    float puntuacionUsuario;
    string comentarioUsuario;

  public:
    // Constructores
    Comentario();
    Comentario(string, float, string);

    // Getters
    string getNombre() const;
    float getPuntuacion() const;
    string getComentario() const;

    // Setters
    void setNombre(const string& nuevoNombre);
    void setPuntuacion(float nuevaPuntuacion);
    void setComentario(string nuevoComentario);
};

// Implementación de los métodos

Comentario::Comentario() {
    nombreUsuario = "";
    puntuacionUsuario = 0.0;
    comentarioUsuario = "";
}


Comentario::Comentario(string nombre, float puntuacion, string comentario) {
    nombreUsuario = nombre;
    puntuacionUsuario = puntuacion;
    comentarioUsuario = comentario;
}

string Comentario::getNombre() const {
    return nombreUsuario;
}

float Comentario::getPuntuacion() const {
    return puntuacionUsuario;
}

string Comentario::getComentario() const {
    return comentarioUsuario;
}

void Comentario::setNombre(const string& nuevoNombre) {
    nombreUsuario = nuevoNombre;
}

void Comentario::setPuntuacion(float nuevaPuntuacion) {
    puntuacionUsuario = nuevaPuntuacion;
}

void Comentario::setComentario(string nuevoComentario) {
    comentarioUsuario = nuevoComentario;
}

