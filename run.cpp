#include "class.cpp"
#include <iostream>
#include <bits/stdc++.h>
#include <sys/stat.h>
#include <sys/types.h>
int main() {
    srand(time(0));
    string masterpass="zyx";
    string name;
    string pass;
    mkdir("/home/xenon/pass",0777);
    /*if (token[0]== "add"){
        cout << "enter name of the website/app";
    // feature will be added later cout << "Enter the name and password to store"; 
    if (token[0]== "add"){*/
        cout << "enter name of the website/app \n";
        cin >> name ;           
        passgen pg;
        pass=pg.passgenerator();
        //passstore ps(string name,string pass);
        //ps.writeit(string name);
       // cout << "the pass is " << pass << " \n";
        passstore ps(name,pass);
        ps.writeit();
        passret pr(name,masterpass);
        pr.readit();
        /* }
    if (token[0]== "retrieve"){
        cout << "enter the master password";
        cin >> masterpass ;
        passret pr(string name, string masterpass);
        pr.readit;*/
    return 0;
  }
