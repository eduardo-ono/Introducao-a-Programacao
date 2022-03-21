> <h5><a href="https://github.com/eduardo-ono/Introducao-a-Programacao">Introducao à Programacao</a> > Conteúdo</h5>

# Ambiente de Desenvolvimento

Prof. Eduardo Ono

<br>

## Compilador TDM-GCC (Windows)

### Download e Instalação (Versão atual)

* Download

  * Fazer o download do arquivo instalador `tdm64-gcc-10.3.0-2.exe` (MinGW-w64 based), ou a versão mais atual, no site oficial:

    * https://jmeubank.github.io/tdm-gcc/


* Instação

    * Executar o instalador e instalar com as opções "default".

### Download e Instalação (Versões antigas do TDM-GCC)

* Download

  * Fazer o download do arquivo instalador (escolha a versão desejada):

    * [`tdm64-gcc-9.2.0.exe`](https://github.com/jmeubank/tdm-gcc/releases/download/v9.2.0-tdm64-1/tdm64-gcc-9.2.0.exe) (2019)<br><sub>SHA256: `8385fdd88e68a4b0401a853a636d24782f9a504bd4e5c61c88e900746efc3854`</sub>

    * [`tdm64-gcc-5.1.0-2.exe`](https://app.box.com/s/dujmht3ld9l3a2zb0wt0uvx8afjedoip) (2015)<br><sub>SHA256: `e2cf5b4bae71356ef97381da352ac8ade7e5f93e61385f36f4baf97c2bc6a16b`</sub>

* Instalação

  * Executar o instalador. Na primeira tela de execução, __desabilitar__ a opção `Check for updated files on the TDM-GCC server`. Continuar a instalação com as opções "default".

### Instalação no Pen Drive

* Após a instalação local do TDM-GCC, copiar o diretório `C:\TDM-GCC-64` para dentro da pasta `Apps` (por exemplo) no Pen Drive.

<br>

## Microsoft Visual Studio Code (VS Code)

### Instalação e Configuração Local

* Instalação

  * Baixar o arquivo instalador no site oficial:

    * https://code.visualstudio.com

  * Instalar com as opções "default".

* Configuração do TDM-GCC

  * No VS Code, instalar a extensão `[Jun Han] Code Runner`.

  * Configurar a extensão `Code Runner`:

    1. Selecionar a extensão `Code Runner`;
    1. Clicar na "engrenagem" e selecionar o item `Extension Settings`;
    1. __Desmarcar__ a opção `Code-runner: Preserve Focus`;
    1. Marcar a opção `Code-runner: Run In Terminal`;
    1. Marcar a opção `Save File Before Run`.

### Instalação e Configuração no Pen Drive

* Instalação

  * Baixar o arquivo .zip (64-bit) no site oficial:

    * https://code.visualstudio.com/#alt-downloads
  
  * Criar um diretório no Pen Drive, por exemplo, `P:\Apps\VSCode`, e descompactar o arquivo .zip baixado dentro do diretório criado. Criar também o diretório `data` dentro do diretório `VSCode`, de modo a se obter o diretório `P:\Apps\VSCode\data`.

* Configuração do TDM-GCC no Pen Drive

  * No VS Code, instalar a extensão `[Jun Han] Code Runner`.

  * Configurar a extensão `Code Runner`:

    1. Selecionar a extensão `Code Runner`;
    1. Clicar na "engrenagem" e selecionar o item `Extension Settings`;
    1. Desmarcar a opção `Code-runner: Preserve Focus`;
    1. Marcar a opção `Code-runner: Run In Terminal`;
    1. Marcar a opção `Save File Before Run`.

  * Supondo que o VS Code esteja instalado no diretório `P:\Apps\VSCode`, adicionar no arquivo `P:\Apps\VSCode\data\user-data\User\settings.json` a configuração a seguir:

    ```json
    "code-runner.executorMap": {
        "c": "cd $dir && $driveLetter\\Apps\\TDM-GCC-64\\bin\\gcc -Wall -o $fileNameWithoutExt $fileName && $dir$fileNameWithoutExt",
    },
    ```

    * Para acessar o arquivo `settings.json`, teclar <kbd>F1</kbd> no VS Code e selecionar a opção `Preferences: Open Settings (JSON)`.

    * No _path_ do GCC, altere o nome do diretório `Apps` conforme o nome escolhido no seu Pen Drive.

    * Com essas configuração realizadas, o arquivo de configuração `settings.json` deverá conter os seguintes itens:

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

### Configurações Adicionais do VS Code (Opcional)

* [Snippets](./vscode/README.md#snippets)

<br>

## Compilando e Executando Programas

* Para compilar e executar um programa no VS Code, clicar na combinação de teclas <kbd>Ctrl</kbd>+<kbd>Alt</kbd>+<kbd>N</kbd>.

<br>

## Gerenciamento de Projetos em C

| Thumb | Descrição |
| :-: | --- |
| [![img](https://img.youtube.com/vi/IUylyTdX_8A/default.jpg)](https://www.youtube.com/watch?v=IUylyTdX_8A) | <sup>[Computer Science]</sup> [__How to Link 2 Source Code Files With C Programming__](https://www.youtube.com/watch?v=IUylyTdX_8A)<br> <sub>(4:00, YouTube, Fev/2018)</sub>

<br>
