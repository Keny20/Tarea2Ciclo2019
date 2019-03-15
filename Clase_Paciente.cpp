/*Hacer una clase  que me permita
almacenar la info. de los pacientes
en un colsuntorio ls datos a almacenar son
correlativo, nombre, apellido, edad, sexo
peso, enfermedad cronica, tambien la clase debe permitir
mostrar la inf. del paciente y pedir la inf, del paciente
 crear dos objetos de la clase paciente*/
 
#include <iostream> 
#include <windows.h>
#include <stack>

using namespace std ;

/*Creamos la clase Paciente*/
class Paciente {
	private:
		int cor ;   //numero correlativo
		char nom[30]; //nombre
		char ape[30]; //apellido
		int edad ; //edad
		char sexo[2];    //sexo
		int peso; //peso
		char enfeCro [30];   //enfermedad cronica
 /**las funciones a las que el main 
 tndra autorizado acceder*/
	public:
		Paciente () ;  //clase
		~Paciente ();         //destructor de clase
		void Mostrar ();	//mostrar datos
		void Pedir ();      //pedir datos
		
};
/*Llamada de la clase como funcion*/
Paciente::Paciente()
{
	
}	
//destructor de clase
Paciente::~Paciente ()
{
}

/*aqui se ingresan los
datos que se van a querer 
mostrar*/
void Paciente::Mostrar ()
{

	cout << "___________" << endl ;
	cout <<cor <<endl ;
	cout <<nom <<endl ;
	cout <<ape <<endl ;
	cout <<edad <<endl ;
	cout <<sexo <<endl ;
	cout <<peso <<endl ;
	cout <<enfeCro <<endl ;

}
/*en esta funcion nos permitira
el ingreso de dato de los pacientes*/
void Paciente::Pedir()
{

	cout <<"Ingrese numero Correlativo" << endl ;
	cin >> cor;
	cout <<"Ingrese Nombre" << endl ;
	cin >> nom;
	cout <<"Ingrese Apellido" << endl ;
	cin >> ape;
	cout <<"Ingrese Edad" << endl ;
	cin >> edad;
	cout <<"Ingrese Sexo(F/M)" << endl ;
	cin >> sexo;
	cout <<"Ingrese Peso" << endl ;
	cin >> peso;
	cout <<"Ingrese Enfermedad Cronica(Si/No)" << endl ;
	cin >> enfeCro;
	
}	
int main ()
{
	Paciente *p1; //se llama la clase Pacientes y se crea un puntero para el primer paciente
	Paciente *p2;    //se llama la clase Pacientes y se crea un puntero para el segundo paciente
	int opcion ;    //opcion del menu
	
	/*creammos una retornacion al menu para 
	seguir utilizando luego de la
	terminacion de la funcion*/
	do 
	{
		cout << "~~~~~~~~~~***Menu***~~~~~~~~~~~~" << endl ;
		cout <<"1-Pedir Datos" << endl ;
		cout <<"2-Mostrar Datos" << endl ;
		cout <<"3-Salir" << endl ;
		cin >> opcion 	;   //lectura de variable
		system ("cls" ) ; //limpiar
		
		//menu
		switch (opcion)
		{	
			/*caso uno sera para el ingreso de
			los 2 pacientes solicitados*/
			case 1:
					system ("color 70" ) ; //color
					cout <<"Paciente #1" << endl ;
					p1 = new Paciente ();   //el puntero se iguala a una nueva funcion de la clase
					p1->Pedir();    //llamada de funcion
					cout << "__________________" <<endl ;
					system ("cls" ) ; //limpiar
					system ("color 0e" ) ; //color
					cout <<"Paciente #2" << endl ;
					p2 = new Paciente ();    //el puntero se iguala a una nueva funcion de la clase
					p2->Pedir();    //llamada de funcion
					system ("pause");   //pausa
					system ("cls" ) ; //limpiar    

				 break;
				 /*caso dos para la muestra
				 de nueestros dos pacientes*/
			 case 2:
					system ("color b5" ) ; //color
					cout <<"Paciente #1" << endl ;
					p1->Mostrar ();     //llamada de funcion
					cout <<"Paciente #2" << endl ;
					p2->Mostrar ();   //llamada de funcion
					system ("pause"); //pausa
					system ("cls" ) ; //limpiar   
					break;
					
					/*Caso tres para salir*/
			case 3 :
				   return 0 ;
				break;
					
		}
	} while (opcion !=0);
	system ("pause") ;
	return 0;
}
 
 
 
