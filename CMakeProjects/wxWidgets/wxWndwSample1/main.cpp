#include <wx/wx.h>
class myApp : public wxApp
{
    public:
    virtual bool onInit();
};
DECLARE_APP( myApp )
IMPLEMENT_APP( myApp )

class myWindow : public wxFrame
{
    public:
    myWindow( const wxString &title );
    void OnHello( wxCommandEvent &event );
    void OnAbout( wxCommandEvent &event );
    void OnExit( wxCommandEvent &event );
    private:
    DECLARE_EVENT_TABLE()
};

enum { ID_Hello = 1 };

bool myApp::onInit()
{
    myWindow *window = new myWindow( "My window sample." );
    window -> Show( true );
    return true;
}

BEGIN_EVENT_TABLE( myWindow, wxFrame )
    EVT_MENU( ID_Hello, myWindow::OnHello )
    EVT_MENU( wxID_ABOUT, myWindow::OnAbout )
    EVT_MENU( wxID_EXIT, myWindow::OnExit )
END_EVENT_TABLE()

myWindow::myWindow( const wxString &title )
    :wxFrame( nullptr, wxID_ANY, title )
{
    //Create menu's punct file
    wxMenu *menuFile = new wxMenu;
    menuFile -> Append( ID_Hello, "&Hello...\tCtrl+H", "Help string shown...");
    menuFile -> AppendSeparator();
    menuFile -> Append( wxID_EXIT );
    //Create menu's punct help
    wxMenu *menuHelp = new wxMenu;
    menuHelp -> Append( wxID_ABOUT );
    //Create menu bar
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar -> Append( menuFile, "&File" );
    menuBar -> Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    //Create status bar
    CreateStatusBar();
    SetStatusText( "My first window sample." );
}
void myWindow::OnExit( wxCommandEvent &event )
{
    Close( true );
}
void myWindow::OnAbout( wxCommandEvent &event )
{
    wxMessageBox( "This is my first window's sample.", "Caption", wxOK|wxICON_INFORMATION );
}
void myWindow::OnHello( wxCommandEvent &event )
{
    wxLogMessage( "1'st window's sample." );
}