#include <wx/app.h>
#include <wx/event.h>
#include "MainFrame.h"
#include <wx/image.h>
#include "DiaryHomeFrame.h"
#include "Administrator.hpp"

#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

#include <boost/archive/tmpdir.hpp>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>

using namespace std;

class MainApp : public wxApp {
public:
    MainApp() {}
    virtual ~MainApp() {
        saveStatus();
    }

    virtual bool OnInit() {
        wxImage::AddHandler( new wxPNGHandler );
        wxImage::AddHandler( new wxJPEGHandler );
        loadStatus();
        DiaryHomeFrame *mainFrame = new DiaryHomeFrame(NULL, &admin);
        SetTopWindow(mainFrame);
        return GetTopWindow()->Show();
    }
    
    void saveStatus() {
        ofstream ofs("Data.bin");
        boost::archive::text_oarchive oa(ofs);
        oa << admin;
    }
    
    void loadStatus() {
        ifstream ifs("Data.bin");
        if (ifs.fail()) {
            return;
        }
        boost::archive::text_iarchive ia(ifs);
        ia >> admin;
    }
    
private:
    Administrator admin;
};

DECLARE_APP(MainApp)
IMPLEMENT_APP(MainApp)
