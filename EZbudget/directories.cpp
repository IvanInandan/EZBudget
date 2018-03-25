#include "directories.h"


QDir directory;

//directory.setPath(directory.homePath());


Directories* Directories::_instance = 0;

Directories* Directories::Instance()
{
    if(_instance == 0)
        _instance = new Directories();
    return _instance;
}

Directories::Directories()
{
    //directory.setPath(directory.homePath());
    //directory.mkdir("QtUsers");//Makes a directory for users
    //directory.cd("QtUsers");
}

void Directories::save()
{
    directory.cd(currentAccount());
    QFile file(directory.path()+ "\data.txt");
    //Will save info into a file
}
void Directories::fileReader()
{

}
QString Directories::currentAccount()
{
    return accounts[0].getAccountName();//Will return a hardcoded file name
}
void Directories::load(Account* username)
{

    /*username -> setCategory(NULL, NULL);
    username -> setIncome(NULL);
    username -> addCategory(category);
    username -> populateExpenditures(category, n, date, num, flag);*/
}
bool Directories::createNewAccount(QString username)
{
    for(int i = 0; i < accounts.size(); i++)
    {
        if(accounts[i].toLower(getAccountName()) == username)
            return false;
    }
    username = "TestUser";
    directory.mkdir(username);

    Account *username = new Account();
    accounts.pushBack(username);
}

bool Directories::takeLoginInfo(QString usernameEntered, QString pwdEntered)
{
    if(directory.exists(usernameEntered))
    {
        checkLogin(usernameEntered, pwdEntered);
        return true;
    }
    else
    {
        //print error to screen
        return false;
    }
}


bool Directories::checkLogin(QString username, QString password)
{
    directory.cd(username);
    QFile file(directory.path()+"\password.txt");
    if(!file.open(QIODevice::ReadOnly))
        return false;
    QTextStream in(&file);
    if(password == in.readLine())
        return true;
    file.close();
    return false;
}

