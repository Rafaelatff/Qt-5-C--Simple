#include <iostream>
#include <string>
#include <stdlib.h> 	// to use srand, rand
#include <time.h>	// to use time functions

 using namespace std;

int main()
{
  //  string hello = "hello world";
  //  unsigned int number = 7;

/*  cout << "Hello World!" << endl;
    cout << "endl jumps a line" << endl;

    std::cerr << "There was an error" << std::endl;
    std::clog << "This is a log message" << std::endl;

    std::string name;
    std::cout << "Please type in yout first name: ";
    std::cin >> name;
    std::cout <<"Your first name is: " << name << std::endl;
*/

/*    std::cout << "Message: " << hello << endl;
    std::cout << "Number: " << number << endl;

    std::cout << "Size of int: " << sizeof(int) << " bytes" << endl;
*/

    int guessNumber, secretNumber;
    //Initialize
    srand (static_cast<unsigned int>((time(nullptr))));

    //Generate (1-10)
    secretNumber = rand() % 10 + 1;

    //Ask the user to guess
    cout << "Guess my number ( 1-10 ) :";

    do{
        cin >> guessNumber;
       if( secretNumber < guessNumber){
            cout << "The number is lower than that" <<endl;
       }


       if( secretNumber > guessNumber){
            cout << "The number is higher than that" <<endl;
       }

    }while( guessNumber != secretNumber);

    cout<< "Congratulations, the  number is :"<<guessNumber <<endl;

    return 0;
}
