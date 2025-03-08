package tree_sitter_arista_eos_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_arista_eos "github.com/notm32/tree-sitter-arista-eos/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_arista_eos.Language())
	if language == nil {
		t.Errorf("Error loading AristaEOS grammar")
	}
}
