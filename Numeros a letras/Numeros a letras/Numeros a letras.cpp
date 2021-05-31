
#include <iostream>
using namespace std;

int main()
{
	int numero; // Se decalra la variable numero en la cual se almacenara el digito deseado.
	double decimal; // Se declara la variable decimal, con el fin de obtener los decimales de numero.

	cout << "Digite un numero entre 1 a 999999999"<<endl; // Digita por pantalla un texto
	cin >> numero >> decimal; // Se guarda lo que digita el usuario.
	double centavos = decimal - numero; // Se efectua una operacion para obtener los decimales que seran centavos.
	int n=0; // Se declara un contador
	
	//Se declaran los strings correspondientes a utilizar para la traduccion del programa.
	string unidades[9] = { "Uno","Dos","Tres","Cuatro","Cinco","Seis","Siete","Ocho","Nueve" };
	string Del10a19[9] = { "Once","Doce","Trece","Catorce","Quince","Dieciseis","Diecisiete","Dieciocho","Diecinueve" };
	string Del20a29[10] = { "Veinte","Veintiuno","Veintidos","Veintitres","Veinticuatro","Veinticinco","Veintiseis","Veintisiete","Veintiocho","Veintinueve" };
	string DecenasGeneral[9] = {"Diez","Veinte","Treinta","Cuarenta","Cincuenta","Sesenta","Setenta","Ochenta","Noventa" };
	string Centenas[9] = { "Cien","Doscientos","Trescientos","Cuatrocientos","Quinientos","Seiscientos","Setecientos","Ochocientos","Nuevecientos" };

	//Inicia los if
	if (numero>=99999999) // Se comprueba si el digito cumple las condiciones.
	{
		cout << Centenas[(numero / 100000000)-1]<< ' '; // Se efectua la operacion de numero entre la cantidad de posiciones que ocupa en ese lugar.
		numero = numero % 100000000; // Se reduce un digito para seguir con la traduccion.
		n++;
	}
	if (numero >= 9999999) // Se comprueba si el digito cumple las condiciones.
	{
		cout << DecenasGeneral[(numero / 10000000) - 1]<<' '; // Se efectua la operacion de numero entre la cantidad de posiciones que ocupa en ese lugar.
		numero = numero % 10000000; // Se reduce un digito para seguir con la traduccion.
		n++;
	}
	if (numero >= 999999) // Se comprueba si el digito cumple las condiciones.
	{
		if (n > 0) { cout << "Y "; }
		cout << unidades[(numero / 1000000) - 1] << " Millones "; // Se efectua la operacion de numero entre la cantidad de posiciones que ocupa en ese lugar.
		numero = numero % 1000000; // Se reduce un digito para seguir con la traduccion.
	}
	n = 0;
	if (numero >= 99999) // Se comprueba si el digito cumple las condiciones.
	{
		cout << Centenas[(numero / 100000) - 1] << ' '; // Se efectua la operacion de numero entre la cantidad de posiciones que ocupa en ese lugar.
		numero = numero % 100000; // Se reduce un digito para seguir con la traduccion.
		n++; // Aumenta el contador.
	}
	if (numero >= 9999) // Se comprueba si el digito cumple las condiciones.
	{
		cout << DecenasGeneral[(numero / 10000) - 1] << ' '; // Se efectua la operacion de numero entre la cantidad de posiciones que ocupa en ese lugar.
		numero = numero % 10000; // Se reduce un digito para seguir con la traduccion.
		n++; // Aumenta el contador.
	}
	if (numero >= 999) // Se comprueba si el digito cumple las condiciones.
	{
		if (n > 0) { cout << "Y "; }
		cout << unidades[(numero / 1000) - 1] << " Mil "; // Se efectua la operacion de numero entre la cantidad de posiciones que ocupa en ese lugar.
		numero = numero % 1000; // Se reduce un digito para seguir con la traduccion.
	}
	if (numero >= 99) // Se comprueba si el digito cumple las condiciones.
	{
		cout << Centenas[(numero / 100) - 1] << ' '; // Se efectua la operacion de numero entre la cantidad de posiciones que ocupa en ese lugar.
		numero = numero % 100; // Se reduce un digito para seguir con la traduccion.
		n++; // Aumenta el contador.
	}
	if (numero >= 9) // Se comprueba si el digito cumple las condiciones.
	{
		cout << DecenasGeneral[(numero / 10) - 1] << ' '; // Se efectua la operacion de numero entre la cantidad de posiciones que ocupa en ese lugar.
		numero = numero % 10; // Se reduce un digito para seguir con la traduccion.
		n++; // Aumenta el contador.
	}
	if (numero >= 0) // Se comprueba si el digito cumple las condiciones.
	{
		if (n > 0) { cout << "Y "; }
		cout << unidades[(numero / 1) - 1] << ' '; // Se efectua la operacion de numero entre la cantidad de posiciones que ocupa en ese lugar.
		
		cout << "Con " << (centavos)*100 << "/100 Centavos.";
	}
	

}
