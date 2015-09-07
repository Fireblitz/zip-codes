#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define s scanf
#define p printf
main()
{
	int CodigoPostal;/*Codigo postal a introducir*/
	char codpost[5];/*itoa*/
	/*const char token[2] = "|,||"*/
	char *control;
	char x[];
	int i,cpost;/*cpost servira para convertir la cadena de CP a un entero y asi poder buscarlo*/
	FILE *zip;
	struct zipcode
	{
		int CP[5];
		char asentamiento[];
		char tipoasenta[];
		char MPIO[];
		char EDO[];
		char CD[];
		int cod;
		int est;
		int oficina;
		/*int codCP;Dado que la SEPOMEX declara esto como campo nulo, se omitira de la estructura*/
		int numtipacenta;
		int munic;
		int idasent;
		char zona[];
		int claveCD;
	};
	zip=fopen("CPdescarga","r");
	potato;
	p("Ingresa el codigo postal\n");
	/*for(i=0;i<=5;i++){
		s("%s",&codpost);
	}*/
	s(":%i ",&CodigoPostal); /*en caso de no necesitar un string.aplicar itoa o atoi*/
	if(CodigoPostal>=1000||CodigoPostal<=99998){
		itoa(CodigoPostal,codpost,10)
		




	}
	else{
		p("ERROR DE CODIGO POSTAL\n")
		fflush;
		goto potato;
	}




	return 0;
}