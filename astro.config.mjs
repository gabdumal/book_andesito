// @ts-check
import starlight from "@astrojs/starlight";
import tailwindcss from "@tailwindcss/vite";
import { defineConfig } from "astro/config";
import starlightKbd from "starlight-kbd";

// https://astro.build/config
export default defineConfig({
  integrations: [
    starlight({
      customCss: [
        "@fontsource-variable/atkinson-hyperlegible-next",
        "@fontsource-variable/atkinson-hyperlegible-mono",
        "./src/styles/global.css",
      ],
      defaultLocale: "root",
      description: "Guia de configuração de ambiente de desenvolvimento.",
      locales: {
        root: {
          label: "Português",
          lang: "pt",
        },
      },
      plugins: [
        starlightKbd({
          types: [
            { default: true, id: "linux", label: "Linux" },
            { id: "windows", label: "Windows" },
          ],
        }),
      ],
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
            // {
            //   label: "GNOME Terminal",
            //   slug: "terminal/gnome",
            // },
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
        // {
        //   items: [
        //     { label: "Introdução", slug: "shell" },
        //     { label: "PowerShell", slug: "shell/powershell" },
        //     { label: "Zsh", slug: "shell/zsh" },
        //     { label: "Temas", slug: "shell/themes" },
        //     { label: "Plugins", slug: "shell/plugins" },
        //   ],
        //   label: "Shell",
        // },
        // {
        //   items: [
        //     { label: "Introdução", slug: "python" },
        //     { label: "Instalação", slug: "python/install" },
        //     { label: "Executando", slug: "python/run" },
        //     { label: "Ambientes virtuais", slug: "python/venv" },
        //   ],
        //   label: "Python",
        // },
        // {
        //   items: [
        //     { label: "Introdução", slug: "c_cpp" },
        //     {
        //       items: [
        //         {
        //           label: "Introdução",
        //           slug: "c_cpp/compiler",
        //         },
        //         {
        //           label: "Instalação",
        //           slug: "c_cpp/compiler/install",
        //         },
        //         {
        //           label: "Programas em C",
        //           slug: "c_cpp/compiler/run_c",
        //         },
        //         {
        //           label: "Configurando o VSCode",
        //           slug: "c_cpp/compiler/vscode",
        //         },
        //         {
        //           label: "Programas em C++",
        //           slug: "c_cpp/compiler/run_cpp",
        //         },
        //       ],
        //       label: "Compilador",
        //     },
        //     {
        //       items: [
        //         { label: "Introdução", slug: "c_cpp/debugger" },
        //         { label: "Instalação", slug: "c_cpp/debugger/install" },
        //         { label: "Programas em C", slug: "c_cpp/debugger/run_c" },
        //         { label: "Programas em C++", slug: "c_cpp/debugger/run_cpp" },
        //       ],
        //       label: "Depurador",
        //     },
        //     {
        //       items: [
        //         {
        //           label: "Introdução",
        //           slug: "c_cpp/cmake",
        //         },
        //         {
        //           label: "Instalação",
        //           slug: "c_cpp/cmake/install",
        //         },
        //       ],
        //       label: "CMake",
        //     },
        //   ],
        //   label: "C e C++",
        // },
        // {
        //   label: "JavaScript",
        //   slug: "javascript",
        // },
        // {
        //   label: "Java",
        //   slug: "java",
        // },
        // {
        //   label: "Rust",
        //   slug: "rust",
        // },
        // {
        //   label: "Go",
        //   slug: "go",
        // },
        // {
        //   label: "Ruby",
        //   slug: "ruby",
        // },
      ],
      social: [
        {
          href: "https://github.com/gabdumal/book_andesito",
          icon: "github",
          label: "GitHub",
        },
      ],
      title: "Andesito",
    }),
  ],
  site: "https://gabdumal.github.io",
  vite: {
    plugins: [tailwindcss()],
  },
});
