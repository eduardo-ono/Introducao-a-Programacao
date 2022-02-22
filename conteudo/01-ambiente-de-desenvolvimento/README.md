> <h5><a href="https://github.com/eduardo-ono/Introducao-a-Programacao">Introducao à Programacao</a> > Conteúdo</h5>

# Ambiente de Desenvolvimento

Prof. Eduardo Ono

<br>

## Compilador TDM-GCC

### Download e Instalação

* Fazer o download do arquivo instalador 'tdm64-gcc-10.3.0-2.exe' ou da versão mais antiga (e mais leve) 'tdm64-gcc-9.2.0.exe'.

* Download da versão atual (site oficial):
  * https://jmeubank.github.io/tdm-gcc/

* Downlaod da versão 9.2.0:
  * https://app.box.com/s/qow9ky3qabzeu16woo7umsk1a1yunv9h

* Versão 10.3.0: Instalar com as opções "default".

* Versão 9.2.0: Desabilitar a opção de busca no servidor por versões mais recentes, na primeira tela do instalador.

### Instalação no Pen Drive

* Após a instalação local, copiar o diretório `TDM-GCC-64` para dentro da pasta `Apps` (por exemplo) no Pen Drive.

<br>

## VS Code (Microsoft Visual Studio Code)

### Instalaçao Local

* Baixar o arquivo instalador na página principal do site. Instalar com as opções "default".

### Instalação no Pen Drive

* Baixar o arquivo .zip (64-bit). Criar uma pasta no Pen Drive, por exemplo, `VSCode`, e descompactar os arquivos dentro deste diretório. Criar também dentro do diretório VSCode o diretório `data`.

### Configuração do TDM-GCC no Pen Drive

* Instalar a extensão 'Code Runner'.

* Supondo que o VS Code esteja instalado no diretório `F:\Apps\VSCode`, atualizar o arquivo `F:\Apps\VSCode\data\user-data\User\settings.json` conforme a configuração a seguir:

  ```json
  "code-runner.executorMap": {
      "c": "cd $dir && $driveLetter\\Apps\\TDM-GCC-64\\bin\\gcc -Wall -o $fileNameWithoutExt $fileName && $dir$fileNameWithoutExt",
  },
  ```

  OBS.: Para acessar o arquivo `settings.json`, teclar <kbd>F1</kbd> e selecionar a opção `Preferences: Open Settings (JSON)`.

<br>

## Manipulação de Projetos em C

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/IUylyTdX_8A/default.jpg)](https://www.youtube.com/watch?v=IUylyTdX_8A) | <sup>[Computer Science]</sup> [__How to Link 2 Source Code Files With C Programming__](https://www.youtube.com/watch?v=IUylyTdX_8A)<br> <sub>(4:00, YouTube, Fev/2018)</sub>

<br>
