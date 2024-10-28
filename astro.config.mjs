// @ts-check
import { defineConfig } from "astro/config";
import starlight from "@astrojs/starlight";

// https://astro.build/config
export default defineConfig({
  site: "https://gabdumal.github.io",
  base: "book_dev_env",
  integrations: [
    starlight({
      defaultLocale: "root",
      locales: {
        root: {
          label: "Português",
          lang: "pt",
        },
      },
      title: "Ambiente de desenvolvimento",
      description: "Guia de configuração de ambiente de desenvolvimento.",
      social: {
        github: "https://github.com/gabdumal/book_dev_env",
      },
      sidebar: [
        {
          label: "Introdução",
          slug: "introduction",
        },
        {
          label: "WSL",
          slug: "wsl",
        },
        {
          label: "VSCode",
          slug: "vscode",
        },
        {
          label: "Terminal",
          items: [
            {
              label: "Introdução",
              slug: "terminal",
            },
            {
              label: "GNOME Terminal",
              slug: "terminal/gnome",
            },
            {
              label: "Windows Terminal",
              slug: "terminal/windows",
            },
          ],
        },
        {
          label: "Git",
          slug: "git",
        },
        {
          label: "Shell",
          items: [
            { label: "Introdução", slug: "shell" },
            { label: "PowerShell", slug: "shell/powershell" },
            { label: "Zsh", slug: "shell/zsh" },
            { label: "Temas", slug: "shell/themes" },
            { label: "Plugins", slug: "shell/plugins" },
          ],
        },
        {
          label: "Python",
          items: [
            { label: "Introdução", slug: "python" },
            { label: "Instalação", slug: "python/install" },
            { label: "Executando", slug: "python/run" },
            { label: "Ambientes virtuais", slug: "python/venv" },
          ],
        },
        {
          label: "C e C++",
          items: [
            { label: "Introdução", slug: "c_cpp" },
            { label: "Compilador", slug: "c_cpp/compiler" },
            { label: "Depurador", slug: "c_cpp/debugger" },
            {
              label: "CMake",
              items: [
                {
                  label: "Introdução",
                  slug: "c_cpp/cmake",
                },
                {
                  label: "Instalação",
                  slug: "c_cpp/cmake/install",
                },
              ],
            },
          ],
        },
        {
          label: "JavaScript",
          slug: "javascript",
        },
        {
          label: "Java",
          slug: "java",
        },
        {
          label: "Rust",
          slug: "rust",
        },
        {
          label: "Go",
          slug: "go",
        },
        {
          label: "Ruby",
          slug: "ruby",
        },
      ],
    }),
  ],
});
