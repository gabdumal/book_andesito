/* eslint-disable @typescript-eslint/triple-slash-reference */
/// <reference path="../.astro/types.d.ts" />
/// <reference types="astro/client" />

interface ImportMetaEnv {
  readonly PUBLIC_BASE: string;
  readonly PUBLIC_GITHUB_USERNAME: string;
}

interface ImportMeta {
  readonly env: ImportMetaEnv;
}
