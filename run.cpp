#include "class.cpp"

int main() {
    srand(time(0));
    string name;
    string pass;
    if (token[0]== "add"){
        cout << "enter name of the website/app";

    /*
    // feature will be added later cout << "Enter the name and password to store"; 
    if (token[0]== "add"){*/
        cout << "enter name of the website/app \n";
        cin >> name ;           
        passgen pg;
        pass=pg.passgenerator();
        //passstore ps(string name,string pass);
        //ps.writeit(string name);
        cout << "the pass is " << pass << " \n";
        /* }
    if (token[0]== "retrieve"){
        cout << "enter the master password";
        cin >> masterpass ;
        passret pr(string name, string masterpass);
        pr.readit;*/
    return 0;
  }
