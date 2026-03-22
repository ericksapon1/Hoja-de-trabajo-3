#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;

};

Nodo*tope = NULL;

void push (int valor) {
    Nodo* nuevo = new Nodo();
    nuevo-> dato = valor;
    nuevo -> siguiente = tope;
    tope = nuevo;
    cout <<"Elemento " << valor <<"insertado en la fila " << endl;
}

void pop() {
if (tope == NULL) {
cout <<"La pila esta vacia, no se puede eliminar";
    return;
}
Nodo* temp = tope;
cout <<"Elemento eliminado: " << temp -> dato << endl;
tope = tope->siguiente;
delete temp;
}

void peek() {
if (tope ==NULL) {
cout <<"La Pila esta vacia";
return;
}else {
    cout << " Elemento en el tope " << tope-> dato<< endl;
}
}
void mostrar () {
    if (tope==NULL) {
        cout <<"La Pila esta vacia";
        return;
    }
Nodo* actual = tope;
cout <<"Contenido de la pila (tope ->base): ";
while (actual !=NULL) {
cout << actual ->dato << " -> ";
    actual = actual ->siguiente;
}
cout<< "NULL" <<endl;

}

void contarElementos() {
    if (tope=NULL) {
        cout << "La fila esta vacia, hay cero elementos" << endl;
return;
    }
int contador = 0;
    Nodo*actual = tope;
while (actual !=NULL) {
    contador++;
    actual = actual -> siguiente;
}
cout <<" Cantidad de elementos en la pila: " << contador << endl;

}

void buscarElemento (int valorBuscado) {
if (tope ==NULL){
    cout<<"La Pila esta vacia, No se puede buscar." << endl;
return;
}
Nodo* actual = tope;
bool encontrado = false;
int posicion = 1;
    while (actual!= NULL){
if (actual->dato ==valorBuscado){
encontrado =true;
cout <<"Elemento "<<valorBuscado <<" encontrado en la posicion " << posicion << " desde el tope. " << endl;
break;
}
actual = actual-> siguiente;
posicion++;
}
if (!encontrado) {
    cout <<"Elemento1 " <<valorBuscado << " no encontrado en la pila "<< endl;
}
}
void vaciarPila() {
if (tope==NULL) {
Nodo* temp = tope;
    tope = tope->siguiente;
    delete temp;
}
    cout <<"La pila ha sido vaciada" << endl;
}

int main() {
int opcion, valor;

do {

    cout << endl <<"Erick Rolando Sapon Portela" << endl;
    cout << endl << "9941-20-11626" << endl;

    cout << endl << "MENU" << endl;
    cout << "1. Push (Insertar)" << endl;
    cout << "2. Pop (Eliminar)" << endl;
    cout << "3. Peek (Ver tope)" << endl;
    cout << "4. Mostrar pila" << endl;
    cout << "5. Contar elementos" << endl;
    cout << "6. Buscar elemento" << endl;
    cout << "7. Vaciar pila" << endl;
    cout << "8. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;
    switch (opcion) {
        case 1:
            cout << "Ingrese valor: ";
            cin >> valor;
            push(valor);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            mostrar();
            break;
        case 5:
            contarElementos();
            break;
        case 6:
            cout << "Ingrese valor a buscar: ";
            cin >> valor;
            buscarElemento(valor);
            break;
        case 7:
            vaciarPila();
            break;
        case 8:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida." << endl;
    }

} while (opcion != 8);

    return 0;

}