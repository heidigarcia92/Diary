//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#include "Administrator.hpp"

void Administrator :: addBoard (string name){
    for (Board& bd : boards){
        if (bd.getName() == name){
            return;
        }
    }
    Board b (name);
    boards.push_back(b);
};

bool Administrator :: removeBoard (const Board& board){
    for (const Board& bd : boards){
        if (bd.getName() == board.getName()){
            boards.remove(bd);
            return true;
        }
    }
    return false;
}

list <Board> Administrator :: getBoardContainer() {
    return boards;
}

Board& Administrator :: getBoard(string name) {
    for (Board& bd : boards) {
        if (bd.getName() == name) {
            return bd;
        }
    }
}

