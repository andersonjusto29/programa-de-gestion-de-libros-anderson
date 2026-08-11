# programa-de-gestion-de-libros-anderson
# Actividad 8 - Uso de Clases y Objetos

**Materia:** Lógica de Programación
**Profesor:** Gamalier Reyes del Carmen

## Nombre del estudiante y matrícula
- Nombre: Anderson Justo
- Matrícula: 2025-0373

## Descripción breve de lo que hace el programa
El programa define una clase `Libro` que encapsula los atributos título, autor, año de publicación, edición y cantidad de páginas como datos **privados**, con un método público `mostrarInformacion()` para desplegarlos. En la función `main`, se instancian 5 objetos de tipo `Libro`, se capturan sus datos por teclado y luego se muestran todos en pantalla.

## Datos de entrada
Por cada uno de los 5 libros, el usuario ingresa:
- Título
- Autor
- Año de publicación
- Edición
- Cantidad de páginas

## Datos que procesa
El programa almacena la información de cada libro dentro de un objeto `Libro`, protegiendo los atributos como privados y permitiendo su manipulación únicamente a través de los métodos públicos de la clase (setters y el método de mostrar información).

## Datos de salida
El listado completo de los 5 libros registrados, mostrando en pantalla título, autor, año de publicación, edición y cantidad de páginas de cada uno.

## Importancia de la encapsulación en la POO
La encapsulación protege los datos internos de un objeto, evitando que sean modificados directamente desde fuera de la clase de forma descontrolada. Al declarar los atributos como privados y exponer solo métodos públicos, se garantiza que los datos se manejen de manera segura y consistente, se facilita el mantenimiento del código y se oculta la implementación interna, permitiendo cambiarla sin afectar al resto del programa.

## Cómo compilar y ejecutar el programa

**Compilar (usando g++):**
```bash
g++ -o libro libro.cpp
```

**Ejecutar:**
- En Linux/Mac:
```bash
./libro
```
- En Windows:
```bash
libro.exe
```

Luego sigue las instrucciones en pantalla para ingresar los datos de los 5 libros.

## Capturas de pantalla del programa en ejecución
*(Agregar aquí las capturas de pantalla al ejecutar el programa)*
