> Introdução à Programação > Conteúdo

# Primeiro Programa em C

Prof. Eduardo Ono

<br>

##  "Hello World!" ou "Olá Mundo!"

```c
    #include <stdio.h>

    int main()
    {
        printf("Olá mundo!\n");

        return 0;
    }
```

* Saída:

    ```
    Ol? Mundo!
    ```

* Corrigindo o problema da acentuação através de código ASCII:

```c
#include <stdio.h>

int main()
{
    printf("Ol%c mundo!\n", 160);

    return 0;
}
 ```

  * Saída:

  ```
  Olá Mundo!
  ```

<br>

## Vídeos de Apoio

| Thumb | Título |
| --- | --- |
| [![thumb](https://img.youtube.com/vi/dKUfy6itD8k/default.jpg)](https://youtu.be/dKUfy6itD8k) | <sup>[Bóson Treinamentos]</sup> [02 - Programação em linguagem C - Criando o primeiro programa](https://www.youtube.com/watch?v=dKUfy6itD8k&list=PLucm8g_ezqNqzH7SM0XNjsp25AP0MN82R&index=3)<br><sub>(16:05, YouTube, Out/2014)</sub>
| [![Thumb](https://img.youtube.com/vi/8Qm5K0GTD3s/default.jpg)](https://youtu.be/8Qm5K0GTD3s) | <sup>[Papo Binário]</sup> [Programação moderna em C - Aula 1: Funções main() e printf()](https://www.youtube.com/watch?v=8Qm5K0GTD3s)<br><sub>(34:18, YouTube, Mar/2017)</sub>

[Bóson Treinamentos]: https://www.youtube.com/channel/UCzOGJclZQvPVgYZIwERsf5g

<br>
