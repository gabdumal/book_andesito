# Configuração do Windows Terminal

Nós podemos configurar o **Windows Terminal** para abrir no ambiente MSYS2 CLANG64, como mostrado na [documentação oficial](https://www.msys2.org/docs/terminals/).

Para isso, abra o Windows Terminal e acesse as **configurações**.

![Lista de opções do Windows Terminal, em que se escolhe abrir as configurações.](opening_windows_terminal_settings.png)

Na barra inferior, clique em **Abrir o arquivo JSON**.

![Menu lateral das configurações do Windows Terminal, em que se escolhe a opção de abrir o arquivo de configurações em JSON.](opening_json_settings.png)

Este arquivo define todas as configurações do Windows Terminal.
Nós desejamos adicionar um novo perfil para o MSYS2 Clang64.

Encontre o atributo `"profiles"`.
Ela contém dois atributos internos:

- `"defaults"`: define as configurações padrão para todos os perfis.
- `"list"`: contém a lista de perfis, definida pelos colchetes `[]`.
  Cada perfil dentro deles é um objeto JSON que contém várias configurações, como nome, ícone, fonte, esquema de cores, etc.

![Atributo em que se define as configurações de perfis no arquivo de configurações JSOn do Windows Terminal.](profiles_attribute.png)

Abaixo definimos um novo perfil, chamado `CLANG64 / MSYS2`, que abre o MSYS2 Clang64 no diretório do usuário.
Copie **APENAS** o objeto JSON abaixo e cole dentro do array `"list"`.

```json
{
  "guid": "{07b52e3e-de2c-5db4-bd2d-ba144ed6c273}",
  "name": "CLANG64 / MSYS2",
  "commandline": "C:/msys64/msys2_shell.cmd -defterm -here -no-start -clang64 -shell zsh",
  "icon": "C:\\msys64\\clang64.ico",
  "startingDirectory": "C:/msys64/home/%USERNAME%"
}
```

Salve o arquivo e feche o Windows Terminal.

Agora, abra o Windows Terminal novamente e você verá um novo perfil chamado `CLANG64 / MSYS2`.
Clique nele e você abrirá o MSYS2 Clang64 no diretório do usuário.

Você pode definir este perfil como padrão,.
Acesse as **Configurações** do Windows Terminal, clique em **Inicialização** e, no campo **Perfis padrão**, selecione o perfil `CLANG64 / MSYS2`.

![Definindo perfil criado como o padrão do Windows Terminal.](defining_profile_as_default.png)

Dessa forma, o Windows Terminal abrirá o MSYS2 Clang64 no diretório do usuário toda vez que for iniciado.

Sinta-se à vontade para personalizar o perfil como desejar.

---

> ➡️ [**Próximo capítulo**](/chapters/git/text.md)\
> ⬅️ [**Capítulo anterior**](/chapters/zsh/text.md)\
> 🏠 [**Página inicial**](/README.md)
