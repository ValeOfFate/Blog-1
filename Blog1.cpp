#include <iostream> // Cin and Cout

#include <ctime> // Used for time set

#include <windows.h> // Used for color text

using namespace std;

void header();

void gen();

int main()
{
    char user='y';
    do{
    char choice;
    header();
    gen();
    cout << "What day of the week is it?\n";
    cout << "Monday = M\nFriday = F\nSunday = S\n";
    cout << "Input M, F, or S: ";
    cin >> choice;
    choice=tolower(choice);
        while (choice!='m' & choice!='f' & choice!='s'){
            cin.clear();
            cin.sync();
            cout << "\nError: Please enter S, F, or S";
            cin >> choice;
        }
    if (choice=='f'){
        header();
        cout << "Friday opens with school\nI usually listen to Pearl Jam or the Misfits podcast on the way to school\nAfter showing up I talk to friends for a free period and then do course work\nFollowing class I go out to eat with friend\nwith are favorite places to eat being";
        cout << "\nMcdonalds, Tomato Brothers, and Olive Garden";
        cout << "\nThey I usually go home and play games until I have to go to work\nI work at a Dollar General until close on Fridays";
    }
    if (choice=='m'){
        header();
        cout << "I spend my Monday morning in school/nAnd I spend my after noons at duel enrollment\nMy UofM duel enrollment is a coding class that is one of my favorite class due to coding being my passion\n";
        cout << "I spend the rest of my day playing games or with my family\nMy family consists of my mom, dad, moved out sister, three cats, and a gecko";
    }
    if (choice=='s'){
        header();
        cout << "I spend most of my Sundays with family and completing tasks I could not during the week\nI wear more casual clothing on these days\nI tend to wear clothing representing monster hunter - my favorite franchise\n";
    }
    cout << "\n\nWould you like to view another day (Y/N)?: ";
    cin >> user;
    user=tolower(user);
    while (user!='y' & user!='n'){
        cin.clear();
        cin.sync();
        cout << "\nError: Please enter N or Y: ";
        cin >> user;
    }
    } while (user=='y');
    return 0;
}

void header(){
    system("CLS");
    cout << "COM 102\nBlog #1\nby Matthew Hocking\n\n";
}
void gen(){
    cout << "Name: Matthew Hocking\nAge: 18\nGender: Male\n\n\n";
}
