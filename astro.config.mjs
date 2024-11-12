// @ts-check
import react from "@astrojs/react";
import starlight from "@astrojs/starlight";
import tailwind from "@astrojs/tailwind";
import { defineConfig } from "astro/config";

// https://astro.build/config
export default defineConfig({
  base: "book_andesito/",
  integrations: [
    starlight({
      customCss: ["./src/tailwind.css"],
      defaultLocale: "root",
      description: "Guia de configuração de ambiente de desenvolvimento.",
      locales: {
        root: {
          label: "Português",
          lang: "pt",
        },
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
          label: "Terminal",
        },
        {
          label: "Git",
          slug: "git",
        },
        {
          items: [
            { label: "Introdução", slug: "shell" },
            { label: "PowerShell", slug: "shell/powershell" },
            { label: "Zsh", slug: "shell/zsh" },
            { label: "Temas", slug: "shell/themes" },
            { label: "Plugins", slug: "shell/plugins" },
          ],
          label: "Shell",
        },
        {
          items: [
            { label: "Introdução", slug: "python" },
            { label: "Instalação", slug: "python/install" },
            { label: "Executando", slug: "python/run" },
            { label: "Ambientes virtuais", slug: "python/venv" },
          ],
          label: "Python",
        },
        {
          items: [
            { label: "Introdução", slug: "c_cpp" },
            { label: "Compilador", slug: "c_cpp/compiler" },
            { label: "Depurador", slug: "c_cpp/debugger" },
            {
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
              label: "CMake",
            },
          ],
          label: "C e C++",
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
      social: {
        github: "https://github.com/gabdumal/book_andesito",
      },
      title: "Andesito",
    }),
    tailwind({
      applyBaseStyles: false,
    }),
    react(),
  ],
  site: "https://gabdumal.github.io",
});
