> <h5><a href="https://github.com/eduardo-ono/Introducao-a-Programacao">Introducao à Programacao</a> > Conteúdo</h5>

# Ambiente de Desenvolvimento - Máquina Local

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

  * Executar o instalador. Na primeira tela de execução, __DESABILITAR__ a opção `Check for updated files on the TDM-GCC server`. Continuar a instalação com as opções "default".

<br>

## Microsoft Visual Studio Code (VS Code)

### Instalação e Configuração

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

  * Editar o arquivo `settings.json`. Para acessar o arquivo `settings.json`, teclar <kbd>F1</kbd> no VS Code e selecionar a opção `Preferences: Open Settings (JSON)`. Inserir os comandos a seguir:

  ```json
  "code-runner.executorMap": {
      "c": "cd $dir && gcc -Wall -o $fileNameWithoutExt $fileName && ./$fileNameWithoutExt",
  },
  ```

  * Com essas configurações realizadas, o arquivo de configuração `settings.json` deverá conter os seguintes itens:

  ```json
  {
      "code-runner.preserveFocus": false,
      "code-runner.runInTerminal": true,
      "code-runner.saveFileBeforeRun": true,
      "code-runner.executorMap": {
          "c": "cd $dir && gcc -Wall -o $fileNameWithoutExt $fileName && ./$fileNameWithoutExt",
      },
  }
  ```

  * No VS Code, instalar a extensão [Microsoft] `C/C++`.
  
<br>
