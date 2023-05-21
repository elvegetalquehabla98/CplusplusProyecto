#include "ModeloNintendo.h"
//incluir librería estándar de C++
#include <iostream>
//Incluimos stlib para poder usar la función 'exit(0)'
#include <cstdlib>

ModeloNintendo::ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano) {
    this->nombre = nombre;
    this->color = color;
    this->edad = edad;
    this->salud = salud;
    this->esHumano = esHumano;
}

ModeloNintendo::~ModeloNintendo() {
    cout << "\nMurió\n" << "\n";
}

void ModeloNintendo::saludar(string nombre) {
    cout << "\nHola\t" << nombre << "\n";
}

void ModeloNintendo::saltar(char tecla) {
    cout << "\nyuha\n";
}

void ModeloNintendo::agacharse(char tecla) {
    cout << "\noig\n";
}

int ModeloNintendo::avanzar(char tecla) {
    cout << "\ntac tac tac";
    return 0;
}

void ModeloNintendo::danio(string grito) {
    cout << "\nMamamia!!!\n";
}

void ModeloNintendo::habilidadesEspeciales(string combinacionTeclas) {
    cout << "Hola " << combinacionTeclas;
}

void ModeloNintendo::trucos(string combinacionTeclas) {
    cout << "Hola";
}

void ModeloNintendo::revelarSecretos(string combinacionTeclas) {
    cout << "Hola";
}

// Setters
void ModeloNintendo::setNombre(string nombre) {
    this->nombre = nombre;
}

void ModeloNintendo::setColor(string color) {
    this->color = color;
}

// Nuevo método
void ModeloNintendo::esquivar() {
    cout << "\nesquivando!\n" << endl;
}

void ModeloNintendo::morir(){
    cout << "\nOcciso x___x\n" << endl;
}

// Getters
string ModeloNintendo::getNombre() {
    return nombre;
}

string ModeloNintendo::getColor() {
    return color;
}

    //Menú
    using namespace std;

    int main() {
        string nombre;
        string color;
        int edad;
        int salud;
        bool esHumano;

        cout << "\nBienvenido al juego de ModeloNintendo" << endl;

        cout << "\nIngrese el nombre del personaje: ";
        cin >> nombre;

        cout << "Ingrese el color del personaje: ";
        cin >> color;

        cout << "Ingrese la edad del personaje: ";
        cin >> edad;

        cout << "Indique el porcentaje de salud del personaje: ";
        cin >> salud;

        cout << "El personaje es humano (1 para sí, 0 para no): ";
        cin >> esHumano;
        if (esHumano == 1){
            cout << "\nEn efecto, en efecto, eres Humano\n";  
        }
        else {
            cout << "\nSepa Dios qué eres\n";
        }

        ModeloNintendo personaje = ModeloNintendo(nombre, color, edad, salud, esHumano);

        int opcion;
        char tecla;

        do {
            cout << "\n--- MENU ---" << endl;
            cout << "1. Saludar" << endl;
            cout << "2. Saltar" << endl;
            cout << "3. Agacharse" << endl;
            cout << "4. Avanzar" << endl;
            cout << "5. Recibir daño" << endl;
            cout << "6. Esquivar" << endl;
            cout << "7. Cambiar nombre" << endl;
            cout << "8. Cambiar color" << endl;
            cout << "9. Salir" << endl;
            cout << "Ingrese una opción: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    personaje.saludar(personaje.getNombre());
                    break;
                case 2:
                    cout << "Presione 'x' para saltar ";
                    cin >> tecla;
                    personaje.saltar(tecla);
                    break;
                case 3:
                    cout << "Presione 'c' para agacharse ";
                    cin >> tecla;
                    personaje.agacharse(tecla);
                    break;
                case 4:
                    cout << "\nIngrese 'w' para moverse hacia adelante";
                    cout << "\nIngrese 's' para moverse hacia atrás";
                    cout << "\nIngrese 'd' para moverse hacia la derecha";
                    cout << "\nIngrese 'a' para moverse hacia la izquierda";
                    cout << " :\n";
                    cin >> tecla;
                    switch (tecla){
                        case 'w':
                            personaje.avanzar(tecla);
                            cout << " hacia adelante\n";
                            break;
                        case 's':
                            personaje.avanzar(tecla);
                            cout << " hacia atrás\n";
                            break;
                        case 'd':
                            personaje.avanzar(tecla);
                            cout << " hacia la derecha\n";
                            break;
                        case 'a':
                            personaje.avanzar(tecla);
                            cout << " hacia la izquierda\n";
                            break;
                    }
                        
                    break;
                case 5:
                    personaje.danio("OUCH!");
                    salud -= 10;
                    cout << "\nSalud actual:\t" << salud <<"'%'";
                    if (salud <= 0)
                    {
                        personaje.morir();
                        exit(0); //si ya no tienes salud te saca del programa
                    }
                    break;
                case 6:
                    personaje.esquivar();
                    break;
                case 7:
                    cout << "Ingrese el nuevo nombre: ";
                    cin >> nombre;
                    personaje.setNombre(nombre);
                    break;
                case 8:
                    cout << "Ingrese el nuevo color: ";
                    cin >> color;
                    personaje.setColor(color);
                    break;
                case 9:
                    cout << "Hasta luego!" << endl;
                    break;
                default:
                    cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
                    break;
            }
        } while (opcion != 9);

        return 0;
}
