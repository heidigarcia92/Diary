#ifndef NEWBOARD_H
#define NEWBOARD_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class NewBoardFrame : public NewBoardBase
{
public:
    NewBoardFrame(wxWindow* parent, Administrator* _admin);
    virtual ~NewBoardFrame();
protected:
    virtual void OnButton_addboardButtonClicked(wxCommandEvent& event);
private:
    Administrator* admin;
};
#endif // NEWBOARD_H
