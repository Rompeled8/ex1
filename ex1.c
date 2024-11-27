/******************
Name:Rom Peled
Assignment:ex1
*******************/
#include <stdio.h>

int main() {
  printf("What bit:\n");
  int number, position;
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d",&position);
  int bit = (number>>position) & 1;     //Moves the wanted bit to LSB spot and extract the value//
  printf("The bit in position %d of number %d is: %d\n", position,number, bit);

  printf("Set bit:\n");
  int num, pos;
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d",&pos);
  int bit1 = num | (1<<pos); //Sets the wanted bit to 1
  int bit0 = num & ~(1<<pos); //Sets the wanted bit to 0
  printf("Number with bit %d set to 1: %d\n", pos,bit1);
  printf("Number with bit %d set to 0: %d\n",pos,bit0);

  printf("Toggle bit:\n");
  int Number, Position;
  printf("Please enter a number:\n");
  scanf("%d", &Number);
  printf("Please enter a position:\n");
  scanf("%d",&Position);
  int toggled = Number ^ (1<<Position); //Toggles the wanted bit
  printf("Number with bit %d toggled: %d\n",Position,toggled);

  printf("Even - Odd:\n");
  int Num;
  printf("Please enter a number:\n");
  scanf("%d", &Num);
  int check = (Num & 1) ^ 1; //Check the LSB to see if even or odd and sets even as 1 odd as 0
  printf("%d\n",check);

  printf("3, 5, 7, 11:\n");
  unsigned int num1,num2,sum,bit3,bit5,bit7,bit11;
  printf("Please enter the first number (octal):\n");
  scanf("%o",&num1);
  printf("Please enter the second number (octal):\n");
  scanf("%o",&num2);
  sum = num1 + num2;
  printf("The sum in hexadecimal: %X\n", sum);
  bit3 = (sum>>3) &1; //Gets to the wanted bit and collects its value
  bit5 = (sum>>5) &1;
  bit7 = (sum>>7) &1;
  bit11 = (sum>>11) &1;
  printf("The 3,5,7,11 bits are: %u%u%u%u\n",bit3,bit5,bit7,bit11);

  printf("Bye!\n");
  
  return 0;
}
