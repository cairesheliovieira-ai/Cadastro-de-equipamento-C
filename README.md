# Cadastro de Equipamentos em C

Atividade prática individual — Desenvolvimento de Algoritmos e Programação em C (UDF).

Programa de linha de comando para cadastrar e consultar os equipamentos de um laboratório de informática. Os dados ficam salvos no arquivo `equipamentos.txt`.

## Funcionalidades

- **1 – Cadastrar equipamento:** pede nome, código de identificação e localização e grava no arquivo.
- **2 – Listar equipamentos:** lê o arquivo e mostra todos os equipamentos cadastrados.
- **0 – Sair:** encerra o programa.

O arquivo é aberto em modo de acréscimo (`"a"`), então os registros existentes são preservados e cada novo cadastro é gravado no final.

Funções de arquivo utilizadas: `fopen()`, `fprintf()`, `fgets()` e `fclose()`.

## Como compilar e executar

Requisito: compilador GCC.

```bash
gcc equipamentos.c -o equipamentos
./equipamentos        # Linux / macOS
equipamentos.exe      # Windows
```

## Exemplo de `equipamentos.txt`

Cada equipamento fica em uma linha:

```
Nome: Notebook Dell Inspiron | Codigo: EQ-001 | Local: Laboratorio 1
Nome: Projetor Epson | Codigo: EQ-002 | Local: Laboratorio 2
Nome: Roteador TP-Link | Codigo: EQ-003 | Local: Sala de Servidores
```

## Exemplo de uso

```
=== LABORATORIO DE INFORMATICA ===
1 - Cadastrar equipamento
2 - Listar equipamentos
0 - Sair
Escolha uma opcao: 2

--- EQUIPAMENTOS CADASTRADOS ---
1) Nome: Notebook Dell Inspiron | Codigo: EQ-001 | Local: Laboratorio 1
2) Nome: Projetor Epson | Codigo: EQ-002 | Local: Laboratorio 2
3) Nome: Roteador TP-Link | Codigo: EQ-003 | Local: Sala de Servidores
Total: 3 equipamento(s).
```

## Autor

Hélio Junior Vieira Caires — [GitHub](https://github.com/cairesheliovieira)
