<h1 align="center">
    File Compressor - Huffman
</h1>

<picture>
  <source media="(prefers-color-scheme: dark)" srcset="./.github/cover.png">
  <source media="(prefers-color-scheme: light)" srcset="./.github/cover_light.png">
  <img alt="Huffman module cover" src="/.github/cover_light.png">
</picture>

## 💻 Projeto

Um compactador e descompactador de arquivos com base no Algoritmo de Huffman, desenvolvido como AV2 da disciplina de Estrutura de Dados por discentes do curso de Ciência da Computação.

#### 🧭 Disponível inicialmente para Terminal

<br />

## ✨ Tecnologias

| Backend |
| ------- |
| C       |

<br />

## 🧠 Princípios

1.  Ser capaz de **compactar e descompactar** QUALQUER tipo de arquivo
2.  Todos os Tipos Abstratos de Dados (TADs) devem ser **documentados**
3.  Todas as estruturas de dados devem ser implementadas com `*void`
4.  Toda as estruturas de dados utilizadas no projeto devem possuir **Casos de Testes Unitários**

<br />

## 🔧 Compilação e execução

A fim de facilitar o processo de _compilação_ do código durante a fase de desenvolvimento e testes, tendo em visto o alto grau de modularização do projeto, o repositório faz uso de um arquivo `Makefile`, responsável por lidar com o gerenciamento de dependências nos arquivos `.c`.  
Durante o desenvolvimento com o Visual Studio Code (VSCode), para que o processo de _build_ ocorra corretamente, [baixe a extensão](https://marketplace.visualstudio.com/items?itemName=ms-vscode.makefile-tools) disponibilizada pela Microsoft para esse tipo de arquivo.

<br /

#### Diferença entre arquivos `.c` e `.h`

- .c: arquivo c (onde está a ação real, em geral)

- .h: arquivo de cabeçalho (a ser incluído em uma diretiva #include do pré-processador). Contém coisas que normalmente são compartilhadas com outras partes do código, como protótipos de funções, declarações #define' e assim por diante.

> [!NOTE]  
> Caso queira saber mais sobre como a modularização e arquivos `Makefile` funcionam, visite estes links:
>
> - [Programação modular em C - forcepush.tech](https://forcepush.tech/modular-programming-in-c)
> - ["o que as extensões de arquivo c e h significam para c" - stackoverflow.com](https://stackoverflow.com/questions/1695224/what-do-c-and-h-file-extensions-mean-to-c)

<br />

## 🧪 Testes unitários

Como parte do processo de desenvolvimento, é necessário que todos os módulos e estruturas de dados implementadas possuam testes unitários.  
Os testes unitários são realizados com a biblioteca `CUnit`, capaz de realizar testes unitários para a linguagem C.

Para executar os testes unitários, utilize no terminal:

```
make tests
```

> [!NOTE]
> Para o correto funcionamento dos scripts envolvendo os testes unitários, torna-se necessária a instalação da biblioteca `CUnit` localmente.
> Para a instalação em distribuições Linux baseadas em Debian, é possível utilizar os seguintes comandos:
>
> ```bash
> sudo apt-get update
> sudo apt-get install libcunit1 libcunit1-dev
> ```

<br />

## 👥 Grupo

- [ ] [Eduardo Maciel Alexandre](https://github.com/theduardomaciel)
- [ ] [Eliezir Moreira Peixoto Neto](https://github.com/eliezir)
- [ ] [Lucas Cassiano Maciel dos Santos](https://github.com/lucas7maciel)
- [ ] [Josenilton Ferreira da Silva Junior](https://github.com/914joseph)
- [ ] [Maria Letícia Ventura de Oliveira](https://github.com/letsventura)
