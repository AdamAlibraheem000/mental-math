#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<random>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Menus
void mainMenu();
void additionMenu();
void subtraction();
void multiplication();
void division();


// Addition
void addOneByOne();
void addTwoByOne();
void addTwoByTwo();
void addThreeByOne();
void addThreeByTwo();
void addThreeByThree();
void addFourByOne();
void addFourByTwo();
void addFourByThree();
void addFourByFour();

// Subtraction

// Multiplication

// Division

int main()
{
    mainMenu();
    return 0;
}

void digitChoice(){
    
    
}

void additionMenu(){
    char userInput = 'a';
    
    cout << "****Addition****\n";

    while (true)
    {
        cout << "1)One digit\n";
        cout << "2)Two digit by one digit\n";
        cout << "3)Two digit by two digit\n";
        cout << "4)Three digit by one digit\n";
        cout << "5)Three digit by two digit\n";
        cout << "6)Three digit by three digit\n";
        cout << "7)Four digit by one digit\n";
        cout << "8)Four digit by two digit\n";
        cout << "9)Four digit by three digit\n";
        cout << "10)Four digit by four digit\n";
        cout << "11)Main Menu\n";
        cout << ">> ";
        
        cin >> userInput;

        switch (userInput)
        {
        case '1':
             addOneByOne();
            break;
            case '2':
             addTwoByOne();
            break;
            case '3':
             addTwoByTwo();
            break;
            case '4':
             addThreeByOne();
            break;
            case '5':
             addThreeByTwo();
            break;
            case '6':
             addThreeByThree();
            break;
            case '7':
             addFourByOne();
            break;
            case '8':
             addFourByTwo();
            break;
            case '9':
             addFourByThree();
            break;
            case '10':
             addFourByFour();
            break;
            case '11':
             mainMenu();
            break;
        
        default:
            break;
        }
    }

}

void subtraction(){
    cout << "\nSubtraction";
}

void multiplication(){
    cout << "\nMulitplication";
}

void division(){
    cout << "\nDivision";
}

void mainMenu()
{

    string userInput = "";

    while (true)
    {
        cout << "1)Add\n";
        cout << "2)Subtract\n";
        cout << "3)Multiple\n";
        cout << "4)Divide\n";
        cout << "5)Exit program\n";
        cout << ">> ";

        cin >> userInput;

        if(userInput == "1"){
            additionMenu();
            break;
        }
        else if(userInput == "2"){
            subtraction();
            break;
        }
        else if(userInput == "3"){
            multiplication();
            break;
        }else if(userInput == "4"){
            division();
            break;
        }else if (userInput == "5")
        {
            string confirmation = "";
            while (true)
            {
            cout << "Sure you wish to exit? (y/n)";
            cin >> confirmation;

            if(confirmation == "y"){
                cout << "\nGoodbye";
                exit(0);

                break;
            }else if(confirmation == "n"){
                mainMenu();
                break;
            }else{
                cout << "\nIncorrect input. Try again\n";
            }
                
            }
            

        }
        
    }
    
}