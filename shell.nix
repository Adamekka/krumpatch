# VS Code is using this
{ pkgs ? import <nixpkgs> { } }:

pkgs.mkShell {
  stdenv = pkgs.clangStdenv;
  nativeBuildInputs = with pkgs; [
    clang-tools_16
    cmake
    # glfw
    # glslang
  ];
}
