#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <cctype> 
#include <cstring>

#define ANSI_BACKGROUND_BLUE "\033[31m"
#define ANSI_BACKGROUND_RESET "\033[0m" 

using namespace std;

int factorar(int val){
	int i,f=1;
	for(i=1;i<=val;i++)
	f*=i;
	return f;
}
double calcularAreaRomboide(double base, double altura) {
    return base * altura;
}

	double operar(float b, float exponente, float resultado){
	 resultado = pow(b, exponente);
	 
	 return resultado; 

	}
	
int valorAbsoluto(int numero) {
    if (numero < 0) {
        return -numero;
    } else {
        return numero;
    }
}
	
float calcularPromedio(float numeros[], int longitud) {
    float suma = 0.0;

    for (int i = 0; i < longitud; i++) {
        suma += numeros[i];
    }

    float promedio = suma / longitud;
    return promedio;
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void calcularEdad(int fechaNacimiento, int fechaActual, int& edadAnios, int& edadMeses, int& edadDias) {
    int anios, meses, dias;

    anios = fechaActual / 10000 - fechaNacimiento / 10000;

    int fechaNacimientoMes = (fechaNacimiento / 100) % 100;
    int fechaActualMes = (fechaActual / 100) % 100;
    meses = fechaActualMes - fechaNacimientoMes;

    int fechaNacimientoDia = fechaNacimiento % 100;
    int fechaActualDia = fechaActual % 100;
    dias = fechaActualDia - fechaNacimientoDia;

    if (meses < 0) {
        anios--;
        meses += 12;
    }
    if (dias < 0) {
        meses--;
        int fechaAnteriorMes = (fechaActualMes - 1 < 1) ? 12 : fechaActualMes - 1;
        int diasMesAnterior;
        switch (fechaAnteriorMes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                diasMesAnterior = 31;
                break;
            case 4: case 6: case 9: case 11:
                diasMesAnterior = 30;
                break;
            case 2:
                int fechaAnteriorAnio = fechaActual / 10000;
                diasMesAnterior = ((fechaAnteriorAnio % 4 == 0 && fechaAnteriorAnio % 100 != 0) || fechaAnteriorAnio % 400 == 0) ? 29 : 28;
                break;
        }
        dias += diasMesAnterior;
    }

    edadAnios = anios;
    edadMeses = meses;
    edadDias = dias;
}

int esPar(int nf) {
    return nf % 2 == 0;
}

int multiplicarPares(int nf) {
    int producto = 1;

    for (int i = 2; i <= nf; i += 2) {
        producto *= i;
    }

    return producto;
}

int multiplicarImpares(int nf) {
    int producto = 1;

    for (int i = 1; i <= nf; i += 2) {
        producto *= i;
    }

    return producto;
}

float aproximacion(float a) {
    float estimado = 0;

    while (estimado * estimado <= a) {
        estimado++;
    }

    return estimado - 1;
}

float proceso(float numr) {
    float division;
    float promedio;
    float repeticion1;
    float repeticion2;
    float estimado = aproximacion(numr);

    division = numr / estimado;
    promedio = (division + estimado) / 2;
    repeticion1 = numr / promedio;
    repeticion2 = (promedio + repeticion1) / 2;
    return repeticion2;
}

double calcular_seno(double x) {
    const double PI = 3.14159265358979323846;
    x = x * PI / 180.0; 
    double seno = 0.0;
    double termino = x;
    int signo = 1;
    for (int i = 1; i <= 10; i++) {
        seno += termino;
        termino *= -(x * x) / ((2 * i) * (2 * i + 1));
        signo *= -1;
    }
    return seno;
}

double calcular_coseno(double x) {
    const double PI = 3.14159265358979323846;
    x = x * PI / 180.0; 
    double coseno = 0.0;
    double termino = 1.0;
    int signo = 1;
    for (int i = 1; i <= 10; i++) {
        coseno += termino;
        termino *= -(x * x) / ((2 * i) * (2 * i - 1));
        signo *= -1;
    }
    return coseno;
}

double calcular_tangente(double x) {
    const double PI = 3.14159265358979323846;
    x = x * PI / 180.0; 
    double tangente = 0.0;
    double seno = 0.0;
    double coseno = 0.0;
    double termino_seno = x;
    double termino_coseno = 1.0;
    int signo = 1;
    for (int i = 1; i <= 10; i++) {
        seno += signo * termino_seno;
        coseno += signo * termino_coseno;
        termino_seno *= -(x * x) / ((2 * i) * (2 * i + 1));
        termino_coseno *= -(x * x) / ((2 * i) * (2 * i - 1));
        signo *= -1;
    }
    tangente = seno / coseno;
    return tangente;
}

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

bool esPerfecto(int numero) {
    int sumaDivisores = 0;

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }

    if (sumaDivisores == numero) {
        return true;
    } else {
        return false;
    }
}

