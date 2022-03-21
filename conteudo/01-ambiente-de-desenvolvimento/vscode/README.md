> ##### <a href="https://github.com/eduardo-ono/Introducao-a-Programacao">Introducao à Programacao</a> > Conteúdo > Ambiente de Desenvolvimento

# Configurações Adicionais do VS Code

Prof. Eduardo Ono

<br>

## Snippets

* No VS Code, teclar <kbd>F1</kbd> e digitar `snippets`. No menu que irá se abrir, selecionar `Preferences: Configure User Snippets`. No próximo menu, selecionar `c.json (C)`.

* Incluir o seguinte código no final do arquivo `c.json`, mas antes do último `}`:

    ```json
    "C main function": {
        "prefix": "!!main()",
        "body": [
            "#include <stdio.h>",
            "${1:#include <stdlib.h>}",
            "",
            "int main()",
            "{",
            "    $0",
            "",
            "    return 0;",
            "}",
        ],
    }
    ```

* Para executar o _snippet_, criar um novo arquivo com extensão `.c` e digitar `!!` seguido da combinação de teclas <kbd>Ctrl</kbd>+<kbd>SPC</kbd>. No menu que irá se abrir, selecionar a opção `!!main()`.

<br>
