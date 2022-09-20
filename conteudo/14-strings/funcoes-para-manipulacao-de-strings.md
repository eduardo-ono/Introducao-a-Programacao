
# Funções para Manipulação de Strings

__Prof. Eduardo Ono__

&nbsp;

## Entrada/Saída

| Função | Descrição | Exemplo |
| --- | --- | --- |
| `<stdio.h> printf()` | | `printf("%s\n", "Ola mundo!");`
| `<string.h> gets()` | Entrada de uma string finalizada por Enter. | `gets(nome_completo)`;
| `<string.h> puts()` | Imprime uma string. | `puts("Fulano de Tal");`

&nbsp;

##

| Função | Descrição | Exemplo |
| --- | --- | --- |
| `<string.h> strlen()` | Retorna o tamanho da string. | `printf("%d\n", strlen("Fulano de Tal"));`
| `<string.h> strcpy()` | faz a cópia de uma string. | `strcpy(str_destino, "Ola mundo!");`
| `<string.h> strcat()` | Concatena duas _strings_. | `strcat(str_destino, "Boa noite!");`
| `<string.h> strcmp()` | Compara duas strings. Retorna -1 ("menor"), 0 ("iguais") ou 1 ("maior"). | `strcmp("banana", "abacaxi");`

### Vídeos de Apoio

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/dT2pq0k9fz0/default.jpg)](https://www.youtube.com/watch?v=dT2pq0k9fz0) | <sup>[Prof. Marcelo Linder]</sup><br>[__Videoaula 38 - Funções para Manipulação de Strings na Linguagem de Programação C - string.h__](https://www.youtube.com/watch?v=dT2pq0k9fz0)<br><sub>(49:04, YouTube, Set/2021)</sub>
| [![img](https://img.youtube.com/vi/WtH7qE8339M/default.jpg)](https://www.youtube.com/watch?v=WtH7qE8339M) | <sup>[Eduardo Casavella]</sup><br>[__Concatenar strings em C - string.h - strcat - strncat__](https://www.youtube.com/watch?v=WtH7qE8339M)<br><sub>(8:09, YouTube, Mai/2019)</sub>