bool esPalindromo(int numero) {
    int numeroReverso = 0;
    int numeroOriginal = numero;

    while (numero > 0) {
        int digito = numero % 10;
        numeroReverso = (numeroReverso * 10) + digito;
        numero /= 10;
    }

    if (numeroOriginal == numeroReverso) {
        return true;
    } else {
        return false;
    }
}

void imprimirInverso(int numero) {
    printf("El inverso de %d es: ", numero);

    if (numero == 0) {
        printf("Infinito\n");
        return;
    }

    if (numero < 0) {
        printf("-");
        numero = -numero;
    }

    int inverso = 0;

    while (numero > 0) {
        int digito = numero % 10;
        inverso = (inverso * 10) + digito;
        numero /= 10;
    }

    printf("%d\n", inverso);
}

int calcularMCM(int num1, int num2) {
    int maximo = (num1 > num2) ? num1 : num2;
    int mcm = maximo;

    while (true) {
        if (mcm % num1 == 0 && mcm % num2 == 0) {
            break;
        }
        mcm += maximo;
    }

    return mcm;
}

int calcularMCD(int num1, int num2) {
    int minimo = (num1 < num2) ? num1 : num2;
    int mcd = 1;

    for (int i = 1; i <= minimo; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i;
        }
    }

    return mcd;
}

int contarVocales(const char* texto) {
    int contador = 0;
    int longitud = strlen(texto);

    for (int i = 0; i < longitud; i++) {
        char c = tolower(texto[i]); 

        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                contador++;
            }
        }
    }

    return contador;
}

int contarConsonantes(const char* texto) {
    int contador = 0;
    int longitud = strlen(texto);

    for (int i = 0; i < longitud; i++) {
        char c = tolower(texto[i]);

        if (isalpha(c)) {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                contador++;
            }
        }
    }

    return contador;
}

float calcularAreaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

float calcularAreaCirculo(float radio) {
    return 3.14159 * radio * radio;
}

double calcularLogaritmo(double numero) {
    return log10(numero);
}

int imprimirNumerosRecursivo(int n) {

    if (n > 0)
    {
        imprimirNumerosRecursivo(n - 1);
        printf("%d ", n);
    }
}
int imprimirNumerosRecursivo(int n);


int coe(int n, int r);
void triangulo(int a);

void triangulo(int a)
{
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a - i - 1; ++j)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; ++j)
        {
            int c = coe(i, j);
            printf("%d ", c);
        }
        printf("\n");
    }
}

int coe(int n, int r)
{
    int coeficiente = 1;
    for (int i = 0; i < r; ++i)
    {
        coeficiente = coeficiente * (n - i);
        coeficiente = coeficiente / (i + 1);
    }
    return coeficiente;
}

