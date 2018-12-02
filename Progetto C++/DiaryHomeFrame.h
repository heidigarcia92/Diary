#ifndef DIARYHOME_H
#define DIARYHOME_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class DiaryHomeFrame : public DiaryHomeBase
{
public:
    DiaryHomeFrame(wxWindow* parent, Administrator* _admin);
    virtual ~DiaryHomeFrame();
    void refreshList();
protected:
    virtual void OnButton_acceptButtonClicked(wxCommandEvent& event);
    virtual void OnButton_addboardButtonClicked(wxCommandEvent& event);
private:
    Administrator* admin;
};
#endif // DIARYHOME_H
