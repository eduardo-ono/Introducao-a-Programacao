> <h5><a href="https://github.com/eduardo-ono/Introducao-a-Programacao">Introducao à Programacao</a> > Conteúdo</h5>

# Ambiente de Desenvolvimento

Prof. Eduardo Ono

<br>

## Criação do Ambiente de Desenvolvimento para Programação em Linguagem C

### [Configuração de um Ambiente na Máquina Local](./local.md)

* Compilador: TDM-GCC

* Editor: VS Code

### [Configuração de um Ambiente Portátil (Pen Drive ou unidade externa)](./pen-drive.md)

* Compilador: TDM-GCC portátil

* Editor: VS Code portátil

<br>

## GCC

* [TDM-GCC](./gcc/README.md)

<br>

## Microsoft Visual Studio Code (VS Code)

* [Configurações Básicas](./vscode/settings.md)

* [Teclas de Atalho](https://code.visualstudio.com/shortcuts/keyboard-shortcuts-windows.pdf)

* [Snippets](./vscode/README.md#snippets)

* [Extensões](./vscode/extensoes.md)

* Temas

<br>

## Compilando e Executando Programas em C

* Para compilar e executar um programa no VS Code, clicar na combinação de teclas <kbd>Ctrl</kbd>+<kbd>Alt</kbd>+<kbd>N</kbd>. Requer a extensão `Code Runner` instalada.

* Programa Teste - Deverá imprimir a versão do padrão da linguagem C utilizado pelo copilador (ex.: 201710).

```c
#include <stdio.h>

int main()
{
    printf("%ld\n", __STDC_VERSION__);

    return 0;
}
```

<br>

## Gerenciamento de Projetos em C

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/IUylyTdX_8A/default.jpg)](https://www.youtube.com/watch?v=IUylyTdX_8A) | <sup>[Computer Science]</sup> [__How to Link 2 Source Code Files With C Programming__](https://www.youtube.com/watch?v=IUylyTdX_8A)<br> <sub>(4:00, YouTube, Fev/2018)</sub>
| [![img](https://img.youtube.com/vi/m6RVY84_mQE/default.jpg)](https://www.youtube.com/watch?v=m6RVY84_mQE) | <sup>[Elatronion]</sup> [__How To Compile Your Own C/C++ Library (gcc/mingw)__](https://www.youtube.com/watch?v=m6RVY84_mQE)<br> <sub>(11:40, YouTube, Jul/2020)</sub>

<br>

## Variáveis de Ambiente

* [Variáveis de Ambiente](./variaveis-de-ambiente/README.md)

<br>

## Editor de Fluxogramas

* [Flowgorithm](http://www.flowgorithm.org)

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/OMLer8mGhaw/default.jpg)](https://www.youtube.com/watch?v=OMLer8mGhaw) | <sup>[Programe seu futuro]</sup> [__Como baixar, instalar e testar a ferramenta Flowgorithm para testar seus fluxogramas?__](https://www.youtube.com/watch?v=OMLer8mGhaw)<br> <sub>(24:43, YouTube, Nov/2021)</sub>

<br>

## Vídeos Recomendados

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/6l0uq3rwM2o/default.jpg)](https://www.youtube.com/watch?v=6l0uq3rwM2o) | <sup>[safesrc]</sup> [__Linus Torvalds pretende mudar a linguagem base do Linux__](https://www.youtube.com/watch?v=6l0uq3rwM2o)<br><sub>(7:51, YouTube, Fev/2022)</sub>
