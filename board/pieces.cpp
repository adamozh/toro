enum EPieceType {
    ept_pnil = 0, // empty
    ept_wpawn = 1,
    ept_bpawn = 2,
    ept_knight = 3,
    ept_bishop = 4,
    ept_rook = 5,
    ept_queen = 6,
    ept_king = 7,
};

// piece code takes into account colour
// 0 to 15
enum EPieceCode {
    epc_empty = ept_pnil,
    epc_wpawn = ept_wpawn,
    epc_woff = ept_bpawn, // placeholder
    epc_wknight = ept_knight,
    epc_wbishop = ept_bishop,
    epc_wrook = ept_rook,
    epc_wqueen = ept_queen,
    epc_wking = ept_king,

    epc_black = 8,
    epc_boff = epc_black + ept_wpawn, // placeholder
    epc_bpawn = epc_black + ept_bpawn,
    epc_bknight = epc_black + ept_knight,
    epc_bbishop = epc_black + ept_bishop,
    epc_brook = epc_black + ept_rook,
    epc_bqueen = epc_black + ept_queen,
    epc_bking = epc_black + ept_king
};
