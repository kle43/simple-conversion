#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

/**      
@Purpose - The program print out the conversion results from the input of users.  
@param - Khanh Le     
@param - CS 116 - Lab 1: Conversion    
@return - none 
@author Khanh Le
*/ 

void printMeFirst(string name, string courseInfo) // use to show the student's name and course information
  {
  cout << name << endl; 
  cout << courseInfo << endl; 
  time_t now = time(0);  
  char* dt = ctime(&now); 
  cout << "Date: " << dt << endl; 
  } 

void menu() // use to show the menu selection
{
  int option;
  cout << "\nHello, this is the program for conversing some simple conversions! \n\n";
  cout << "(1) Convert seconds into hours, minutes, and seconds \n";
  cout << "(2) Convert Fahrenheit to Celsius \n";
  cout << "(3) Convert Celsius to Fahrenheit \n";
  cout << "(4) Quit \n";
}
  
int main()
{
  printMeFirst("Khanh Le", "CS 116 - Lab 1: Conversion");
 
  int option;

  do // do-while function is used to repeat the loop - the menu and the selection for users
  {
  menu(); // show the menu selection
  cout << "\nPlease select the conversion option that you want: "; // select option
  cin >> option; // input option number

  while (option == 1) // case 1: converse seconds to hour, minute, second format. While function use to check the input data first.
  {
  do // do-while function to repeat the step of executing data
  {
  do // do-while function to repeat checking and calculating input data
    {
      int hour;
      int minute;
      int second;
      cout << "\nEnter the length of seconds ";
      cin >> second; //input seconds

        if (second >= 0) // calculating formula
        {
          hour = second / 3600;
          minute = (second % 3600) / 60;
          second = (second % 3600) % 60;
          cout << "\n=> The number you entered equals to " << hour << " hours " << minute << " minutes " << second << " second. \n";
          break; // stop the loop from running over again
        }
        else if (second < 0) // the output when user enters non-positive numbers
        {
            cout << "\nPlease enter a positive number! \n";
        }
      
    }
    while (1); // no condition
    break; // stop the loop from running over again
  }
  while (option == 1);
  break; // stop the loop from running over again
  }
    
  while (option == 2) // case 2: converse fahrenheit degree to celsius degree
  {  
  do // same as case 1
  {
    do // same as case 1
    {
      double fahrenheit; // degree is showed in decimal number
      double celsius;

      cout << "\nPlease enter the Fahrenheit degree ";
      cin >> fahrenheit; // input fahrenheit degree

      while(1) // no condition
      {
        if (cin.fail()) // function checks as if the input data is valid
        {
          cin.clear(); 
          cin.ignore();
          cout << "\nYou've entered an invalid number \n"; 
          cout << "\nPlease type again ";
          cin >> fahrenheit; // let the user re-enter again until receive valid value
        }
        else if (!cin.fail()) // case in which data is valid
        break;
      }

      celsius = (((fahrenheit - 32) * 5) / 9); // formula for converse fahrenheit to celsius
      cout << "\n=> Here is the Celsius degree " ;
      cout << setprecision(2) << fixed << endl;
      cout << celsius;
      break; // stop the loop from running over again
    }
    while (1); // no condition
    break; // stop the loop from running over again
  }
  while (option == 2); // do-while function check if option number == 2
  break; // stop the loop from running over again
  }

  while (option == 3) // while check whether option number is 3
  {
    do // same as case 1
    {
      do // same as case 1
      {
        double celsius3;
        double fahrenheit3; 
        cout << "\nPlease enter the Celsius degree ";
        cin >> celsius3; // input celsius degree

        while(1)
        {
          if(cin.fail()) // line 129-138: same as case 2, function checks if the input data is valid
          {
            cin.clear();
            cin.ignore();
            cout << "\nYou've entered an invalid value...\n";
            cout << "\nPlease enter again ";
            cin >> celsius3;
          }
          else if (!cin.fail())
          break;
        }

        fahrenheit3 = (celsius3 * 9 / 5) + 32; // formula to converse celsius to fahrenheit
        cout << "\n=> Here is the Fahrenheit degree " << fahrenheit3 << endl;
        break;// stop the loop from running over again
      }
      while(1); // no condition
      break; // stop the loop from running over again

    }
    while (option == 3); // do-while funtion repeat the case 3 
    break; // stop the loop from running over again
  }

  while (option == 4) // while function checks if the option number == 4
  {
    cout << "\nGoodbye! See you next time ^o^ "; // the output when user chooses to quit the program
    return 0; // end the program
  }

  }
  while ((option == 1) || (option == 2) || (option == 3) || (option == 4)); // do-while function repeat the loop of menu selection when option no. == 1,2,3,4

  return 0;
}  

  
  
  

