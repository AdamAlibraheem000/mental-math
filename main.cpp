#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <random>

using std::cin;
using std::cout;
using std::endl;
using std::random_device;
using std::string;
using std::uniform_int_distribution;
using std::setw;

// Menus
void mainMenu();
void additionMenu();
void subtractionMenu();
void multiplicationMenu();
void divisionMenu();
void digitChoice();

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
void subOneByOne();
void subTwoByOne();
void subTwoByTwo();
void subThreeByOne();
void subThreeByTwo();
void subThreeByThree();
void subFourByOne();
void subFourByTwo();
void subFourByThree();
void subFourByFour();

// Multiplication
void mulOneByOne();
void mulTwoByOne();
void mulTwoByTwo();
void mulThreeByOne();
void mulThreeByTwo();
void mulThreeByThree();
void mulFourByOne();
void mulFourByTwo();
void mulFourByThree();
void mulFourByFour();

// Division
void divOneByOne();
void divOneByTwo();
void divOneByThree();
void divOneByFour();

int main()
{
    mainMenu();
    return 0;
}

void digitChoice()
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
}

void additionMenu()
{
    int userInput = 0;

    cout << "****Addition****\n";

    while (true)
    {
        digitChoice();

        cin >> userInput;

        switch (userInput)
        {
        case 1:
            addOneByOne();
            break;
        case 2:
            addTwoByOne();
            break;
        case 3:
            addTwoByTwo();
            break;
        case 4:
            addThreeByOne();
            break;
        case 5:
            addThreeByTwo();
            break;
        case 6:
            addThreeByThree();
            break;
        case 7:
            addFourByOne();
            break;
        case 8:
            addFourByTwo();
            break;
        case 9:
            addFourByThree();
            break;
        case 10:
            addFourByFour();
            break;
        case 11:
            mainMenu();
            break;

        default:
            cout << "Incorrect Input. Try again\n\n";
            break;
        }
    }
}

void subtractionMenu()
{
    int userInput = 0;

    cout << "****Subtraction****\n";

    while (true)
    {
        digitChoice();

        cin >> userInput;

        switch (userInput)
        {
        case 1:
            subOneByOne();
            break;
        case 2:
            subTwoByOne();
            break;
        case 3:
            subTwoByTwo();
            break;
        case 4:
            subThreeByOne();
            break;
        case 5:
            subThreeByTwo();
            break;
        case 6:
            subThreeByThree();
            break;
        case 7:
            subFourByOne();
            break;
        case 8:
            subFourByTwo();
            break;
        case 9:
            subFourByThree();
            break;
        case 10:
            subFourByFour();
            break;
        case 11:
            mainMenu();
            break;

        default:
            cout << "Incorrect Input. Try again\n\n";
            break;
        }
    }
}

void multiplicationMenu()
{
    int userInput = 0;

    cout << "****Multiplication****\n";

    while (true)
    {
        digitChoice();

        cin >> userInput;

        switch (userInput)
        {
        case 1:
            mulOneByOne();
            break;
        case 2:
            mulTwoByOne();
            break;
        case 3:
            mulTwoByTwo();
            break;
        case 4:
            mulThreeByOne();
            break;
        case 5:
            mulThreeByTwo();
            break;
        case 6:
            mulThreeByThree();
            break;
        case 7:
            mulFourByOne();
            break;
        case 8:
            mulFourByTwo();
            break;
        case 9:
            mulFourByThree();
            break;
        case 10:
            mulFourByFour();
            break;
        case 11:
            mainMenu();
            break;

        default:
            cout << "Incorrect Input. Try again\n\n";
            break;
        }
    }
}

void divisionMenu()
{
    int userInput = 0;

    cout << "****Division****\n";
    while (true)
    {
        cout << "1)OneByOne\n";
        cout << "2)OneByTwo\n";
        cout << "3)OneByThree\n";
        cout << "4)OneByFour\n";
        cout << "5)Main Menu\n";
        cout << ">> ";

        cin >> userInput;

        switch (userInput)
        {
        case 1:
            divOneByOne();
            break;
        case 2:
            divOneByTwo();
            break;
        case 3:
            divOneByThree();
            break;
        case 4:
            divOneByFour();
            break;
        case 5:
            mainMenu();
            break;

        default:
            cout << "Incorrect Input. Try again\n\n";
            break;
        }
    }
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

        if (userInput == "1")
        {
            additionMenu();
            break;
        }
        else if (userInput == "2")
        {
            subtractionMenu();
            break;
        }
        else if (userInput == "3")
        {
            multiplicationMenu();
            break;
        }
        else if (userInput == "4")
        {
            divisionMenu();
            break;
        }
        else if (userInput == "5")
        {
            string confirmation = "";
            while (true)
            {
                cout << "Sure you wish to exit? (y/n)";
                cin >> confirmation;

                if (confirmation == "y")
                {
                    cout << "\nGoodbye";
                    exit(0);

                    break;
                }
                else if (confirmation == "n")
                {
                    mainMenu();
                    break;
                }
                else
                {
                    cout << "\nIncorrect input. Try again\n";
                }
            }
        }
    }
}

