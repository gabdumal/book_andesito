# MSYS2

O **MSYS2** é um ambiente de desenvolvimento que fornece um shell tipo bash, pacotes de software e ferramentas de compilação.

Ele habilita um ambiente Unix-like no Windows.
O Linux é um exemplo de sistema operacional Unix-like, que é muito utilizado para desenvolvimento de software.
Mas perceba que o MSYS2 não é um emulador de Linux, ele apenas oferece um ambiente de desenvolvimento similar ao Linux, que facilita a instalação de ferramentas.

Faça o download do instalador do MSYS2 em [https://www.msys2.org/](https://www.msys2.org/).\
Execute o instalador e siga as instruções.
Durante a instalação, você pode escolher o diretório de instalação, mas o padrão é `C:\msys64`.

## Ambientes de desenvolvimento

O MSYS fornece vários ambientes de desenvolvimento, como explicado pela [documentação oficial](https://www.msys2.org/docs/environments/).
O que vamos usar é o MSYS2 **Clang64**, que é um ambiente de desenvolvimento baseado no Clang e no LLVM.

**Clang** é um compilador C, C++, Objective-C e Objective-C++ de código aberto, que é parte do projeto LLVM. Outro compilador muito conhecido é o _GCC_.
Já **LLVM** é uma infraestrutura de compilador que é usada para construir compiladores para várias linguagens de programação.

No MSYS2, cada ambiente tem suas próprias ferramentas de compilação e bibliotecas.
Ao instalar um pacote voltado para compilação, devemos selecionar sempre aquele que é prefixado com o nome do ambiente que estamos utilizando.

Isto se dá pois o MSYS2 apenas instalará os programas na pasta correspondente ao ambiente selecionado.
Por exemplo, se você instalar o pacote `clang` no ambiente `MSYS2 CLANG64`, ele será instalado em `C:\msys64\clang64`.

Apesar dessa divisão, os pacotes **não vêm** instalados por padrão.
Vamos aprender a fazer isso mais adiante.

## Mintty

Após a instalação, abra o programa **MSYS2 CLANG64**, disponível no menu Iniciar.

Ele abre o emulador de **terminal** padrão do MSYS2, que é o **Mintty**, que é baseado no terminal _xterm_.
Um emulador de terminal é um programa que permite que você interaja com o computador por meio de comandos de texto.

Essa interação é feita por meio de um **shell**, que é um programa que interpreta comandos e executa programas.
O shell padrão do MSYS2 é o **bash**, que é muito popular no Linux.

Dentro do Mintty, nós podemos executar comandos específicos do MSYS2.
Ele é um ambiente **Unix-like**, então muitos comandos são similares aos do Linux.
Por exemplo, para listar os arquivos de um diretório, usamos o comando `ls`.

## Atualização dos pacotes

O MSYS2 disponibiliza um gerenciador de pacotes chamado **pacman**.
Ele é usado para instalar, atualizar e remover pacotes de software.

Primeiramente, vamos atualizar o banco de dados de **pacotes** do MSYS2.
Execute o comando abaixo no terminal Mintty:

```bash
pacman -Syu
```

![Executando comando de atualizar pacotes no terminal Mintty.](running_command_on_mintty.png)

O shell perguntará se você deseja proceder com o processo.
Digite <kbd>Y</kbd> e pressione <kbd>Enter</kbd>.

Ao concluir, ele o pedirá para reiniciar o MSYS2.
Novamente, digite <kbd>Y</kbd> e pressione <kbd>Enter</kbd>.

Abra o MSYS2 CLANG64 novamente.
Agora vamos de fato **baixar** os pacotes atualizados.
Antes, havíamos apenas buscado as informações sobre os pacotes disponíveis.
Digite o comando abaixo:

```bash
pacman -Su
```

Confirme a instalação dos pacotes digitando <kbd>Y</kbd> e pressionando <kbd>Enter</kbd>.

## Estrutura de diretórios

O MSYS2 cria uma pasta no seu disco `C:` chamada `msys64`.
Ela simula um ambiente Unix-like, com diretórios como `/bin`, `/home`, `/usr`, etc.

Além disso, é neste diretório que você encontrará os executáveis de cada ambiente disponibilizado pelo MSYS2.
Lembre-se: estamos utilizando o CLANG64, mas há outros ambientes disponíveis, caso você precise.

O diretório `/home` cria uma pasta para cada usuário do subsistema MSYS2.
Inicialmente, você verá apenas uma pasta dentro dela, que é o seu usuário do Windows.
Vamos nos referir a ele como `[username]`.
Então, o caminho completo para a pasta do seu usuário é `C:\msys64\home\[username]`.

Dentro dessa pasta, ficarão todos os arquivos de configuração do shell e de outros programas que você virá a instalar no MSYS2.

Além disso, todos os arquivos que você queira usar dentro do MSYS2, incluindo projetos que você queira desenvolver, devem ser colocados dentro de `/home/[username]`.

Todas vez que você inicia o MSYS2 CLANG64, ele abre o terminal Mintty no diretório `/home/[username]`.
Por enquanto, há apenas os arquivos de configuração do shell.
Você pode listá-los com o comando `ls --all`.

Para ajudar na organização, vamos criar um diretório chamado `dev` dentro de `/home/[username]`.
Dentro dele, você pode colocar todos os seus projetos de desenvolvimento.

```bash
mkdir ~/dev
```

Esse `~` é um atalho de linha de comando, que representa o caminho até seu diretório `/home/[username]`.
Você pode usá-lo para se referir a este diretório em qualquer lugar do subsistema MSYS2.

Se você listar o conteúdo do diretório novamente, verá que o diretório `dev` foi criado.
O comando `ls` lista o conteúdo de um diretório, e o argumento `--all` (executado como `ls --all`) faz com que ele liste todos os arquivos, incluindo os ocultos.

### Link simbólico

Acessar essa pasta pelo Windows Explorer pode ser um pouco trabalhoso, além de arriscar perder os arquivos caso você venha a desinstalar o MSYS2.

Em vez de criar uma nova pasta dentro do MSYS2, você pode, na verdade, criar uma pasta comum no Windows, e definir um "atalho" para ela dentro do MSYS2, o que é chamado de **link simbólico**.

Primeiramente, vamos apagar a pasta `dev` que criamos dentro do MSYS2.
Execute o comando abaixo no terminal Mintty.
Ele indica que se deve apagar um diretório e todo o seu conteúdo.

```bash
rm -rf ~/dev
```

Agora, vamos criar uma pasta `dev` no Windows.
Eu escolhi criá-la no diretório `C:\Users\[username]`.
Veja, este diretório `C:\Users\` tem uma função similar ao `/home` do MSYS2, pois é onde ficam os arquivos de cada usuário do Windows.
Apesar disso, são duas pastas completamente diferentes, não as confunda.

Vamos lá, crie normalmente, utilizando o Windows Explorer, uma pasta chamada `dev` no diretório `C:\Users\[username]`, ou seja, `C:\Users\[username]\dev`.

Crie dentro dela um arquivo de texto qualquer, para testarmos o link simbólico.
Chamei o meu de `ola_mundo.txt`.

![Conteúdo do arquivo ola_mundo.txt.](ola_mundo_text.png)

Agora, vamos criar o link simbólico.
Para isso, abra o Prompt de comando do Windows, ou seja, o `cmd`.
Não funciona no terminal do MSYS2 nem no PowerShell.

O comando para criar links simbólicos no Windows é `mklink`.
Ele apresenta diferentes tipos de links.
Vamos utilizar um chamado **junction**, que é um link simbólico de diretório, em que mudanças feitas em um diretório são refletidas no outro, e vice-versa.

No **Prompt de comando do Windows**, execute o comando abaixo, substituindo `[username]` pelo nome da sua pasta de usuário do Windows.

```bash
mklink /J C:\msys64\home\[username]\dev C:\Users\[username]\dev
```

Agora, se você listar o conteúdo do diretório `~/dev` no Mintty, verá que o arquivo `ola_mundo.txt` está lá.
Isso significa que o link simbólico foi criado com sucesso.

Você pode fixar a pasta `dev` no Windows Explorer, para que ela fique sempre visível.
Todas as alterações feitas dentro dela serão refletidas no MSYS2, e vice-versa.

---

> ➡️ [**Próximo capítulo**](/chapters/zsh/text.md)\
> ⬅️ [**Capítulo anterior**](/chapters/installing_vscode/text.md)\
> 🏠 [**Página inicial**](/README.md)
