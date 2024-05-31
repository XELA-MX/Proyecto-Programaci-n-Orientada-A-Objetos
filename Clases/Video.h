#pragma once
#include <iostream>

using namespace std;

class Video {
private:
  string tipoVideo;
  string nombreVideo;
  string genero;
  int calificacion;
  int anioLanzamiento;
  int duracion;
  int id;

public:
  Video();
  Video(string, string, string, int, int, int, int);
  void calificaVideo(int);
  virtual void muestraDatos();

  // Setters
  void setTipoVideo(string);
  void setNombreVideo(string);
  void setGenero(string);
  void setCalificacion(int);
  void setAnioLanzamiento(int);
  void setDuracion(int);
  void setId(int);
  // Getters
  string getTipoVideo();
  string getNombreVideo();
  string getGenero();
  int getCalificacion();
  int getAnioLanzamiento();
  int getDuracion();
  int getId();
};