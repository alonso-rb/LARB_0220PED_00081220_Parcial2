#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

struct producto
{
    string nombre;
    float precio;
};

struct pedidos
{
    string apellido;
    vector<producto> Comida;
    float totalapagar;
};

queue <pedidos> donas;
queue <pedidos> platofuerte;

float gananciasd=0;
float gananciasp=0;

//Prototipo de función
void agregar();

int main(){
    int opcion;
    bool continuar=true;
    do
    {
       cout<<"Bienvenido a nuestro establecimiento que no es Mister Donut, pero sirve donas y platos. ";
       cout<<"MENÚ DE OPCIONES"<<endl;
       cout<<"Ingrese 1 si desea atender un pedido de cliente "<<endl;
       cout<<"Ingrese 2 si desea calcular la ganacia por ventas de donas "<<endl;
       cout<<"Ingrese 3 si desea obtener la ganancia por venta de platos fuertes "<<endl;
       cout<<"Ingrese 4 para salir "<<endl;
       cin>>opcion;
        switch (opcion)
        {
        case 1: 
           agregar();
            break;
        case 2:
        cout<<"La ganancia de la venta de donas es: "<<gananciasd<<endl;
            break;
        case 3:
            cout<<"La ganancia de la venta de donas es: "<<gananciasp<<endl;
            break;
            case 4:
            continuar=false;
            break;
        default:
        cout<<"Dato no permitido "<<endl;
            break;
        }
    } while (continuar);

}

void agregar(){
    bool continuar;
    int opcion, dona, plato, sabor, cantidad;
    pedidos unPedido;
    producto unProducto;
    float sumaprecio=0;
    unPedido.totalapagar=0;
        cout<<"Ingrese uno si desea atender un pedido de donas "<<endl;
        cout<<"Ingrese dos si desea ateneder un pedido de plato fuerte "<<endl;
        cin>>opcion;
         cin.ignore();
            cout<<"Ingrese su apellido para generar el pedido "<<endl;
            getline(cin, unPedido.apellido);
         do
    {
          switch (opcion)
        {
        case 1:
            cout<<"Ingrese 1 para pedir una dona sencilla "<<endl;
            cout<<"Ingrese 2 para pedir una dona rellena de leche "<<endl;
            cout<<"Ingrese 3 para pedir una dona de sabor especial"<<endl;
            cout<<"Ingrese 4 para terminar de escoger donas "<<endl;
            cin>>dona;
            cout<<"Ingrese la cantidad de donas que llevará "<<endl;
            cin>>cantidad;
            switch (dona)
            {
            case 1:
                for (int i = 0; i < cantidad; i++)
                {
                unProducto.nombre="Dona sencilla";
                unProducto.precio=1.00;
                unPedido.Comida.push_back(unProducto);
                gananciasd=unProducto.precio+gananciasd;
                unPedido.totalapagar=unProducto.precio+unPedido.totalapagar;
                  donas.push(unPedido);
                }
                break;
            case 2:
            for (int i = 0; i < cantidad; i++)
            {
                 unProducto.nombre="Dona rellena de leche";
                unProducto.precio=1.25;
                unPedido.Comida.push_back(unProducto);
                gananciasd=unProducto.precio+gananciasd;
                unPedido.totalapagar=unProducto.precio+unPedido.totalapagar;
                  donas.push(unPedido);
            }
                break;
            case 3:
            for (int i = 0; i < cantidad; i++)
            {
                unProducto.nombre="Dona, sabor especial";
                unProducto.precio=1.50;
                unPedido.Comida.push_back(unProducto);
                gananciasd=unProducto.precio+gananciasd;
                unPedido.totalapagar=unProducto.precio+unPedido.totalapagar;
                  donas.push(unPedido);
            }
                break;
            case 4:
                continuar=false;
                break;
            default:
                cout<<"Dato incorrecto "<<endl;
                break;
            }
            break;
            case 2:
            cout<<"Ingrese 1 para pedir desayuno."<<endl;
            cout<<"Ingrese 2 para pedir almuerzo. "<<endl;
            cout<<"Ingrese 3 para pedir cena."<<endl;
            cout<<"Ingrese 4 para terminar el pedido "<<endl;
            cin>>plato;
            cout<<"Ingrese la cantidad de platos que llevará "<<endl;
            cin>>cantidad;
                switch (plato)
                {
                case 1:
                for (int i = 0; i < cantidad; i++)
                {
                    unProducto.nombre="Desayuno";
                    unProducto.precio=2.50;
                    unPedido.Comida.push_back(unProducto);
                gananciasp=unProducto.precio+gananciasp;
                unPedido.totalapagar=unProducto.precio+unPedido.totalapagar;
                platofuerte.push(unPedido);
                }
                break;
                case 2:
                for (int i = 0; i < cantidad; i++)
                {
                     unProducto.nombre="Almuerzo";
                    unProducto.precio=5.00;
                    unPedido.Comida.push_back(unProducto);
                gananciasp=unProducto.precio+gananciasp;
                unPedido.totalapagar=unProducto.precio+unPedido.totalapagar;
                platofuerte.push(unPedido);
                }
                    break;
                case 3:
                for (int i = 0; i < cantidad; i++)
                {
                    unProducto.nombre="Cena";
                    unProducto.precio=3.50;
                    unPedido.Comida.push_back(unProducto);
                gananciasp=unProducto.precio+gananciasp;
                unPedido.totalapagar=unProducto.precio+unPedido.totalapagar;
                platofuerte.push(unPedido);
                }
                break;
                case 4:
                continuar=false;
                break;
                default:
                    cout<<"Dato no permitido"<<endl;
                    break;
                }
            break;
        default:
        cout<<"Dato no permitido "<<endl;
            break;
        }
        
    } while (continuar);
    
}