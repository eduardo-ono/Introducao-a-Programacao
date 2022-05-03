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

## Tabela ASCII (American Standard Code for Information Interchange)

* https://theasciicode.com.ar

### Corrigindo o problema da acentuação através de código ASCII:

* O caractere `á` está localizado na posição 160 da tabela ASCII Estendida (8-bit). Para imprimir um caractere da Tabela ASCII, utilizar na string do `printf()` o especificador de formato `%c` onde o caractere deve ser impresso.

* Exemplo:

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
| [![img](https://img.youtube.com/vi/dKUfy6itD8k/default.jpg)](https://www.youtube.com/watch?v=dKUfy6itD8k) | <sup>[Bóson Treinamentos]</sup> [02 - Programação em linguagem C - Criando o primeiro programa](https://www.youtube.com/watch?v=dKUfy6itD8k&list=PLucm8g_ezqNqzH7SM0XNjsp25AP0MN82R&index=3)<br><sub>(16:05, YouTube, Out/2014)</sub>
| [![img](https://img.youtube.com/vi/8Qm5K0GTD3s/default.jpg)](https://www.youtube.com/watch?v=8Qm5K0GTD3s) | <sup>[Papo Binário]</sup> [Programação moderna em C - Aula 1: Funções main() e printf()](https://www.youtube.com/watch?v=8Qm5K0GTD3s)<br><sub>(34:18, YouTube, Mar/2017)</sub>
| [![img](https://img.youtube.com/vi/ZmdUOP5dRDA/default.jpg)](https://www.youtube.com/watch?v=ZmdUOP5dRDA) | <sup>[De aluno para aluno]</sup> [Programar em C - Sequências de Escape - Aula 57](https://www.youtube.com/watch?v=ZmdUOP5dRDA)<br><sub>(8:45, YouTube, Jan/2013)</sub>
| [![img](https://img.youtube.com/vi/F7CwtNLuUgY/default.jpg)](https://www.youtube.com/watch?v=F7CwtNLuUgY) | <sup>[De aluno para aluno]</sup> [Programar em C - Tabela ASCII - Aula 58](https://www.youtube.com/watch?v=F7CwtNLuUgY)<br><sub>(8:11, YouTube, Jan/2013)</sub>

[Bóson Treinamentos]: https://www.youtube.com/channel/UCzOGJclZQvPVgYZIwERsf5g

<br>
