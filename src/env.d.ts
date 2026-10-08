interface ImportMeta {
  readonly env: ImportMetaEnv;
}

interface ImportMetaEnv {
  readonly PUBLIC_BASE: string;
  readonly PUBLIC_GITHUB_USERNAME: string;
}

/// <reference types="astro/client" />

declare module "virtual:astro-expressive-code/config" {
  const value: unknown;
  export default value;
}

declare module "virtual:astro-expressive-code/api" {
  const value: unknown;
  export default value;
}

declare module "virtual:astro-expressive-code/preprocess-config" {
  const value: unknown;
  export default value;
}
