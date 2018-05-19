#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//para crear arreglos dinamicos

using namespace std;

//prototipos de funciones
void codigo_tel(char frase[]);
bool comparador(char cadenas[], int num);
void imprimirCodigo(int x, int y);

//variables globales
int tam;
int i;
int j;
int longi;
int buscador = 0;
int cont = 0;
char letra;
bool encontrado = false;

//numeros del teclado
int var0;
int var2;
int var3;
int var4;
int var5;
int var6;
int var7;
int var8;
int var9;

//teclado con letras
	char cero[] = " ";
	char dos[] = "abc";
	char tres[] = "def";
	char cuatro[] = "ghi";
	char cinco[] = "jkl";
	char seis[] = "mno";
	char siete[] = "pqrs";
	char ocho[] = "tuv";
	char nueve[] = "wxyz";

int main(int argc, char **argv)
{
	//frase maxima de 100 caracteres
	char frase[100];

	cout<<"ingrese una frase: ";
	cin.getline(frase, 100, '\n');;

	codigo_tel(frase);

	return 0;
}

void codigo_tel(char frase[])
{
	//obtenemos la longitud de la cadena
	tam = strlen(frase);

	cout<<endl<<"tu frase en codigo de teclado numerico es: "<<endl;

	//recorremos la cadena
	for(i=0; i<tam; i++)
	{
		letra = frase[i];

		while(encontrado == false)
		{
			switch(buscador)
			{
				case 0:
				var0 = 0;
				/*
				*param cero arreglo con las letras de cada tecla
				*param var0 el numero que tiene que imprimir
				*/
				encontrado = comparador(cero, var0);
				break;

				case 2:
				var2 = 2;
				encontrado = comparador(dos, var2);
				break;

				case 3:
				var3 = 3;
				encontrado = comparador(tres, var3);
				break;

				case 4:
				var4 = 4;
				encontrado = comparador(cuatro, var4);
				break;

				case 5:
				var5 = 5;
				encontrado = comparador(cinco, var5);
				break;

				case 6:
				var6 = 6;
				encontrado = comparador(seis, var6);
				break;

				case 7:
				var7 = 7;
				encontrado = comparador(siete, var7);
				break;

				case 8:
				var8 = 8;
				encontrado = comparador(ocho, var8);
				break;

				case 9:
				var9 = 9;
				encontrado = comparador(nueve, var9);
				break;
			}
			cont = 0;
			buscador++;
		}
		encontrado = false;
	}
}

bool comparador(char cadenas[], int num)
{
	longi = strlen(cadenas);

	for(j=0; j<longi; j++)
	{
		cont++;
		if(letra == cadenas[j])
		{
			buscador = -1;//colocamos -1 para que en el switch pueda entrar en el case 0:
			imprimirCodigo(cont, num);
			return true;
		}
	}
	return false;
}

void imprimirCodigo(int cont, int num)
{
	//imprime solo un numero
	for(j=0; j<cont; j++)
	{
		cout<<num;
	}
}
