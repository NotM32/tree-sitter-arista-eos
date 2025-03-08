/**
 * @file Grammars for FRR, Arista EOS, Cisco iOS/NXOS style network configuration files
 * @author m32 <m32@m32.io>
 * @license GPL
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "arista_eos",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
