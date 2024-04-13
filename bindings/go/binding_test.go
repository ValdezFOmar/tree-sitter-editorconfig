package tree_sitter_editorconfig_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/ValdezFOmar/tree-sitter-editorconfig"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_editorconfig.Language())
	if language == nil {
		t.Errorf("Error loading Editorconfig grammar")
	}
}
