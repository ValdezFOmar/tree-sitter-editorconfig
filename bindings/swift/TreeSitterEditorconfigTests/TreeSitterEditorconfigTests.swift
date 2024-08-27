import XCTest
import SwiftTreeSitter
import TreeSitterEditorconfig

final class TreeSitterEditorconfigTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_editorconfig())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Editorconfig grammar")
    }
}
