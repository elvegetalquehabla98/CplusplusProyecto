#include <iostream>
#include <string>

using namespace std;

class ModeloNintendo {
   public:
      string nombre;
      string color;
      int edad;
      bool esHumano;
      char letraInicial;      

      ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano = false);
      ~ModeloNintendo();
      
      void saludar(string nombre);
      void saltar(char tecla);
      void agacharse(char tecla = 'C');
      int avanzar(char tecla);
      void danio(string grito);
      //nuevas funciónes
      void esquivar();
      void morir();
          
          // declaraciones de funciones
      void setNombre(std::string nombre);
      void setColor(std::string color);
      std::string getNombre();
      std::string getColor();
      
      
   protected:
      string nombreClave;
      int salud;
      char combinacionHabilidades[10];
      void habilidadesEspeciales(string combinacionTeclas);
   
   private:
      string nombreSecreto;
      char combinacionTrucos[10];
      char combinacionSecretos[10];
      void trucos(string combinacionTeclas);
      void revelarSecretos(string combinacionTeclas);

};