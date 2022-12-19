#include <assert.h>  // assert
#include <ctype.h>   // toupper
#include <stdio.h>   // printf, scanf
#include <stdlib.h>  // rand
#include <unistd.h>  // getpid
#define ubi_mina 1      //señal que se emite cuando pisas mina
#define casilla_buena 2 //señal que se emite cuando no hay mina
#define num_mina  10     //cantidad de minas en el tabla (a)
#define COLUMNAS 8     //num de columnas  (a) numero<10 
#define FILAS 8         //num de filas (a) numero<10 
#define sin_abrir '*'   //simbolo de casillas sin abrir (a)
#define abierto ' '     //simbolo cuando abres casilla
#define MINA 'X'        //simbolo que representa minas (a)

void sembrar_mina(char minas[FILAS][COLUMNAS]) //Minas aleatorias
{
    int x = 0, y = 0;    
    for (int i = 0; i < num_mina; i++)
    {
        x = (rand() % (FILAS - 1));
        y = (rand() % (COLUMNAS - 1));        
        minas[x][y] = MINA;
    }
}
void ubimina(int fila, int columna, char tabla[FILAS][COLUMNAS]) { //Se coloca la mina en la posicion indicada
  tabla[fila][columna] = MINA;
}
int Ubicar_minas(int fila, int columna, char tabla[FILAS][COLUMNAS]) { //Minas que se encuentran cercanas
  int conteo = 0, fila_1, fila_x, columna_1, columna_x;
  if (fila <= 0) 
  {
    fila_1 = 0;
    
  } else 
  {
    fila_1 = fila - 1;
  }
  if (fila + 1 >= FILAS){
    fila_x = FILAS - 1;  
  } else
  {
      fila_x = fila + 1;
  }
  if (columna <= 0) 
  {
    columna_1 = 0;
    
  } else 
  {
    columna_1 = columna - 1;
    
  }
  if (columna + 1 >= COLUMNAS){
    columna_x = COLUMNAS - 1;  
  } else 
  {
     columna_x = columna + 1; 
  }
  for (int m = fila_1; m <= fila_x; m++) {
    for (int l = columna_1; l <= columna_x; l++) {
      if (tabla[m][l] == MINA) 
      {
        conteo++; //aumenta el conteo de minas alrededor de la coordenada ingresada
      }
    }
  }
  return conteo;
}
void plano(char tabla[FILAS][COLUMNAS]) { //llena el plano que aun no se han abierto
  for (int l = 0; l < FILAS; l++) {
    for (int m = 0; m < COLUMNAS; m++) {
      tabla[l][m] = sin_abrir;
    }
  }
}
void espacio_w() {
  printf("[  ]");
  int l;
  for (l = 0; l < COLUMNAS; l++) {
    printf("[ %d ]", l + 1);
  }
  printf("\n");
}
char enteroACaracter(int numero) { //Transforma de int - char
  return numero + '0';
}
void crearplano(char tabla[FILAS][COLUMNAS], int mostrar_minas) {
  espacio_w();
  char letra = 'A';
  for (int l = 0; l < FILAS; l++) {
    printf("[ %c ]", letra);
    letra++;
    for (int m = 0; m < COLUMNAS; m++) { //Para que no se muestre al usuario las minas
      char mango = sin_abrir;
      char verga = tabla[l][m];
      if (verga == MINA) {
        mango = sin_abrir;
      } else if (verga == abierto) {
        int p_mina = Ubicar_minas(l, m, tabla); //Se muestra al usuario las minas
        mango = enteroACaracter(p_mina);
      }
      
      if (verga == MINA && (mostrar_minas)) {
        mango = MINA;
      }
      printf("| %c ", mango);
      if (m + 1 == COLUMNAS) {
        printf("|");
      }
    }
    printf("\n");
  }
}
int descubrir(char filaLetra, int columna, char tabla[FILAS][COLUMNAS]) {
  filaLetra = toupper(filaLetra); //El progrma acepte tanto mayusculas como minusculas.
  columna--;
  int fila = filaLetra - 'A';
  assert(columna < COLUMNAS && columna >= 0);
  assert(fila < FILAS && fila >= 0);
  if (tabla[fila][columna] == MINA) {
    return ubi_mina;
  }
  tabla[fila][columna] = abierto; //Poner el espacio abierto
  return casilla_buena;
}
int ganaste(char tabla[FILAS][COLUMNAS]) { //Funcion para saber si el usuario gano la partida
  for (int l = 0; l < FILAS; l++) {
    for (int m = 0; m < COLUMNAS; m++) {
      char actual = tabla[l][m];
      if (actual == sin_abrir) {
        return 0;
      }
    }
  }
  return 1;
}
int main() { //activar aleatorio de las minas, sembrar minas en la tabla.
    printf("integreantes Ashley Paola Rivas Briceño y Juan José Canche Palmas\n");
  char tabla[FILAS][COLUMNAS];
  int desenterrar = 0;
  srand(getpid());
  plano(tabla);
  sembrar_mina(tabla);
  
  while (1) {  
    crearplano(tabla, desenterrar);
    if (desenterrar) {
      break;
    }
    int columna;
    char fila;
    printf("Ingresa la fila y la columna: ");
    scanf(" %c %d", &fila, &columna);
    int status = descubrir(fila, columna, tabla);
    if (ganaste(tabla)) {
      printf("GANASTE... pero a que costo...\n");
      desenterrar = 1;
    } else if (status == ubi_mina) {
      printf("Perdiste pleb\n");
      desenterrar = 1;
    }
  }
  return 0;
}