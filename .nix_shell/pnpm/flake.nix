{

  description = "Development environment for PNPM";

  inputs = {

    nixpkgs.url = "github:nixos/nixpkgs/nixpkgs-unstable";

    flake-utils.url = "github:numtide/flake-utils";

  };

  outputs =
    {
      self,
      nixpkgs,
      flake-utils,
      ...
    }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = import nixpkgs {
          inherit system;
        };
      in
      {
        devShells.default =
          with pkgs;
          mkShell {

            buildInputs = with pkgs; [
              libuuid
              openssl
              python3
            ];

            packages = with pkgs; [
              nodejs
              pnpm
            ];

          };
      }
    );

}
