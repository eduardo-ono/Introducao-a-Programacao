<h1 align="center">GCC (GNU Compiler Collection)</h1>
<h3 align="center">Prof. Eduardo Ono</h3>
<h5 align="center">Atualizado em: 02/07/2024</h5>

&nbsp;

## Conceitos

```mermaid
graph TD
MAIN(main.c) --> |"Pré-processador (GCC)"| CODE(main.i)
CODE -->|"Compilador (GCC)"| MAIN_ASM(main.s)
MAIN_ASM -->|Assembler| MAIN_OBJ[(main.o)]
MAIN_OBJ --- LINKER(( ))
LINKER -->|Linker| EXE(executável.exe)

SRC(código-fonte.c) -->|"Pré-processador (GCC)"| CODE2(código-fonte.i)
CODE2 -->|"Compilador (GCC)"| CODE_ASM(código-em-assembly.s)
CODE_ASM -->|Assembler| OBJ[(objeto-binário.o)]
OBJ --- LINKER
```

&nbsp;

* Para manter os arquivos intermediários (".i", ".s" e ".o") após a compilação, utilizar o parâmetro `-save-temps`:

  ```PowerShell
  gcc -save-temps main.c -o main
  ```

* Para visualizar todo processo de compilação, utilizar o parâmetro `-v`:

  ```bash
  gcc -v main.c -o main
  ```

&nbsp;

## Linhas de Comando (PowerShell)

* Localizar o arquivo executável do GCC:

```ps
Get-Command gcc.exe
```

```ps
gcm gcc.exe
```

* Exibir a Versão do GCC:

```ps
gcc --version
```

### Compilar programas em C

* Exemplos:

| Comando<img width="300" height="1"> | Descrição <img width="10%" height="1">|
| --- | --- |
| ```gcc main.c``` | Compila o arquivo `main.c` e gera o arquivo executável `a` (Linux) ou `a.exe` (Windows). |
| `gcc -Wall main.c` | Compila o arquivo `main.c` e gera o arquivo executável `a` (Linux) ou `a.exe` (Windows). O parâmetro `-Wall` habilita a exibição de todos os alertas ("warnings") da compilação. |
| `gcc main.c -o main` | Compila o arquivo `main.c` e gera o executável `main` (Linux) ou `main.exe` (Windows). |
| `gcc -Wall -c main.c` | Compila o arquivo `main.c` e gera o arquivo `main.o` (objeto binário). |
| `gcc -Wall -c *.c` | Compila todos os arquivos com extensão ".c" no diretório corrente, gerando os respectivos arquivos ".o" (objetos binários). |

&nbsp;

## Videos de Apoio

| Thumb | Descrição |
| :-: | --- |
| ![img](https://img.youtube.com/vi/kE5Mfgc3Dls/default.jpg) | <sup>[Rodrigo Mello]</sup><br>[__Compilação e Linkagem em Linguagem C__](https://www.youtube.com/watch?v=kE5Mfgc3Dls)<br><sub>(7:00, YouTube, Mar/2015)</sub> |

&nbsp;
