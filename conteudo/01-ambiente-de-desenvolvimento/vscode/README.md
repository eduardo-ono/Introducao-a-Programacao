> ##### <a href="https://github.com/eduardo-ono/Introducao-a-Programacao">Introducao à Programacao</a> > Conteúdo > Ambiente de Desenvolvimento

# Configurações Adicionais do VS Code

__Prof. Eduardo Ono__

&nbsp;

## Snippets

* No VS Code, teclar <kbd>F1</kbd> e digitar `snippets`. No menu que irá se abrir, selecionar `Preferences: Configure User Snippets`. No próximo menu, selecionar `c.json (C)`.

* Incluir o seguinte código no final do arquivo `c.json`, mas antes do último `}`:

    ```json
    "C main function": {
        "prefix": "!!main()",
        "body": [
            "#include <stdio.h>",
            "#include <stdbool.h>",
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

### Vídeos de Apoio

| Thumb | Descrição | Tópicos Abordados |
| :-: | --- | --- |
| [![img](https://img.youtube.com/vi/I2G_JqPclgA/default.jpg)](https://www.youtube.com/watch?v=I2G_JqPclgA) | <sup>[Otávio Miranda]</sup><br>[__Criando snippets no VS Code__](https://www.youtube.com/watch?v=I2G_JqPclgA)<br><sub>(7:46, YouTube, Nov/2020)</sub> |  

&nbsp;
