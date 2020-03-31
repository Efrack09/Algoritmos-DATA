#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char palabra[128];
  printf("Escribe la palabra que se adivinara: ");
  fflush(stdout); //Esto función sirve para almacenar//
  scanf(" %s", palabra);

  int N = strlen(palabra);
  int ocultar[N];
  for (int i=0; i < N; ++i) {
    ocultar[i] = 0;
  }
  int gameover = 0;
  while (! gameover) {
    printf("La palabra tiene: ");
    for(int b=0; b < N; ++b) {
      if (ocultar[b]) {
        printf("%c", palabra[b]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");
    char incog;
    printf("¿Letra?: ");
    fflush(stdout); //Almacenamiento// 
    scanf(" %c", &incog);
    for(int a=0; a < N; ++a) {
      if (palabra[a] == incog) {
	ocultar[a] = 1;
      }
    }
    gameover = 1;
    for(int n = 0; n < N; ++n) {
      if (!ocultar[n]) {
        gameover = 0;
        break;
      }
    }
  }
  printf("¡Correcto! La palabra es \"%s\".\n", palabra);

  return 0;
}
