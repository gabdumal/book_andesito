# Compilando um projeto em C

Disponibilizamos, na pasta `/code` deste repositório, um projetos em C e C++ que você pode utilizar para testar a compilação de código com vários arquivos separados.

Retorne ao diretório `~/dev` e crie um diretório chamado `separate_function`.
Acesse-o e abra o Visual Studio Code com o comando `code .`.

No VsCode, crie um arquivo chamado `main.c` e adicione o código abaixo:

```c
#include <stdio.h>

int sum(int a, int b);

int main() {
    int a = 5, b = 7;
    int result = sum(a, b);
    printf("The sum of %d and %d is %d.\n", a, b, result);
    return 0;
}
```

Crie um arquivo chamado `functions.c` e adicione o código abaixo:

```c
int sum(int a, int b) {
    return a + b;
}
```

A função principal `main` chama a função `sum`, que está definida em outro arquivo.
Então, para fazer a compilação, precisamos passar os dois arquivos para o compilador.
Internamente, o compilador fará a compilação de cada arquivo separadamente e, em seguida, fará a ligação entre eles.

Para compilar o projeto, execute o comando abaixo no terminal do MSYS2.
Perceba que você pode definir o nome do arquivo de saída com a opção `-o` antes dos arquivos de entrada.

```bash
clang main.c functions.c -o separate_function
```

Então, execute o programa com `./separate_function`.

![Comandos executados no terminal do MSYS2 para compilar e executar um projeto em C com múltiplos arquivos.](compiling_and_running_separate_function_project.png)

---

> ➡️ [**Próximo capítulo**](/chapters/msys2_to_path/text.md)\
> ⬅️ [**Capítulo anterior**](/chapters/vscode_to_path/text.md)\
> 🏠 [**Página inicial**](/README.md)
