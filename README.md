
# 🔢 IEEE-754 Converter

Conversor de números decimais para representação IEEE-754 (ponto flutuante de 32 bits), criado como projeto acadêmico em C para entender profundamente como números de ponto flutuante são representados na memória.

##

## 📌 Sobre o Projeto

Este projeto tem como objetivo explorar e entender a representação de números em ponto flutuante segundo o padrão IEEE-754.
Ele converte um número decimal em sua representação binária IEEE-754 de 32 bits, incluindo sinal, expoente e mantissa.

##

## 🧠 Tecnologias Utilizadas

🧠 Linguagem C

🔢 Manipulação de bits

🧠 Conceitos de representação numérica em baixo nível

🧪 Entradas e saídas via stdin/printf

##

## 🚀 Funcionalidades

✔ Leitura de um número decimal

✔ Conversão para representação em ponto flutuante IEEE-754 (32 bits)

✔ Exibição detalhada dos campos:

* Sinal

* Expoente

* Mantissa

  ✔ Saída formatada para fácil interpretação

##

## 📥 Como Executar

### Passos

**1 - Clone o repositório:**

```http
git clone https://github.com/Ricardo-Brand/IEEE-754.git
```

**2 - Entre na pasta:**

```http
cd IEEE-754
```

**3 - Compile:**

```http
gcc -o ieee754 main.c
```

**4 - Rode o programa:**

```http
./ieee754
```

**5 - Insira um número decimal quando solicitado.**

##

## 💡 Como Funciona (Resumo Técnico)

O programa:

- Recebe um número decimal

- Interpreta seus bits como ponto flutuante

- Extrai os campos:

  - Sinal (1 bit)

  - Expoente (8 bits)

  - Mantissa (23 bits) 

- Exibe a representação completa em binário

Isso ajuda a compreender como os computadores armazenam números com casas decimais.

##

## 🎓 O que Aprendi com este Projeto

- Representação de ponto flutuante segundo o padrão IEEE-754

- Manipulação de bits em C

- Uso de operações bitwise (<<, >>, &, |)

- Organização de código modular

- Estrutura de dados de baixo nível

Esse projeto liga conceitos teóricos de arquitetura com implementação prática em C.

##

## 📜 Licença

Este projeto está sob a licença MIT.
