#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class Cliente {
private:
    int codigo;
    char nombre[30];
    float saldo;

public:
    void capturar();
    void mostrar();
    void buscar();
};

// ------- Método para capturar y guardar un cliente --------
void Cliente::capturar() {
    cout << "\nIngrese código: ";
    cin >> codigo;
    cin.ignore(); // Limpiar buffer

    cout << "Ingrese nombre: ";
    cin.getline(nombre, 30); // ← usar getline para char[]

    cout << "Ingrese saldo: ";
    cin >> saldo;

    // Guardar en archivo binario
    ofstream archivo("cliente.dat", ios::app | ios::binary);
    if (archivo.is_open()) {
        archivo.write((char*)this, sizeof(*this));
        archivo.close();
        cout << "Cliente guardado correctamente.\n";
    } else {
        cout << "Error al abrir archivo para escritura.\n";
    }
}


// ------- Método para mostrar todos los clientes ----------
void Cliente::mostrar() {
    Cliente temp;
    ifstream archivo("cliente.dat", ios::in | ios::binary);
    if (!archivo.is_open()) {
        cout << "\nNo se pudo abrir el archivo.\n";
        return;
    }

    cout << "\n--- LISTA DE CLIENTES ---\n";
    while (archivo.read((char*)&temp, sizeof(temp))) {
        cout << "Código: " << temp.codigo << endl;
        cout << "Nombre: " << temp.nombre << endl;
        cout << "Saldo: " << temp.saldo << endl;
        cout << "-----------------------------\n";
    }
    archivo.close();
}

// ------- Método para buscar cliente por código ----------
void Cliente::buscar() {
    int buscarCodigo;
    bool encontrado = false;
    Cliente temp;

    cout << "\nIngrese el código del cliente a buscar: ";
    cin >> buscarCodigo;

    ifstream archivo("cliente.dat", ios::in | ios::binary);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo.\n";
        return;
    }

    while (archivo.read((char*)&temp, sizeof(temp))) {
        if (temp.codigo == buscarCodigo) {
            cout << "\n--- Cliente Encontrado ---\n";
            cout << "Código: " << temp.codigo << endl;
            cout << "Nombre: " << temp.nombre << endl;
            cout << "Saldo: " << temp.saldo << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Cliente no encontrado.\n";
    }

    archivo.close();
}

// ----------------- MENÚ PRINCIPAL ---------------------
int main() {
    Cliente c;
    int opcion;

    do {
        cout << "\n===== MENÚ CLIENTES =====";
        cout << "\n1. Capturar cliente";
        cout << "\n2. Mostrar todos los clientes";
        cout << "\n3. Buscar cliente por código";
        cout << "\n4. Salir";
        cout << "\nSeleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: c.capturar(); break;
            case 2: c.mostrar(); break;
            case 3: c.buscar(); break;
            case 4: cout << "Saliendo...\n"; break;
            default: cout << "Opción inválida\n"; break;
        }
        system("pause");
        system("cls");
    } while (opcion != 4);

    return 0;
}
