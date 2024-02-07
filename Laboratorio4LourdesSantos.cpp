//laboratorio 4 Condicionales, ciclos y funciones || Lourdes Santos
//Estas bibleotecas o librerias extrema del programa que vamos a escribir, es importante colocarlas para realizar en el programa las operaciones basicas
//Definimos las variables necesarias que vamos a utilizar.
#include <cmath>
#include <iostream> 
using namespace std;
int resultado=0;
int result(int result);
int operaciones(int valor1,int valor2);

int main(){  // se coloca int en el maainpor que va a retornar un valor
int y, valor1, valor2;
cout << "Lab 4 || Lourdes Santos || Programacion 1" << endl;
cout << "Cuantas operaciones deseas realizar: ";
cin>>y;
  for(int x=1;x<=y;x++){ //Coloque un ciclo for para que se ejecute hasta que se cumpla la condición, lo que ocurra primero.
  	cout << "Ingresa el primer valor: ";
  	cin >> valor1;
  	cout << "Ingresa el segundo valor: ";
  	cin >> valor2;
  	operaciones(valor1,valor2);
  	result(resultado);
  }  
 return 0; // Se coloca un retunr 0 por que es una funcion no vacia.
}

int operaciones(int valor1, int valor2){
	int op;
	
	cout << "1. Suma:"<<endl;
	cout << "2. Resta:"<<endl;
	cout << "3. Multiplicacion:"<<endl;
	cout << "4. Division:"<<endl;
	cout << "5. Salir "<< endl;
	cout << "Que operacion deseas realizar: (escoge) ";
	cin>>op;
	switch(op) //Un switch para escoger la opcion que se quiera operar 
	{
		case 1: { 
			resultado= valor1+ valor2;};
			break;
		case 2: {
		 	resultado= valor1- valor2;};
		 break;
		case 3: { 
			resultado= valor1* valor2;};
			break;
		case 4: { 
			resultado= valor1/ valor2;};
			break;
		case 5: {
			exit(EXIT_SUCCESS);	
			break;
		}
	} 
	
return resultado;
}
 
int result(int result){ //funcion para dar el resultado final 
 cout<<"El resultado final es: "<<resultado<<endl;
 return resultado;
}