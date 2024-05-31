#pragma once
#include "Video.hpp"
#include <iostream>

using namespace std;

class Serie : public Video {
private:
  int cantEpisodios;

public:
  Serie();
  Serie(string, string, string, int, int, int, int, int);
  void muestraDatos();
};

Serie::Serie() : Video() { cantEpisodios = 0; }

Serie::Serie(string _tipoVideo, string _nombreVideo, string _genero,
             int calificacion, int anioLanzamiento, int duracion, int id,
             int cantEpisodios_)
    : Video(_tipoVideo, _nombreVideo, _genero, calificacion, anioLanzamiento,
            duracion, id) {
  cantEpisodios = cantEpisodios_;
}
void Serie::muestraDatos() {
  cout << "Tipo de video: " << getTipoVideo() << endl;
  cout << "Nombre: " << getNombreVideo() << endl;
  cout << "Genero: " << getGenero() << endl;
  cout << "Calificacion: " << getCalificacion() << endl;
  cout << "Anio de lanzamiento: " << getAnioLanzamiento() << endl;
  cout << "Duracion: " << getDuracion() << endl;
  cout << "ID: " << getId() << endl;
  cout << "Cantidad de episodios: " << cantEpisodios << endl;
}