void imprimirPiramideRecursiva(int n, int fila = 1)
{
    if (fila > n)
        return;

    for (int i = 1; i <= fila; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    imprimirPiramideRecursiva(n, fila + 1);
}

void encontrarMayor(const int numeros[], int tamano, int& mayor, int& posicion) {
    mayor = numeros[0];
    posicion = 0;

    for (int i = 1; i < tamano; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
            posicion = i;
        }
    }
}
        const int tamano = 5;
        
        
        void encontrarMenor(const int numeros[], int tamano, int& menor, int& posicion) {
    menor = numeros[0];
    posicion = 0;

    for (int i = 1; i < tamano; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
            posicion = i;
        }
    }
}
        const int tamanio = 5;

double calcularPromedio(const int numeros[], int tamano) {
    int suma = 0;

    for (int i = 0; i < tamano; i++) {
        suma += numeros[i];
    }

    return static_cast<double>(suma) / tamano;
}
	const int tamanoo = 5;

int calcularSumaImpares(int n) {
    int suma = 0;

    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }

    return suma;
}
    int sumaImpares = 0;


int calcularSumaPares(int n) {
    int suma = 0;

    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }

    return suma;
}
    int sumaPares = 0;

void mostrarMenu(int opcionActual){
	printf("\t MENU DE OPERACIONES\n\n");

	for(int i=1; i<=34; i++){
		if(i==opcionActual){
			printf("%s", ANSI_BACKGROUND_BLUE);
		}
		else{
			printf("%s", ANSI_BACKGROUND_RESET);
		}
		switch(i){
		case 1:
			printf("Factorial\n");
			break;
		case 2:
			printf("Potencia\n");
			break;
		case 3:
			printf("Valor absoluto\n");
			break;
		case 4:
			printf("Fibonacci\n");
			break;
		case 5:
			printf("Calcular edad\n");
			break;
		case 6:
			printf("Calcular factor doble\n");
			break;
		case 7:
			printf("Calcular valor de pi\n");
			break;
		case 8:
			printf("Calcular la raiz cuadrada\n");
			break;
		case 9:
			printf("Clacular el seno de un numero\n");
			break;
		case 10:
			printf("Calcular el coseno de un numero\n");
			break;
		case 11:
			printf("Calcular la tangente de un numero\n");
			break;
		case 12:
			printf("Saber si un numero es primo\n");
			break;
		case 13:
			printf("Saber si un numero es perfecto\n");
			break;
		case 14:
			printf("Saber si un numero es palindromo\n");
			break;
		case 15:
			printf("Calcular el inverso de un numero\n");
			break;
		case 16:
			printf("Calcular el minimo comun de dos numeros\n");
			break;
		case 17:
			printf("Calcular el maximo comun de dos numeros\n");
			break;
		case 18:
			printf("Calcular el numero de vocales en un texto\n");
			break;
		case 19:
			printf("Calcular el numero de consonantes en un texto\n");
			break;
		case 20:
			printf("Calcular el area de un triangulo\n");
			break;
		case 21:
			printf("Calcular el area de un romboide\n");
			break;
		case 22:
			printf("Calcular el area de un circulo\n");
			break;
		case 23:
			printf("Calcular el logartimo de un numero\n");
			break;
		case 24:
			printf("Calcular KM/GALONES usados en un viaje\n");
			break;
		case 25:
			printf("Imprimir lista de numeros\n");
			break;
		case 26:
			printf("Imprimir triangulo de pascal\n");
			break;
		case 27:
			printf("Imprimir medio triangulo en orden numerico\n");
			break;
		case 28:
			printf("Determinar el numero mayor y su posicion\n");
			break;
		case 29:
			printf("Determinar el numero menor y su posicion\n");
			break;
		case 30:
			printf("Suma los indices impares\n");
			break;
		case 31:
			printf("Suma los indices pares\n");
			break;
		case 32:
			printf("Calcular promedio de 5 numeros\n");
			break; 
		case 33:
			printf("Calcula promedio de cualquier cantidad de numeros\n");
			break;
		case 34:
			printf("Salir%s\n", ANSI_BACKGROUND_RESET);
			break;
		}
	}
}

void regresarMenu(){
	while(true){
		if(_kbhit()){
			int tecla = _getch();
			if(tecla == 27){
				break;
			}
		}
	}
}

