package tree_sitter_tradenotate_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-tradenotate"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tradenotate.Language())
	if language == nil {
		t.Errorf("Error loading Tradenotate grammar")
	}
}
