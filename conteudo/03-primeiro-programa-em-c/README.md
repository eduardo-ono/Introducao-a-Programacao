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
    Ol# Mundo!
    ```

* Corrigindo o problema da acentuação:

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
| [![Thumb](https://img.youtube.com/vi/8Qm5K0GTD3s/default.jpg)](https://youtu.be/8Qm5K0GTD3s) | <sup>[Papo Binário]</sup> [Programação moderna em C - Aula 1: Funções main() e printf()](https://www.youtube.com/watch?v=8Qm5K0GTD3s)<br><sub>(34:18, YouTube, Mar/2017)</sub>

<br>
