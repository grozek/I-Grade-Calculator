
/******************************************************************************
* Name: Gabriela Roznawska                                                    *
* Assignment name: Homework 1 - "Assigning Grades"                            *
*                                                                             *
* Assignment for: February 17th 2023                                          *
******************************************************************************/

/****************************************************************************** * Academic honesty certification:                                             * *                                                                             *
* My signature below confirms that the above list of sources is complete      *
* and I have not talked to anyone else (e.g., CSC161 students) about          *
* the solution to this problem.                                               *
*                                                                             *
* Gabriela Roznawska                                                          *
******************************************************************************/

/* Assigning Grades: grade.c */
/* The program grade.c generates a letter grade equivalent for the number 
   within the range 0-100 provided by the user. It assumes that the input 
   is an integer and creates error message for any number outside of the 
   0-100 range. 
   The letter grade may be  modified by either "+": when the last digit 
   of imput is in the range 0-2 or "-": when the last digit of input is 
   either 8 or 9.
   The last digit modifiers do not apply to letter grade "F" */

#include <stdio.h>

//pre-condition - the input is supposed to be an integer within 0-100 range.

int main (void)
{
  int number;  //the number provided by the user
  char letter;  //letter will be used as a letter grade in output  
  char mark;   //mark will be used as a "+" or "-" in output
  int remainder; //shortens the number to its first digit
  int divider; //shortens the number to its second digit

 
  printf ("Input a numeric grade (0-100) to translate into a letter grade\n");
  scanf ("%d", &number); //user inputs the number
  

  divider = number / 10; //shortens the number to its first digit
  remainder = number % 10;//shortens the number to its second digit
 
  switch (divider){ //translates the first digit into a letter grade
  case 9:
    letter = 'A';
    break;
  case 8:
    letter = 'B';
    break;
  case 7:
    letter = 'C';
    break;
  case 6:
    letter = 'D';
    break;
  case 5: case 4: case 3: case 2: case 1: case 0:
    letter = 'F';
    break;
}
   //adds "-" mark if second digit of number is either 0, 1 or 2.
  if ((remainder == 1) || (remainder == 0) || (remainder == 2))
    mark = '-';
   //adds "+" mark if second digit of number is either 8 or 9.
  else if ((remainder == 8) || (remainder == 9))
    mark = '+';
  //does not add mark if second digit is within range 3-7.
  else
    mark = ' ';
     
  if ((number > 100) || (number < 0)) //prints error if number is out of range
    printf ("Invalid input. Provide valid number between 0 and 100\n");
  else if (number == 100) //prints A+ for number equal to 100
    printf ("Resulting letter grade based on your input: A+\n");
  else if (letter == 'F') //prints no marks if the letter grade is F
    printf ("Resulting letter grade based on your input: %c\n", letter);
  else                    //if there are no exceptions program prints the output
    printf ("Resulting letter grade based on your input: %c%c\n", letter, mark);
    
  return 0; } //main



  
