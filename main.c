/*
 * This program allow the user to enter an integer.
 * Then it will count the words in the entered string.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date: October 18th, 2018
 * Mail: A01411995@itesm.mx
 *
 */
#include <stdio.h>

int main() {
  // Here I declare my variables.
  char string[250];
  int words = 1;
  int counter = 0;
  // Here I ask the user to enter his string.
  printf("Write a string: ");
  fgets(string, sizeof(string), stdin);
  // Loop for getting the amount of words in the string.
  while (string[counter] != '\0') {
    counter++;
    if (string[counter] == ' '){
      words++;
    }
  }

  printf("Your string has %i words.", words);

  return 0;
}