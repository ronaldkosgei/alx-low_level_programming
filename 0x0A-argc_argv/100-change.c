#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including program name)
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int amount, quarters, dimes, nickels, pennies, total_coins;
if (argc != 2)
{
printf("Error\n");
return (1); /* Return an error code*/
}
amount = atoi(argv[1]); /* Convert the argument to an integer*/
if (amount < 0)
{
printf("0\n");
return (0); /* Exit successfully with 0*/
}
quarters = dimes = nickels = pennies = 0;
while (amount >= 25)
{
quarters++;
amount -= 25;
}
while (amount >= 10)
{
dimes++;
amount -= 10;
}
while (amount >= 5)
{
nickels++;
amount -= 5;
}
pennies = amount;
total_coins = quarters + dimes + nickels + pennies;
printf("%d\n", total_coins);
return (0); /* Exit successfully*/
}