int operarMenu(){
	int opcionActual=1, op, resultado, valor;
	
	while(true){
		system("cls");
		mostrarMenu(opcionActual);
		char tecla = _getch();
		switch(tecla){
			case 72:
				opcionActual=(opcionActual > 1)? opcionActual - 1:34;
				break;
			case 80:
				opcionActual=(opcionActual < 34)? opcionActual + 1:1;
				break;
			case 13:
				system("cls");
				switch(opcionActual){
				case 1:
						printf("\t FACTORIAL DE UN NUMERO\n");
						//ingresar funciones aqui
						resultado=factorar(valor);
						printf("\n Ingrese el valor entero para Factorar: ");
						scanf("%d",&valor);
						printf("El Factorial de %d es = %d\n",valor,factorar(valor));
						break;
				case 2:
						printf("\t POTENCIA DE UN NUMERO\n\n");
						//ingresar funciones aqui	
		    			double b, exponente, resultado;
    					printf("Ingrese la base: ");
    					scanf("%lf", &b);
    					printf("Ingrese la potencia a la que desea calcular: ");
    					scanf("%lf", &exponente);
						resultado = operar(b, exponente, resultado);
    					printf("El resultado de %.2lf elevado a %.2lf es: %.2lf\n", b, exponente, resultado);
						break;
				case 3:
						printf("\t VALOR ABSOLUTO\n\n");
						//ingresar funciones aqui
						int r, numero;
						printf("Ingrese el valor a calcular: ");
    					scanf("%d", &numero);
						r = valorAbsoluto(numero);
						printf("El valor absoluto es: %d\n", r);
						break;
				case 4:
						printf("\t FIBONACCI\n\n");
						//ingresar funciones aqui
						int num;
    					printf("Ingrese el numero de terminos que desea calcular: ");
    					scanf("%d", &num);
    					printf("Serie de Fibonacci: ");
    					for (int i = 0; i < num; ++i) {
        				printf("%d ", fibonacci(i));}
						break;
				case 5:
						printf("\t CALCULAR EDAD\n\n");
						//ingresar funciones aqui
						int fechaNacimiento, fechaActual;
    					printf("Ingrese la fecha de nacimiento en formato AAAAMMDD: ");
    					scanf("%d", &fechaNacimiento);
    					printf("Ingrese la fecha actual en formato AAAAMMDD: ");
    					scanf("%d", &fechaActual);
    					int edadAnios, edadMeses, edadDias;
    					calcularEdad(fechaNacimiento, fechaActual, edadAnios, edadMeses, edadDias);
    					printf("Edad: %d anios, %d meses, %d dias.\n", edadAnios, edadMeses, edadDias);
						break;
				case 6:
						printf("\t FACTOR DOBLE\n\n");
						//ingresar funciones aqui
						int nf;
   						printf("Ingrese un numero: ");
    					scanf("%d", &nf);
    					if (esPar(nf)) {
        				int resultado = multiplicarPares(numero);
        				printf("El factor doble de %d es: %d\n", nf, resultado);} 			 
						else {
        				int resultado = multiplicarImpares(nf);
        				printf("El factor doble de %d es: %d\n", nf, resultado);}
						break;
				case 7:
    					printf("\t CALCULAR VALOR DE PI\n\n");
						//ingresar funciones aqui
						int iteraciones;
    		    		double pi;
    					printf("Ingrese el numero de iteraciones para calcular Pi: ");
						scanf("%d", &iteraciones);
    					pi = 3.1415927;
    					printf("El valor aproximado de Pi es: %f\n", pi);
						break;
				case 8:
		    			printf("\t RAIZ CUADRADA\n\n");
						//ingresar funciones aqui
						float numr, repeticion2;
    					printf("Ingrese el valor a calcular: ");
    					scanf("%f", &numr);
    					repeticion2 = proceso(numr);
    					printf("La raiz cuadrada es: %.4f\n", repeticion2);
						break;
				case 9:
						printf("\t SENO\n\n");
						//ingresar funciones aqui
						double angulo3, seno;
                		printf("Ingrese el angulo en grados: ");
                		scanf("%lf", &angulo3);
                		seno = calcular_seno(angulo3);
                		printf("El seno de %.2lf es: %.2lf\n", angulo3, seno);
						break;
				case 10:
		    			printf("\t COSENO\n\n");
						//ingresar funciones aqui
						double angulo2, coseno;
                		printf("Ingrese el angulo en grados: ");
                		scanf("%lf", &angulo2);
                		coseno = calcular_coseno(angulo2);
                		printf("El coseno de %.2lf es: %.2lf\n", angulo2, coseno);
						break;
				case 11:
		            	printf("\t TANGENTE\n\n");
						//ingresar funciones aqui
						double angulo, tangente;
                		printf("Ingrese el angulo en grados: ");
                		scanf("%lf", &angulo);
                		tangente = calcular_tangente(angulo);
                		printf("La tangente de %.2lf es: %.2lf\n", angulo, tangente);
						break;
				case 12:
						printf("\t NUMERO PRIMO\n\n");
						//ingresar funciones aqui
						int numerox;
    					printf("Ingrese un numero: ");
    					scanf("%d", &numerox);
    					if (esPrimo(numerox)) {
     	   				printf("El %d es un numero primo.\n", numerox);
    					} else {
        				printf("El %d no es un numero primo.\n", numerox);}
						break;
				case 13:
						printf("\t NUMERO PERFECTO\n\n");
						//ingresar funciones aqui
						int numerop;
    					printf("Ingrese un numero: ");
 	 					scanf("%d", &numerop);
    					if (esPerfecto(numerop)) {
        				printf("%d es un numero perfecto.\n", numerop);
    					} else {
        				printf("%d no es un numero perfecto.\n", numerop);}
						break;
				case 14:
						printf("\t NUMERO PALINDROMO\n\n");
						//ingresar funciones aqui
						int numeroz;
    					printf("Ingrese un numero: ");
    					scanf("%d", &numeroz);
    					if (esPalindromo(numeroz)) {
        				printf("%d es un numero palindromo.\n", numeroz);
    					} else {
        				printf("%d no es un numero palindromo.\n", numeroz);}
						break;
				case 15:
						printf("\t INVERSO\n\n");
						//ingresar funciones aqui
						int numeroi;
    					printf("Ingrese un numero: ");
    					scanf("%d", &numeroi);
    					imprimirInverso(numeroi);
						break;
				case 16:
						printf("\t MINIMO COMUN MULTIPLO\n\n");
						//ingresar funciones aqui
						int numeroS, numeroD, mcm;
    					printf("Ingrese el primer numero: ");
    					scanf("%d", &numeroS);
    					printf("Ingrese el segundo numero: ");
    					scanf("%d", &numeroD);
    					mcm = calcularMCM(numeroS, numeroD);
    					printf("El minimo comun multiplo (MCM) es: %d\n", calcularMCM(numeroS, numeroD));
						break;
				case 17:
						printf("\t MAXIMO COMUN DIVISOR\n");
						//ingresar funciones aqui
						int numero1, numero2, mcd;
    					printf("Ingrese el primer numero: ");
    					scanf("%d", &numero1);
    					printf("Ingrese el segundo numero: ");
    					scanf("%d", &numero2);
    					mcd = calcularMCD(numero1, numero2);
    					printf("El maximo comun divisor (MCD) es: %d\n", calcularMCD(numero1, numero2));
						break;
				case 18:
						printf("\t NUMERO DE VOCALES EN UN TEXTO\n\n");
						//ingresar funciones aqui
						int longitudTexto, numVocales;
						int MAX_PALABRAS, MAX_CARACTERES;
						char texto[100];
						MAX_PALABRAS = 100;
						MAX_CARACTERES = 100;
    					texto[MAX_PALABRAS * MAX_CARACTERES];
    					printf("Ingrese un texto (maximo 100 palabras):\n");
    					scanf("%d",MAX_PALABRAS, MAX_CARACTERES);
    					fgets(texto, sizeof(texto), stdin);
    					longitudTexto = strlen(texto);
    					if (texto[longitudTexto - 1] == '\n') {
     					texto[longitudTexto - 1] = '\0';}
    					numVocales = contarVocales(texto);
    					printf("El numero de vocales en el texto es: %d\n\n", numVocales);
						break;
				case 19:
						printf("\t NUMERO DE CONSONANTES EN UN TEXTO\n\n");
						//ingresar funciones aqui
						int longitudTexto2, numConsonantes2;
						int MAX_PALABRAS2, MAX_CARACTERES2;
						MAX_PALABRAS2 = 100;
    					MAX_CARACTERES2 = 100;
    					char texto2[100];
    					texto[MAX_PALABRAS2 * MAX_CARACTERES2];
    					printf("Ingrese un texto (maximo 100 palabras):\n");
    					scanf("%d", MAX_PALABRAS2, MAX_CARACTERES2);
    					fgets(texto2, sizeof(texto2), stdin);
    					longitudTexto2 = strlen(texto);
    					if (texto[longitudTexto2 - 1] == '\n') {
        				texto[longitudTexto2 - 1] = '\0';}
    					numConsonantes2 = contarConsonantes(texto2);
    					printf("El numero de consonantes en el texto es: %d\n", numConsonantes2);
						break;
				case 20:
						printf("\t AREA DE UN TRIANGULO\n\n");
						//ingresar funciones aqui
						float base1, altura1, area1;
    					printf("Ingrese la base del triangulo: ");
    					scanf("%f", &base1);
    					printf("Ingrese la altura del triangulo: ");
    					scanf("%f", &altura1);
    					area1 = calcularAreaTriangulo(base1, altura1);
    					printf("El area del triangulo es: %.2f\n", area1);
						break;
				case 21:
						printf("\t AREA DE UN ROMBOIDE\n\n");
						//ingresar funciones aqui
						double area, base, altura;
    					printf("Ingrese la base del romboide: ");
    					scanf("%lf", &base);
    					printf("Ingrese la altura del romboide: ");
    					scanf("%lf", &altura);
    					area = calcularAreaRomboide(base, altura);
    					printf("\nEl area del romboide es: %.2lf\n", area);
						break;
				case 22:
		    			printf("\t AERA DE UN CIRCULO\n\n");
						//ingresar funciones aqui
						float radio, area2;
   						printf("Ingrese el radio del circulo: ");
    					scanf("%f", &radio);
    					area2 = calcularAreaCirculo(radio);
    					printf("El area del circulo es: %.2f\n", area2);
						break;
				case 23:
		    			printf("\t CALCULAR EL LOGARITMO DE UN NUMERO\n\n");
						//ingresar funciones aqui
						double numero3, logaritmo;
    					printf("Ingrese un numero: ");
    					scanf("%lf", &numero3);
    					logaritmo = calcularLogaritmo(numero3);
						printf("El logaritmo de %.2f es: %.2f\n", numero3, logaritmo);
						break;
				case 24:
					printf("\t KILOMETROS SOBRE GALONES USADOS\n\n");
						//ingresar funciones aqui
						float a, b1, division;
						printf("Ingrese los galones usados: ");
						scanf("%f", &a);
						printf("Ingrese los Kilometros conducidos: ");
						scanf("%f", &b1);
						division = b1/a;
						printf("Los Km/Galon para este tanque fueron: %f\n", division);
						break;
				case 25:
					printf("\t LISTA DE NUMEROS\n\n");
						//ingresar funciones aqui
						int n;
						printf("Ingrese el valor de numeros: ");
						scanf("%d", &n);
						printf("Los numeros son: " );
						imprimirNumerosRecursivo(n);
						break;
				case 26:
						printf("\t TRIANGULO DE PASCAL\n\n");
						//ingresar funciones aqui
						int a1;
						printf("Ingrese la altura del Triangulo de Pascal: ");
						scanf("%d", &a1);
						triangulo(a1);
						break;
				case 27:
						printf("\t MEDIO TRIANGULO EN ORDEN NUMERICO\n\n");
						//ingresar funciones aqui
						int numeroy;
						printf("Ingrese un numero: ");
						scanf("%d", &numeroy);
						printf("");
						imprimirPiramideRecursiva(numeroy);
						break;
				case 28:
					printf("\t NUMERO MAYOR Y SU POSICION\n\n");
						//ingresar funciones aqui
						int numerosy[tamano];
						printf("Ingrese %d numeros:\n", tamano);
						for(int i = 0; i < tamano; i++){
						scanf("%d", &numerosy[i]);}
						int mayor, posicion;
						encontrarMayor(numerosy, tamano, mayor, posicion);
						printf("El numero mayor es %d y se encuentra en la posicion %d.\n", mayor, posicion);
						break;
				case 29:
						printf("\t NUMERO MENOR Y SU POSICION\n\n");
						//ingresar funciones aqui
						int numeros1[tamanio];
						printf("Ingrese %d numeros:\n", tamanio);
						for(int i = 0; i < tamanio; i++){
						scanf("%d", &numeros1[i]);}
						int menor, posicion2;
						encontrarMenor(numeros1, tamanio, menor, posicion2);
						printf("El numero menor es %d y se encuentra en la posicion %d.\n", menor, posicion2);
						break;
				case 30:
						printf("\t SUMA DE INDICES IMPARES\n\n");
						//ingresar funciones aqui
						int numerof;
						printf("Ingrese un numero: ");
						scanf("%d", &numerof);
						if(numerof > 0){
						sumaImpares = calcularSumaImpares(numerof);}
						printf("La suma de los impares del 1 al %d es: %d\n", numerof, sumaImpares);
						break;
				case 31:
						printf("\t SUMA DE INDICES PARES\n\n");
						//ingresar funciones aqui
						int numerog;
						printf("Ingrese un numero: ");
						scanf("%d", &numerog);
						if(numerog > 0){
						sumaPares = calcularSumaPares(numerog);}
						printf("La suma de los pares del 1 al %d es: %d\n", numerog, sumaPares);
						break;
				case 32:
						printf("\t CALCULAR PROMEDIO DE 5 NUMEROS\n\n");
						//ingresar funciones aqui
						int numeros2[tamanoo];
						printf("Ingrese %d números:\n", tamanoo);
						for(int i = 0; i < tamanoo; i++){
						scanf("%d", &numeros2[i]);}
						double promedio;
						promedio = calcularPromedio(numeros2, tamanoo);
						printf("El promedio es: %.2f\n", promedio);
						break;
				case 33:
						printf("\t PROMEDIO DE CUALQUIER CANTIDAD DE NUMEROS\n\n");
						//ingresar funciones aqui
						int cantidadNumeros;
						float promedio1;
						float* numeros;
						printf("Ingrese la cantidad de numeros que desea calcular: ");
						scanf("%d", &cantidadNumeros);
						numeros = new float[cantidadNumeros];
						printf("Ingrese los numeros a calcular:\n");
						for(int i = 0; i < cantidadNumeros; i++){
						printf("Numero %d: ", i + 1);
						scanf("%f", &numeros[i]);}
						promedio1 = calcularPromedio(numeros, cantidadNumeros);
						printf("El promedio de los numeros ingresados es: %.2f\n", promedio1);
						delete[] numeros;
						break;
				case 34:
						printf("\t BAY BAY QUE LE VAYA BIEN     ¦¦¦¦  ¦¦¦¦      \n				    ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    \n				      ¦¦¦¦¦¦¦¦¦¦     \n				        ¦¦¦¦¦¦       \n				          ¦¦   \n");
						//ingresar funciones aqui
						return 0;
				}
				_getch();
				regresarMenu();
				break;
		}
	}
	return 0;
}

int main(){
	operarMenu();
	return 0;
}

