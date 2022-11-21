<h1 align="center">Struct - Conceitos</h1>

<h4 align="center">Prof. Eduardo Ono</h4>

&nbsp;

```c
typedef struct
{
    char nome[50];
    float peso;
    float altura;
    float imc;
} Paciente;
```

### Alocação Estática

```c
Paciente paciente;

strcpy(paciente.nome, "Fulano de Tal");
paciente.peso = 76;
paciente.altura = 1.73;
paciente.imc = paciente.peso / pow(paciente.altura, 2);
```

### Alocação Dinâmica

```c
Paciente *paciente;

paciente = (Paciente *)malloc(sizeof (Paciente));
if (paciente == NULL)
    return 1;

strcpy(paciente->nome, "Fulano de Tal");
paciente->peso = 76;
paciente->altura = 1.73;
paciente->imc = paciente->peso / pow(paciente->altura, 2);
printf("IMC = %.1f\n", paciente->imc);
free(paciente);
```

&nbsp;

## Referências

