// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
// ---------------------------------------------------------------------------
USEFORM("NForce2XTForm.cpp", MainForm);
USEFORM("AboutForm.cpp", AboutDialog);
USEFORM("ValidationBot.cpp", ValidationBotDialog);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int) {
    try {
        Application->Initialize();
        Application->MainFormOnTaskBar = true;
        Application->Title = "nForce2XT";
        Application->CreateForm(__classid(TMainForm), &MainForm);
         Application->CreateForm(__classid(TAboutDialog), &AboutDialog);
         Application->CreateForm(__classid(TValidationBotDialog), &ValidationBotDialog);
         Application->Run();
    }
    catch (Exception &exception) {
        Application->ShowException(&exception);
    }
    catch (...) {
        try {
            throw Exception("");
        }
        catch (Exception &exception) {
            Application->ShowException(&exception);
        }
    }
    return 0;
}
// ---------------------------------------------------------------------------
