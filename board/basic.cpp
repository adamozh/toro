#include <string>
#include <vector>

using namespace std;

/* basic board which maps pieces to location */
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
