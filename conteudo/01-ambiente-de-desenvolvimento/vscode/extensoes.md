<table>
<tr>
<td align="left" width="8000">
    <small>Introdução à Programação > Conteúdo > Ambiente de Desenvolvimento</small>
</td>
<td align="right">
    <small>Atualizado&nbsp;em:&nbsp;17/04/2022</small>
</td>
</tr>
</table>

<br>

<h1 align="center">
Extensões do VS Code
</h1>
<h4 align="center">
Prof. Eduardo Ono
</h4>

<br>

## Comandos do Terminal

### [edonet] Command Runner

> Executa comandos personalizados no shell.

* `settings.json`:
```json
"command-runner.commands": {
    "Alterar o Path Atual para do Arquivo Ativo": "echo '[Command Runner]'; cd '${fileDirname}'",
    "C: Compilar e Executar o Programa Ativo": "'[Command Runner] Executando {${fileBasename}}...'; ${command:workbench.action.files.save}; cd '${fileDirname}'; gcc -Wall ${fileBasename} -o ${fileBasenameNoExtension}; if ($?) { ./${fileBasenameNoExtension} } else { '[Command Runner] --> ERRO!' }",
    "C: Executar o Programa Ativo": "'[Command Runner] Executando ${fileBasenameNoExtension}'; cd '${fileDirname}'; ./${fileBasenameNoExtension}",
    "C: Compilar o Programa Ativo": "'[Command Runner]'; ${command:workbench.action.files.save}; cd '${fileDirname}'; rm ${fileBasenameNoExtension}.o -ErrorAction Ignore; gcc -Wall -c ./${fileBasename}; if (Get-Item -Path ${fileBasenameNoExtension}.o -ErrorAction Ignore) { ls ${fileBasenameNoExtension}.o -Name }",
    "C: Compilar o Arquivo Selecionado": "'[Command Runner]'; cd '${fileDirname}'; gcc -Wall -c ${selectedText}.c",
    "C: Compilar o Arquivo Selecionado (sem extensão)": "'[Command Runner]'; cd \"${fileDirname}\" ; gcc -Wall -c '${selectedTextList}.c'",
    "C: Build and Run Active File (beta)": "'[Command Runner]'; ${command:workbench.action.files.save} ${command:macro.run}; pause; cd '${fileDirname}'; gcc -Wall -c ${fileBasename}; gcc ${fileBasenameNoExtension}.o ${selectedText}/*.o -o ${fileBasenameNoExtension}; ./${fileBasenameNoExtension}",
    "C (Linux): Compilar e Executar o Programa Ativo": "echo '[Command Runner]' ${command:workbench.action.files.save} && cd ${fileDirname} && gcc -Wall ./${fileBasename} -o ${fileBasenameNoExtension} && ./${fileBasenameNoExtension}",
    "GCC Version": "gcc --version",
  },
```

<br>
