> ##### Introdução à Programação > Conteúdo

# Funções Definidas pelo Usuário

Prof. Eduardo Ono

<br>

## Tópicos

### Função que limpa a tela de saída

```c
void clrscr()
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
```

* Exemplo de uso

```c
#include <stdio.h>
#include <stdlib.h>

// Protótipo da função.
void clrscr();

int main()
{
  clrscr();
  printf("Ola mundo!");

  return 0;
}

void clrscr()
{
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
```

<br>
