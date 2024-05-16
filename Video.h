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

public:
  Video();
  Video(string, string, string, int, int, int);
  void calificaVideo(int);
  void muestraDatos();

  // Setters
  void setTipoVideo(string);
  void setNombreVideo(string);
  void setGenero(string);
  void setCalificacion(int);
  void setAnioLanzamiento(int);
  void setDuracion(int);
  // Getters
  string getTipoVideo();
  string getNombreVideo();
  string getGenero();
  int getCalificacion();
  int getAnioLanzamiento();
  int getDuracion();
};