// Addition functions
void addOneByOne()
{

    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> dist(1, 9);

    while (true)
    {
        int numOne = dist(rd);
        int numTwo = dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "+ " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne + numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void addTwoByOne()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> two_dist(10, 99);
    uniform_int_distribution<int> one_dist(1, 9);

    while (true)
    {
        int numOne = two_dist(rd);
        int numTwo = one_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "+ " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne + numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void addTwoByTwo()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> two_dist(10, 99);
    uniform_int_distribution<int> sec_two_dist(10, 99);

    while (true)
    {
        int numOne = two_dist(rd);
        int numTwo = sec_two_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "+ " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne + numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void addThreeByOne()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> three_dist(100, 999);
    uniform_int_distribution<int> one_dist(1, 9);

    while (true)
    {
        int numOne = three_dist(rd);
        int numTwo = one_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "+ " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne + numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void addThreeByTwo()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> three_dist(100, 999);
    uniform_int_distribution<int> two_dist(10, 99);

    while (true)
    {
        int numOne = three_dist(rd);
        int numTwo = two_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "+ " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne + numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void addThreeByThree()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> three_one_dist(100, 999);
    uniform_int_distribution<int> three_two_dist(100, 999);

    while (true)
    {
        int numOne = three_one_dist(rd);
        int numTwo = three_two_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "+ " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne + numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void addFourByOne()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> four_dist(1000, 9999);
    uniform_int_distribution<int> one_dist(1, 9);

    while (true)
    {
        int numOne = four_dist(rd);
        int numTwo = one_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "+ " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne + numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void addFourByTwo()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> four_dist(1000, 9999);
    uniform_int_distribution<int> two_dist(10, 99);

    while (true)
    {
        int numOne = four_dist(rd);
        int numTwo = two_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "+ " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne + numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void addFourByThree()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> four_dist(1000, 9999);
    uniform_int_distribution<int> three_dist(100, 999);

    while (true)
    {
        int numOne = four_dist(rd);
        int numTwo = three_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "+ " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne + numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void addFourByFour()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> four_dist(1000, 9999);
    uniform_int_distribution<int> four_two_dist(1000, 9999);

    while (true)
    {
        int numOne = four_dist(rd);
        int numTwo = four_two_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "+ " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne + numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

// Subtraction functions
void subOneByOne()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> dist(1, 9);

    while (true)
    {
        int numOne = dist(rd);
        int numTwo = dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "- " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne - numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void subTwoByOne()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> two_dist(10, 99);
    uniform_int_distribution<int> one_dist(1, 9);

    while (true)
    {
        int numOne = two_dist(rd);
        int numTwo = one_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "- " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne - numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void subTwoByTwo()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> two_dist(10, 99);
    uniform_int_distribution<int> sec_two_dist(10, 99);

    while (true)
    {
        int numOne = two_dist(rd);
        int numTwo = sec_two_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "- " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne - numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void subThreeByOne()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> three_dist(100, 999);
    uniform_int_distribution<int> one_dist(1, 9);

    while (true)
    {
        int numOne = three_dist(rd);
        int numTwo = one_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "- " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne - numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void subThreeByTwo()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> three_dist(100, 999);
    uniform_int_distribution<int> two_dist(10, 99);

    while (true)
    {
        int numOne = three_dist(rd);
        int numTwo = two_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "- " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne - numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void subThreeByThree()
{
    cout << "Three by Three";
}

void subFourByOne()
{
    cout << "Four by one";
}

void subFourByTwo()
{
    cout << "Four by Two";
}

void subFourByThree()
{
    cout << "Four by Three";
}

void subFourByFour()
{
    cout << "Four by Four";
}

// Multiplication functions
void mulOneByOne()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> dist(2, 9);

    while (true)
    {
        int numOne = dist(rd);
        int numTwo = dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "x " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne * numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}
void mulTwoByOne()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> two_dist(10, 99);
    uniform_int_distribution<int> one_dist(2, 9);

    while (true)
    {
        int numOne = two_dist(rd);
        int numTwo = one_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "x " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne * numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}

void mulTwoByTwo()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> two_dist(10, 99);
    uniform_int_distribution<int> sec_two_dist(10, 99);

    while (true)
    {
        int numOne = two_dist(rd);
        int numTwo = sec_two_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "x " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne * numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}
void mulThreeByOne()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> three_dist(100, 999);
    uniform_int_distribution<int> one_dist(2, 9);

    while (true)
    {
        int numOne = three_dist(rd);
        int numTwo = one_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "x " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne * numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}
void mulThreeByTwo()
{
    int userAnswer = 0;
    int answer = 0;
    random_device rd;
    uniform_int_distribution<int> three_dist(100, 999);
    uniform_int_distribution<int> two_dist(10, 99);

    while (true)
    {
        int numOne = three_dist(rd);
        int numTwo = two_dist(rd);
        cout << "Enter -99 to exit\n\n";
        cout << setw(6) << numOne << endl;
        cout << "x " << setw(4) <<numTwo << "\n";
        cout << setw(4) << "______\n";
        cin >> userAnswer;
        answer = numOne * numTwo;

        if(userAnswer == -99){
            cout << "\n\n";
            break;
        }

        if (userAnswer == answer)
        {
            cout << "Correct! The answer is: " << answer << "\n\n";
        }
        else
        {
            cout << "Incorrect. The answer is: " << answer << "\n\n";
        }
    }
}
void mulThreeByThree()
{
    cout << "Three by Three";
}
void mulFourByOne()
{
    cout << "Four by one";
}
void mulFourByTwo()
{
    cout << "Four by Two";
}
void mulFourByThree()
{
    cout << "Four by Three";
}
void mulFourByFour()
{
    cout << "Four by Four";
}

// Division functions
void divOneByOne()
{
    cout << "Div one";
}
void divOneByTwo()
{
    cout << "Div two";
}
void divOneByThree()
{
    cout << "Div three";
}
void divOneByFour()
{
    cout << "Div four";
}