//   Author:   Andrew Gorovoy
//   Recitation:   ECCR 155 –   Thomas Lillis
//   Assignment   3


#include <iostream>
using namespace std;



/*  Take inputs for strings that will be replaced
    Store inputs in variables
    Replace place holder strings with user created strings using replace function
    returns nothing
*/
    
void story1()
{
    string temp1;
    string pluralNoun;
    string occup;
    string animalName;
    string place;
    temp1 = "In the book War of the <PLURAL NOUN>, the main character is an anonymous <OCCUPATION> who records the arrival of the <ANIMAL>s in <PLACE>. ";
     
    cout << "Enter a plural noun: ";
    cin >> pluralNoun;
    
    
    cout << "Enter an occupation: ";
    cin >> occup;
    
    
    cout << "Enter an animal name: ";
    cin >> animalName;
    
    
    cout << "Enter a place: ";
    cin >> place;
    
    
    temp1.replace(130,7,place);
    temp1.replace(117,8,animalName);
    temp1.replace(73,12,occup);
    temp1.replace(23,13,pluralNoun);
    
    
    cout<< temp1 << endl;
    
}
/*  Take inputs for strings that will be replaced
    Store inputs in variables
    Replace place holder strings with user created strings using replace function
    returns nothing
*/

void story2()
{
    string temp2;
    string name;
    string state;
    temp2 = "<NAME>, I've got a feeling we're not in <STATE/COUNTRY> anymore.";
    
    cout << "Enter a name: ";
    cin >> name;
    
    cout << "Enter a state/country: ";
    cin >> state;
    
    temp2.replace(40,15,state);
    temp2.replace(0,6,name);
    cout << temp2 << endl;
    

    
}
/*  Take inputs for strings that will be replaced
    Store inputs in variables
    Replace place holder strings with user created strings using replace function
    returns nothing
*/

void story3()
{
    string temp3;
    string firstName;
    string relative;
    string verb;
    temp3 = "Hello. My name is <FIRST NAME>. You killed my <RELATIVE>. Prepare to <VERB>.";
    
    cout << "Enter a first name: ";
    cin >> firstName;
    
    cout << "Enter a relative: ";
    cin >> relative;
    
    cout << "Enter a verb: ";
    cin >> verb;
    
    temp3.replace(69,6,verb);
    temp3.replace(46,10,relative);
    temp3.replace(18,12,firstName);
    cout << temp3 << endl;
    
    
/*
Begin while loop for game
Take in pit value from user and store as string
If valid choice call necessary function or end program by satisfying loop ending program
If not valid choice, display this message to user and retake input from user
returns nothing
*/



void menu() 
{
   string choice;
    int a=1;
    while (a!=0)
    {
        cout << "Which story would you like to play? Enter the number of the story (1, 2, or 3) or type q to quit: ";
        cin >> choice;
        if (choice =="1"|| choice=="2"||choice=="3")
        {
            cout << "valid choice\n";
            if (choice=="1") {
                story1();
             } else if(choice=="2") {
                 story2();
            } else  {
                    story3();
                }
            
        } else if (choice == "q")
        {
            cout << "good bye";
            a=0;
        } else 
        {
            cout << "Valid choice not selected.\n";
            
        }
        
     }
     
}


    










// call menu function to play game. Everything else runs through functions

int main()  
{
    
    menu();
    return 0;
    

}
