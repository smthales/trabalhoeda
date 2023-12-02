#include <stdio.h>
#include <stdlib.h>

typedef struct chavePrimaria {

  char tituloFilme[82];
  int anoLancamentoFilme;

} TCP;

typedef struct informacaoSubordinada {

  char nomeDiretor[52];
  char genero[32];
  int duracaoMinutos;

} TIS;

typedef struct arvb {

  struct chavePrimaria **chavesPrimarias;
  struct informacaoSubordinada **informacoesSubordinadas;
  struct arvb **filho;
  int folha, nchaves;  
  
} TARVB;

int main(void) {
  printf("Hello World\n");
  printf("ola");
  return 0;
}