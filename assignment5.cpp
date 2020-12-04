/*
Name: jonathan Brunssen
Class: CS-3339.001
Proffessor: Dr. Dan Tamir
Assignment 5
*/

//libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;


//Classes

//preprocessor functs
string HexToBin(char index);
int main()
{
  //variables
  ifstream infile;

  infile.open("Trace.txt");
  if(infile.fail()){
    cout << "File did not load." << endl;
    return 0;
  }
  else{
    cout << "File loaded." << endl;
    string s;
    string hextobi;
    while(getline(infile,s))
    {
      cout << s << endl;
      hextobi = "";
      int temp = s.length();
      for(int i = 0; i < temp; i++)
      {
        hextobi += HexToBin(s[i]);
      }
      cout << s << " to binary is: " << hextobi << endl;
    }
    infile.close();
  }
  return 0;
}

string HexToBin(char index){
  switch(index){
    case '0':
      return "0000";
      break;
    case '1':
      return "0001";
      break;
    case '2':
      return "0010";
      break;
    case '3':
      return "0011";
      break;
    case '4':
      return "0100";
      break;
    case '5':
      return "0101";
      break;
    case '6':
      return "0110";
      break;
    case '7':
      return "0111";
      break;
    case '8':
      return "1000";
      break;
    case '9':
      return "1001";
      break;
    case 'a':
      return "1010";
      break;
    case 'b':
      return "1011";
      break;
    case 'c':
      return "1100";
      break;
    case 'd':
      return "1101";
      break;
    case 'e':
      return "1110";
      break;
    case 'f':
      return "1111";
      break;
  }
  return 0;
}
