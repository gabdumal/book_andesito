// eslint-disable-next-line @typescript-eslint/no-shadow
interface ImportMeta {
  readonly env: ImportMetaEnv;
}

interface ImportMetaEnv {
  readonly PUBLIC_BASE: string;
  readonly PUBLIC_GITHUB_USERNAME: string;
}
