/**
 * @file Grammars for FRR, Arista EOS, Cisco iOS/NXOS style network configuration files
 * @author m32 <m32@m32.io>
 * @license GPL
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'arista',

  conflicts: $ => [
    [$.command_name, $.section_name]
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.comment,
      $.command,
      $.section,
      $.empty_line
    )),

    empty_line: $ => /\s*\n/,

    comment: $ => seq(
      '!',
      /.*/
    ),

    command: $ => seq(
      $.command_name,
      optional($.command_args),
      '\n'
    ),

    command_name: $ => /[A-Za-z0-9_-]+/,

    command_args: $ => /[^\n]+/,

    section: $ => seq(
      $.section_header,
      repeat($.section_item)
    ),

    section_header: $ => seq(
      $.section_name,
      optional($.section_args),
      '\n'
    ),

    section_name: $ => /[A-Za-z0-9_-]+/,

    section_args: $ => /[^\n]+/,

    section_item: $ => seq(
      /\s+/,
      choice(
        $.command,
        $.nested_section
      )
    ),

    nested_section: $ => seq(
      $.section_name,
      optional($.section_args),
      '\n',
      repeat($.nested_section_item)
    ),

    nested_section_item: $ => seq(
      /\s+\s+/,
      choice(
        $.command,
        $.nested_section_level2
      )
    ),

    nested_section_level2: $ => seq(
      $.section_name,
      optional($.section_args),
      '\n',
      repeat($.nested_section_item_level2)
    ),

    nested_section_item_level2: $ => seq(
      /\s+\s+\s+/,
      choice(
        $.command,
        $.deeply_nested_section
      )
    ),

    deeply_nested_section: $ => seq(
      $.section_name,
      optional($.section_args),
      '\n',
      repeat($.deeply_nested_section_item)
    ),

    deeply_nested_section_item: $ => seq(
      /\s+\s+\s+\s+/,
      $.command
    )
  }
});
