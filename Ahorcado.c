#include <stdio.h>
#include <string.h>

int main() {
  char answer[128];
  printf("Escribe la palabra:  ");
  fflush(stdout); //Sirve para almacenar//
  scanf(" %s", answer);
  int N = strlen(answer);
  int mask[N];
  for (int i=0; i < N; ++i) {
    mask[i] = 0;
  }
  int gameover = 0;
  while (! gameover) {
    printf("La palabra es: ");
    for(int j=0; j < N; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");
    char guess;
    printf("Escribe una letra:  ");
    fflush(stdout);
    scanf(" %c", &guess);
    for(int k=0; k < N; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }
    gameover = 1;
    for(int m = 0; m < N; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }
  printf("Ganaste!, la palabra es: \"%s\".\n", answer);

  return 0;
}
