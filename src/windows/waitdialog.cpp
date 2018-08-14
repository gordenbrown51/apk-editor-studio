#include "windows/waitdialog.h"
#include "base/application.h"

WaitDialog::WaitDialog(QWidget *parent) : QMessageBox(parent)
{
    parent->setEnabled(false);
    //: This is an imperative mood verb (as in "please wait").
    setWindowTitle(tr("Wait"));
    setText(tr("Please wait..."));
    setIconPixmap(app->loadPixmap("wait.png"));
    setStandardButtons(QMessageBox::NoButton);
    setWindowModality(Qt::ApplicationModal);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    setEnabled(true);
    show();
    app->processEvents();
}

WaitDialog::~WaitDialog()
{
    static_cast<QWidget *>(parent())->setEnabled(true);
}
