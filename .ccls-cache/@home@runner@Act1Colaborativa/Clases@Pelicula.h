#pragma once
#include "Video.hpp"
#include <iostream>

using namespace std;

class Pelicula : public Video {
private:
  int nominaciones;

public:
  Pelicula();
  Pelicula(string, string, string, int, int, int, int, int);
  void muestraDatos();
};

Pelicula::Pelicula() : Video() { nominaciones = 0; }
Pelicula::Pelicula(string _tipoVideo, string _nombreVideo, string _genero,
                   int _calificacion, int _anioLanzamiento, int _duracion,
                   int _id, int nominaciones_)
    : Video(_tipoVideo, _nombreVideo, _genero, _calificacion, _anioLanzamiento,
            _duracion, _id) {
  nominaciones = nominaciones_;
}
void Pelicula::muestraDatos() {
  cout << "Tipo de video: " << getTipoVideo() << endl;
  cout << "Nombre: " << getNombreVideo() << endl;
  cout << "Genero: " << getGenero() << endl;
  cout << "Calificacion: " << getCalificacion() << endl;
  cout << "Anio de lanzamiento: " << getAnioLanzamiento() << endl;
  cout << "Duracion: " << getDuracion() << endl;
  cout << "ID: " << getId() << endl;
  cout << "Nominaciones: " << nominaciones << endl;
}