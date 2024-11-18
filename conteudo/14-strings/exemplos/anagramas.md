<h1 align="center">Introdução à Programação :: Anagramas</h1>
<h3 align="center">Prof. Eduardo Ono</h3>
<h5 align="center">Atualizado em: 25/05/2024</h5>

&nbsp;

## Conceitos

### Definição (Anagrama)

&emsp; &emsp;  Uma palavra A é um __anagrama__ de outra palavra B se podemos transformar a palavra A na palavra B apenas trocando de posição as letras da palavra A.

&emsp; &emsp; __Anagramas__  são palavras ou frases que contém os mesmos algarismos com o mesmo número de cada algarismo. São obtidas apenas pela permutação das letras que constituem uma palavra ou uma frase.

### Exemplos

* estudo e duetos
* bacana e cabana

&nbsp;

## Algoritmos

```c
#include <stdbool.h>
#include <string.h>

bool verificarAnagrama(char *str1, char *str2)
{
    char str[strlen(str2) + 1];
    bool encontrou;

    strcpy(str, str2);
    if (strlen(str1) != strlen(str))
        return false;

    for (int i = 0; i < strlen(str1); i++)
    {
        encontrou = false;
        for (int j = 0; j < strlen(str) && !encontrou; j++)
        {
            if (str[j] == str1[i])
            {
                str[j] = '*';
                encontrou = true;
            }
        }
        if (!encontrou)
            return false;
    }

    return true;
}
```

&nbsp;

## Referências

| Thumb | Descrição |
| --- | --- |
| ![img](https://img.youtube.com/vi/YouTube_video_ID/default.jpg) | <sup>[YouTube_channel]</sup><br>[__Título__](https://www.youtube.com/watch?v=YouTube_video_ID)<br><sub>(hh:mm:ss, YouTube, dd/Mon/yyyy)</sub> |
