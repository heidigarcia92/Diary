//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_ADMINISTRATOR_HPP
#define DIARY_ADMINISTRATOR_HPP

#include "Board.hpp"
#include <list>

using namespace std;

class Administrator {
public:
    void addBoard(string name);
    bool removeBoard(const Board& board);
    list <Board> getBoardContainer();
    Board& getBoard(string name);
private:
    list <Board> boards;
};


#endif //DIARY_ADMINISTRATOR_HPP
