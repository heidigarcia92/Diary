//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_ADMINISTRATOR_HPP
#define DIARY_ADMINISTRATOR_HPP

#include "Board.hpp"
#include <list>

#include <iostream>

#include <boost/archive/tmpdir.hpp>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>

#include <boost/serialization/base_object.hpp>
#include <boost/serialization/utility.hpp>
#include <boost/serialization/list.hpp>
#include <boost/serialization/assume_abstract.hpp>

using namespace std;

class Administrator {
public:
    void addBoard(string name);
    bool removeBoard(const Board& board);
    list <Board> getBoardContainer();
    Board& getBoard(string name);
private:
    list <Board> boards;
    
    friend std::ostream & operator << (std::ostream &os, Administrator &a);
    friend class boost::serialization::access;
    template<class Archive> void serialize(Archive & ar, const unsigned int){
        ar & boards;
    }
};

#endif //DIARY_ADMINISTRATOR_HPP
