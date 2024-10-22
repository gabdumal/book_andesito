# Instalação do Git

O **Git** é um sistema de controle de versão distribuído.
Ele é muito utilizado para controle de versão de código fonte e colaboração em projetos de software.

O Git é focado em sistemas Unix-like.
Para usá-lo no Windows, é necessário instalar uma versão específica chamada, veja só, **Git for Windows**.
Você pode baixar o instalador pelo site [https://gitforwindows.org/](https://gitforwindows.org/).

Execute o instalador e siga as instruções.
Durante a instalação, você pode escolher o diretório de instalação, mas o padrão é `C:\Program Files\Git`.
Quando perguntado sobre o editor de texto padrão, você pode escolher o **Visual Studio Code**, caso o tenha instalado.

Na sessão **Adjusting the name of the initial branch in new repositories**, você pode escolher o nome da branch padrão.
Recomendo selecionar a opção **Override the default branch name for new repositories** e digitar `main`, uma vez que este é o padrão adotado pelo _GitHub_.

Nas próximas sessões, pode manter as opções padrão, até a **Configuring extra options**, em que recomendo marcar também a caixa **Enable symbolic links**.

O Git for Windows configura automaticamente a Path para seu executável.
De todo modo, caso você tenha problemas, você pode adicionar o diretório do executável do Git ao Path, como fizemos com o MSYS2.

Clique em **Editar...** a variável **Path**.
Dessa vez, adicione duas novas entradas a ela: `C:\Program Files\Git\cmd`, e `C:\Program Files\Git\bin\git.exe`.

Para testar se a instalação foi bem-sucedida, abra o PowerShell e execute o comando:

```bash
git --version
```

Se tudo estiver correto, você verá a versão do Git instalada, como `git version 2.46.0.windows.1`, por exemplo.

## MSYS2 e Git

A Path do Git for Windows não é reconhecida por padrão pelo terminal do MSYS2.
Para resolver isso, nós teremos que editar o arquivo de configuração do zsh.
Ele é um arquivo chamado `.zshrc` e fica no diretório do usuário dentro do subsistema MSYS2. Seu caminho é `C:\msys64\home\[username]`.

Essa pasta guardará vários arquivos de configuração de programas que você utilizará no MSYS2.
Caso você encontre algum problema, é possível que a solução esteja em um desses arquivos.

Abra o arquivo `C:\msys64\home\[username]\.zshrc` com um editor de texto qualquer.
Você pode abri-lo com o Bloco de Notas usando o comando:

```bash
notepad ~/.zshrc
```

Adicione a linha abaixo ao arquivo:

```bash
export PATH=$PATH:"/c/Program Files/Git/cmd":"/c/Program Files/Git/bin"
```

![Arquivo .zshrc aberto no Bloco de Notas, tendo adicionado a linha referende ao Git.](opening_zshrc_notepad.png)

Aqui tem um detalhe: o MSYS2, assim como sistemas Unix-like, usa barras normais (`/`) para separar os diretórios.
No Windows, usamos barras invertidas (`\`), como em `C:\Program Files\Git\cmd`.

Além disso, em vez de nomear os discos como `C:`, `D:`, etc., começamos o caminho pelo diretório raiz `/` seguido pela letra do disco em minúsculo.

Salve o arquivo e feche o editor.
**Feche** o terminal atual e abra um novo.
Agora faça o teste do Git novamente.
Se tudo estiver correto, você verá a versão do Git instalada.

O que nós fizemos foi dizer para o shell zsh que ele deve procurar os executáveis do Git nos diretórios `C:\Program Files\Git\cmd` e `C:\Program Files\Git\bin`.
Você pode precisar fazer isso para outros programas que você instalar no MSYS2 no futuro.

---

> ➡️ [**Próximo capítulo**](/chapters/oh_my_zsh/text.md)\
> ⬅️ [**Capítulo anterior**](/chapters/windows_terminal/text.md)\
> 🏠 [**Página inicial**](/README.md)
