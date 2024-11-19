/******************
Name:Sanad Altory
ID:214633703
Assignment:ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  // What bit
  //*Scan two integers (representing number and a position)
  // Print the bit in this position. */
  printf("What bit:\n");
  // we add 3 integers number,position,Bit
  int number,position,Bit;

  printf("Please enter a number:\n");
  //The user have to add a number
  scanf("%d",&number);

  printf("Please enter a position:\n");
  //The user have to add the position the resemble the index that we want to check
  scanf("%d",&position);
  //In Bit we right shift the number to the position then use Bitwise 'And' just to return thee number in this position 0 or 1
  Bit = (number >> position) & 1;
  //Then we print the answer in this position that the user picked
  printf("The bit in position%d of number:%d\n",position,Bit);

  //// Set bit
  printf("Set bit:\n");
  int number2,pos,numOn,numOff;
  //We ask the user to enter a number that we want to check
  printf("Please enter a number:\n");
  scanf("%d",&number2);
  // We ask the user to enter the position in the number that we want to check when is it 0 or 1
  printf("Please enter position:\n");
  scanf("%d",&pos);
  //In numOn we check what is the new number when the number in this position is 1
  numOn =number2 |(1<<pos);
  //In numOff we check what is the number that we have when the number in this position is 0
  numOff =number2 & (~(1<<pos));

  printf("Number with bit %d set bit to 1:%d\n Number with bit %d set bit to 0:%d\n",pos,numOn,pos,numOff);

  /*Scan two integers (representing number and a position)
   Toggle the bit in this position
   Print the new number */
  //Toggle bit
  printf("toggle bit\n");
  //We enter a 3 integers
  int num3,pos3,numberToggled;
  printf("please enter a number:\n");
  //We ask the user to enter a number that we want to use in the question
  scanf("%d",&num3);

  printf("please enter a position:\n");
  //We ask the user to enter a number that resemble the position in num3 that we want to change
  scanf("%d",&pos3);
  //In this integer we return the new number after we change 0 to 1 or 1 to 0 in the position we enter in num3
  numberToggled =num3^(1<<pos3);
  // Here we print the position we changed and the new number
  printf("Number with bit %d Toggled:%d",pos3,numberToggled);

  // Even - Odd

  printf("\nEven - Odd:\n");
  int num4,oddEven;
  printf("please enter a number:\n");
  scanf("%d",&num4);
  oddEven=(num4 & 1)^1;
  printf("%d",oddEven);
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int FirstNum5,SecondNum5,SumHex;
  printf("Please enter the first number (octal):\n");
  scanf("%o",&FirstNum5);
  printf("Please enter the second number (octal):\n");
  scanf("%o",&SecondNum5);
  SumHex=FirstNum5 + SecondNum5;
  printf("The sum in Headecimal:%X\n the 3,5,7,11 bits are:%d%d%d%d\n",SumHex,(SumHex>>3)&1,(SumHex>>5)&1,(SumHex>>7)&1,(SumHex>>11)&1);

  printf("Bye!\n");
  
  return 0;
}
