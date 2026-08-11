
#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

class Libro {
private:
    // Atributos privados -> ENCAPSULACION
    string titulo;
    string autor;
    int anioPublicacion;
    string edicion;
    int cantidadPaginas;

public:
    // Constructor por defecto
    Libro() : anioPublicacion(0), cantidadPaginas(0) {}

    // Constructor con parametros
    Libro(string t, string a, int anio, string ed, int paginas)
        : titulo(t), autor(a), anioPublicacion(anio), edicion(ed), cantidadPaginas(paginas) {}

    // Metodos publicos (setters) para asignar los datos desde fuera de la clase
    void setTitulo(const string& t) { titulo = t; }
    void setAutor(const string& a) { autor = a; }
    void setAnioPublicacion(int anio) { anioPublicacion = anio; }
    void setEdicion(const string& ed) { edicion = ed; }
    void setCantidadPaginas(int paginas) { cantidadPaginas = paginas; }

    // Metodo publico para capturar los datos de un libro por teclado
    void ingresarDatos() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "  Titulo: ";
        getline(cin, titulo);

        cout << "  Autor: ";
        getline(cin, autor);

        cout << "  Anio de publicacion: ";
        cin >> anioPublicacion;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "  Edicion: ";
        getline(cin, edicion);

        cout << "  Cantidad de paginas: ";
        cin >> cantidadPaginas;
    }

    // Metodo publico para mostrar la informacion del libro (ABSTRACCION + ENCAPSULACION)
    void mostrarInformacion() const {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Anio de publicacion: " << anioPublicacion << endl;
        cout << "Edicion: " << edicion << endl;
        cout << "Cantidad de paginas: " << cantidadPaginas << endl;
        cout << "-----------------------------------" << endl;
    }
};

int main() {
    const int CANTIDAD_LIBROS = 5;
    vector<Libro> libros(CANTIDAD_LIBROS);

    cout << "=== REGISTRO DE " << CANTIDAD_LIBROS << " LIBROS ===" << endl << endl;

    // Estructura de control: bucle for para capturar cada libro
    for (int i = 0; i < CANTIDAD_LIBROS; i++) {
        cout << "Libro #" << (i + 1) << ":" << endl;
        libros[i].ingresarDatos();
        cout << endl;
    }

    cout << "=== LISTADO DE LIBROS REGISTRADOS ===" << endl << endl;

    // Estructura de control: bucle for para mostrar cada libro
    for (int i = 0; i < CANTIDAD_LIBROS; i++) {
        cout << "Libro #" << (i + 1) << ":" << endl;
        libros[i].mostrarInformacion();
    }

    return 0;
}