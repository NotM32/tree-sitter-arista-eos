import XCTest
import SwiftTreeSitter
import TreeSitterAristaEOS

final class TreeSitterAristaEOSTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_arista_eos())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading AristaEOS grammar")
    }
}
