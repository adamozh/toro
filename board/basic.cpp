#include <string>
#include <vector>

using namespace std;

/* basic board which maps squares to pieces */
class BasicBoard {
  private:
    vector<string> pieces;
    vector<string> colors;

  public:
    BasicBoard() {
        pieces = vector<string>(64, "");
        colors = vector<string>(64, "");
        // todo: complete initialization
    }
};
