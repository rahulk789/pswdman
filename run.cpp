#include "class.cpp"

int main() {
    string name;
    string pass;
    if (token[0]== "add"){
        cout << "enter name of the website/app";
        cin >> name ;           
        passgen pg;
        pass=pg.passgen();
        passstore ps(string name,string pass);
        ps.writeit(string name);
    }
    if (token[0]== "retrieve"){
        cout << "enter the master password";
        cin >> masterpass ;
        passret pr(string name, string masterpass);
        pr.readit;
    }
    return 0;
  }
