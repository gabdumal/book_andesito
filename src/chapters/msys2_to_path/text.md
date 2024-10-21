# Adicionando o MSYS2 à Path

Até então, o Clang está disponível apenas para o terminal do MSYS2.

Entretanto, se o quisermos utilizar em aplicativos do Windows, como o Visual Studio Code, é necessário adicionar o diretório do executável do Clang à Path do Windows.

Para fazer isso, devemos ajustar novamente as variáveis de ambiente do sistema, similar ao que fizemos com o Git.

- Pesquise no menu Iniciar por **Editar as variáveis de ambiente do sistema**.
- Clique em **Variáveis de ambiente**.
- Selecione a variável **Path** na tabela de `Variáveis de usuário para [username]` e clique em **Editar...**.
- Clique em **Novo** e adicione o caminho `C:\msys64\clang64\bin`.
- Clique em **Novo** mais uma vez e adicione o caminho `C:\msys64\usr\bin`.
- Clique em **OK**.

Agora, todos os pacotes que você instalar no ambiente CLANG64 do MSYS2 estarão disponíveis para uso em qualquer aplicativo do Windows.

---

> ➡️ [**Próximo capítulo**](/chapters/c_project_vscode/text.md)\
> ⬅️ [**Capítulo anterior**](/chapters/compiling_c_project/text.md)\
> 🏠 [**Página inicial**](/README.md)
