{
  description = "tree-sitter grammars for arista style network configurations";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
    flake-parts.url = "github:hercules-ci/flake-parts";
  };

  outputs = inputs@{ self, flake-parts, ... }:
    flake-parts.lib.mkFlake { inherit inputs; } {
      systems = [ "x86_64-linux" "aarch64-linux" ];

      perSystem = { inputs', self', pkgs, system, ... }: {
        devShells.default = pkgs.mkShell {
          buildInputs = [
            pkgs.tree-sitter
            pkgs.nodejs
            pkgs.gcc
            pkgs.cargo
          ];
        };
      };
    };
}
