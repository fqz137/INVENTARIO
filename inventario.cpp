/*programa Inventario de dispositivos que hay en la casa y calcula el total de consumo*/
#include<iostream>//Biblioteca estándar de entrada y salida, para utilizar cout y cin
#include<stdlib.h>/*Biblioteca para utilizar system("cls") limpieza de pantalla y system("pause") que detiene la ejecución del programa hasta que el usuario digite una tecla */

#include <string.h>// libreria para utilizar la funcion que compara dos cademas
using namespace std;/*Indica al compilador que utilizará el espacio de nombres estandar para no incluirlos cada vez que se utilice cout y cin */

//Declaro arreglos globales
char dispositivo[30][100];
int cantidad[30];
int n;

//Declaracioon de las funciones
void registrardispositivocantidad();
void listardatos();
void buscar();
//void mostrarexistenciascero();

int main()//Función principal
{ 
do{ system("cmd /c cls");
cout<<" Felipe Quesada Zuñiga"<<endl<<endl;
cout<<"\tDISPOSITIVOS ELECTRICOS Y CONSUMO DE LA CASA"<<endl;
cout<<"MENU"<<endl<<endl;
cout<<" 1. Registrar dispositivos. "<<endl;
cout<<" 2. Ver lista de dispositivos. "<<endl;
cout<<" 3. Consultar consumo mensual de la casa. "<<endl;
cout<<" 4. Salir. "<<endl;
cout<<endl<<endl<<" Por favor elija una de las opciones: "<<endl<<endl;
cin>>opc;
switch(opc)
{
case 1: system("cls");
cout <<endl<<"1. Registrar dispositivos. " <<endl;
registrardispositivocantidad();
system("pause");//Detiene la ejecución del programa hasta que el usuario digite una tecla
break;
case 2: system("cls");
cout<<endl<<"2. Ver lista de dispositivos. "<<endl;
listardatos();
system("pause");//Detiene la ejecución del programa hasta que el usuario digite una tecla
break;
case 3: system("cls");
cout<<endl<<" 3. Consultar consumo mensual de la casa. "<<endl;
//mostrar consumo mensual();
buscar();
//cout<<"\n no hay consumo mensual "<<endl<<endl;
system("pause");//Detiene la ejecución del programa hasta que el usuario digite una tecla
break;
default:
break;
}
}
while(opc!=4);
cout<<endl<<endl;
system("pause");//Detiene la ejecución del programa hasta que el usuario digite una tecla
return 0;
}
/*Funciones*/

void registrardispositivocantidad()//Funcion que permite registrar los dispositivos y su cantidad
{ int i;
int j;
int rta;

system("cls");
//Inicializo los arreglos
cout<<" Por favor escriba la dispositivos que desea ingresar "<<endl<<endl;
cin>>n;
for(i=1;i<n+1;i++)
{
cantidad[i]=0;
for(j=1;j<n+1;j++)
strcpy(dispositivo[i]," ");
}
cout<<endl<<" Registrar dispositivos "<<endl;
for(i=1;i<n+1;i++)
{
cout<<endl<<" digite el dispositivo, presione enter "<<endl<<endl;
cout<<" Articulo "<<i<<" ";
cin>>dispositivo[i];
cout<<endl<<" digite la cantidad de dispositivos "<<endl<<endl;
cout<<" cantidad "<<i<<" ";
cin>>cantidad[i];
rta=strcmp(dispositivo[i-1],dispositivo[i]);//compara las cadenas
if(rta==0)
{cout<<"\n Dispositivo ya existe, por favor ingrese cuantos son \n";
for(i=i;i<n+1;i++)
{
cout<<" Dispositivo "<<i<<" ";
cin>>dispositivo[i];
cout<<endl<<" digite la cantidad de este Dispositivo "<<endl<<endl;
cout<<" cantidad "<<i<<" ";
cin>>cantidad[i];
cout<<endl;

}
}

}

system("pause");
}

void listardatos()//Funcion que muestra los datos ingresados
{ int i;

system("cls");
cout<<endl<<" Listar los datos ingresados "<<endl<<endl;
for(i=1;i<n+1;i++)
{
cout<<" dispositivo "<<i<<" "<<dispositivo[i]<<endl<<" cantidad "<<i<<" "<<cantidad[i]<<endl;
}

}
void buscar( )
{ int i;
//char j='n';
int acum=0;
int valor=0; // Variable para el ciclo

for (i=1;i<n+1;i++)
{
if (valor==cantidad[i])// condicional para encontrar el elemento
{cout<<" los articulos con exitencias en cero "<<i<<" "<<dispositivo[i];
cout<<" cantidad "<<i;
cout<<endl;
}
}

for (i=1;i<n+1;i++)
{
if (valor!=cantidad[i])// condicional para encontrar el elemento
{
// j='s';
acum++;
}
}
if(acum==n)cout<<"\n no hay existencias en cerooooo "<<endl<<endl;
//if(j=='s')cout<<"\n no hay exitencias en cero "<<endl<<endl;
}



    float consumo_en_kilowatts, costo_por_kilowatt, pago;
    cout << "Ingresa el valor de consumo en kilowatts: ";
    cin >> consumo_en_kilowatts;
    cin.get();
    cout << "Ingresa el valor de costo por kilowatt: ";
    cin >> costo_por_kilowatt;
    cin.get();
    pago=consumo_en_kilowatts*costo_por_kilowatt;
    cout << "Valor de pago: " << pago << endl;
    cout << endl;
    system ("pause");

    return 0;
    

    }