> <h5><a href="https://github.com/eduardo-ono/Introducao-a-Programacao">Introducao à Programacao</a> > Conteúdo</h5>

# Ambiente de Desenvolvimento

Prof. Eduardo Ono

<br>

## Compilador TDM-GCC

### Download e Instalação

* Fazer o download do arquivo instalador `tdm64-gcc-10.3.0-2.exe` ou da versão mais antiga (e mais leve) `tdm64-gcc-9.2.0.exe`.

* Download da versão mais atual (site oficial):

  * https://jmeubank.github.io/tdm-gcc/

* Downlaod da versão 9.2.0 (antiga):

  * https://app.box.com/s/qow9ky3qabzeu16woo7umsk1a1yunv9h

* Versão 10.3.0: Instalar com as opções "default".

* Versão 9.2.0: Na primeira tela do instalador, desabilitar a opção de busca no servidor por versões mais recentes. Continuar a instalação com as opções "default".

### Instalação no Pen Drive

* Após a instalação local, copiar o diretório `C:\TDM-GCC-64` para dentro da pasta `Apps` (por exemplo) no Pen Drive.

<br>

## Microsoft Visual Studio Code (VS Code)

### Instalação Local

* Baixar o arquivo instalador no site oficial:

  * https://code.visualstudio.com

  * Instalar com as opções "default".

### Instalação no Pen Drive

* Baixar o arquivo .zip (64-bit) no site oficial:

  * https://code.visualstudio.com/#alt-downloads
  
  * Criar um diretório no Pen Drive, por exemplo, `P:\Apps\VSCode`, e descompactar o arquivo .zip dentro do diretório criado. Criar também o diretório `data` dentro do diretório `VSCode`, de modo a obter `P:\Apps\VSCode\data`.

### Configuração do TDM-GCC no Pen Drive

* No VS Code, instalar a extensão [Jun Han] `Code Runner`.

* Configurar a extensão `Code Runner`:

  1. Selecionar a extensão `Code Runner`;
  1. Clicar na "engrenagem" e selecionar o item `Extension Settings`
  1. Desmarcar a opção `Code-runner: Preserve Focus`
  1. Marcar a opção `Code-runner: Run In Terminal`
  1. Marcar a opção `Save File Before Run`

  * Supondo que o VS Code esteja instalado no diretório `P:\Apps\VSCode`, adicionar no arquivo `P:\Apps\VSCode\data\user-data\User\settings.json` a configuração a seguir:

    ```json
    "code-runner.executorMap": {
        "c": "cd $dir && $driveLetter\\Apps\\TDM-GCC-64\\bin\\gcc -Wall -o $fileNameWithoutExt $fileName && $dir$fileNameWithoutExt",
    },
    ```
    OBS.: Para acessar o arquivo `settings.json`, teclar <kbd>F1</kbd> no VS Code e selecionar a opção `Preferences: Open Settings (JSON)`.

  * O arquivo de configuração deverá ficar da seguinte forma:

    ```json
    {
      "code-runner.preserveFocus": false,
      "code-runner.runInTerminal": true,
      "code-runner.saveFileBeforeRun": true,
      "code-runner.executorMap": {
        "c": "cd $dir && $driveLetter\\Apps\\TDM-GCC-64\\bin\\gcc -Wall -o $fileNameWithoutExt $fileName && $dir$fileNameWithoutExt",
      },
    }

    ```

<br>

## Compilando e Executando Programas

* Para compilar e executar um programa no VS Code, clicar na combinação de teclas <kbd>Ctrl</kbd>+<kbd>Alt</kbd>+<kbd>N</kbd>.

<br>

## Manipulação de Projetos em C

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/IUylyTdX_8A/default.jpg)](https://www.youtube.com/watch?v=IUylyTdX_8A) | <sup>[Computer Science]</sup> [__How to Link 2 Source Code Files With C Programming__](https://www.youtube.com/watch?v=IUylyTdX_8A)<br> <sub>(4:00, YouTube, Fev/2018)</sub>

<br>
