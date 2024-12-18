/* eslint-disable @typescript-eslint/no-magic-numbers */
/** @type {import("eslint").Linter.Config} */
import eslint from "@eslint/js";
import eslintConfigPrettier from "eslint-config-prettier";
import globals from "globals";
import tseslint from "typescript-eslint";

export default [
  {
    files: ["src/**/*.{js,mjs,cjs,ts}"],
  },
  {
    ignores: ["dist/**/*", "node_modules/**/*", ".astro/**/*"],
  },

  eslint.configs.all,
  ...tseslint.configs.strictTypeChecked,
  ...tseslint.configs.stylisticTypeChecked,

  {
    files: ["eslint.config.{js,cjs}"],
    languageOptions: {
      parserOptions: {
        sourceType: "script",
      },
    },
  },
  {
    languageOptions: {
      globals: {
        ...globals.nodeBuiltin,
      },
      parserOptions: {
        ecmaVersion: "latest",
        projectService: true,
        sourceType: "module",
      },
    },
  },
  {
    rules: {
      "@typescript-eslint/no-magic-numbers": [
        "error",
        {
          ignoreEnums: true,
          ignoreNumericLiteralTypes: true,
          ignoreReadonlyClassProperties: true,
        },
      ],
      "@typescript-eslint/prefer-literal-enum-member": "off",
      "@typescript-eslint/restrict-template-expressions": [
        "error",
        {
          allowNumber: true,
        },
      ],
      "class-methods-use-this": "off",
      "id-length": ["error", { exceptions: ["_"] }],
      "max-lines": "off",
      "max-lines-per-function": ["warn", 70],
      "max-statements": ["error", 20],
      "no-console": "off",
      "no-continue": "off",
      "no-magic-numbers": "off",
      "no-ternary": "off",
      "no-use-before-define": [
        "off",
        {
          classes: false,
        },
      ],
      "no-warning-comments": "warn",
      "one-var": "off",
      "restrict-template-expressions": "off",
      "sort-imports": "off",
    },
  },
  eslintConfigPrettier,
];
