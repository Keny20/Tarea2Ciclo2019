#include <iostream>
#include <windows.h>
#include <queue>

using namespace std ;

struct  coorde 
{  
	int x;
	int y;
	int z;
};

int main ()
{
	queue<coorde>cola;
	coorde a;
	coorde *p;
	float cont; //contador
	float prox=0;  //promedio en x
  	float proy=0;   //promedio en y
 	float proz=0;   //promedio en z
	int i =0;       //valor en el ciclo
	int opcion ;
	char resp;
	do
	{
		system ("color a9" ) ; //color
		cout << "**************MENU**************"<< endl ;
		cout <<"1-Ingresar" << endl ;
		cout <<"2-Mostrar" << endl ;
		cout <<"3-Promedio" << endl ;
		cout << "4-Salir" << endl ;
		cin >> opcion ;   //lectura de varibale
		
		switch (opcion)
		{
			case 1:
				system ("cls");				
				do
				{
				  cout << "Ingrese el valor de <X>: " ;
				  cin >>  a.x ;
				  cout << "Ingrese el valor de <Y>: " ;
				  cin >>  a.y ;
				  cout << "Ingrese el valor de <Z>: " ;
				  cin >>  a.z ;
				  cola.push (a) ;
				  
				cout<<"Desesa agregar otro dato? y/n"<<endl;
				cin>>resp;       //llamada de variable
				system ( "cls" ) ;      //limpiar	
				
				}while (resp == 'y' || resp == 'Y');			
				system ("cls");

				break;
			case 2 :
					//aqui se muestran las colas disponibles
					system ("color 70" ) ; //color
					system ( "cls" ) ;      //limpiar
					cout << endl;
					/*creaos una condicional
					si la cola esta vacia */
					if(cola.empty() == true)
					{
					//si no tiene datos va a entrar aqui y dira esto
					cout<<"La lista esta vacia..."<<endl;
					}
					/*sino
					nos moestrara en orden los datos
					almacenados*/
					else
					{
						p = &cola.front();//primero hacemos que un puntero apunte al primer dato de la cola
						
						for(int i=1; i<=cola.size(); i++)     //se crea para que automaticamene nos de el numero de dato
						{
							a = *p;     //igualamos aux que es nuestra variable que maneja la pila, a el puntero
							cout<<"Dato #"<<i<<endl;
							cout <<"X"<<i<< ": " << a.x << endl;    
	 						cout <<"Y"<<i<< ": " << a.y << endl ;
							cout <<"Z"<<i<< ": " << a.z<< endl;
							cout << "===============" << endl ;
							p ++ ;         //aumenta
						}
						/*Espacio en memoria
						como las varianles son de 4 bytes y tenemos 3 se hacen 12
						por defecto, este 12, se multiplica por el numero de nodos
						que se valla aagregando*/
						cout <<endl ;
						cout <<"El espacio de memoria utilizaco por el momento es: "    << cola.size()*12 << "-BYTES" << endl << endl;
					}
					
					system ( "pause");   //pausa
					system ( "cls" ) ;      //limpiar
					break;
			
			case 3:

				  	/*ciclo que se crea para ver
					  si la cola esta vacia*/
				  	if(cola.empty())
					  {
					  	cout << "La cola esta vacia" << endl;
					  }
					  /*sino esta vacia
					  entra a la promediacion*/
					  else
					  {
					  	p = &cola.front();   //el puntero se iguala al tama;o de nuestra cola
					  	
					  	/*ciclo para el promedio segun
						  los datos que tengamos*/
					  	for(i=0; i < cola.size(); i++) 
					  {
						prox = prox + p->x;    //el promedio se suma con el puntero de cada uno de los vectores
						proy = proy + p->y;     //el promedio se suma con el puntero de cada uno de los vectores
						proz = proz + p->z;     //el promedio se suma con el puntero de cada uno de los vectores
						p++;												
					  }
						 cout << "El promedio de X es: " <<prox/i << endl;   //el total de promedio se divide con el numero de datos
					  	 cout << "El promedio de y es: " <<proy/i << endl;   //el total de promedio se divide con el numero de datos
					  	 cout << "El promedio de z es: " <<proz/i << endl;    //el total de promedio se divide con el numero de datos
					  	
					  }
						 
					system ( "pause");   //pausa
					system ( "cls" ) ;      //limpiar
					break;
					
					/*caso cuatro salir*/
				case 4 :            
					cout << "Gracias"<< endl ;
					system ("pause");
					return 0;
					break;					
			
		}	
		
	}while  (opcion != 0 ) ;
	system("pause");
	return 0;
}

