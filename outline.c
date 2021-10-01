/* Restauraunt Bill
- Declare 4 floats and assign prices for salad, soup, sandwich, and pizza in an array
- Declare float pointer to point at indexes of float array
- Pointer will randomly generate a number between 0-3, which will then point to the address of array's index
- The user will be asked to enter the to input two floats as percentages, one for tax, and the other for tip
- Program calculates tip and tax to be added to total bill
- Print out details of bill, including meal cost, tax amount, tip amount, and total bill
*/

/* Number Guessing Game
- Declare an 2 ints and assign one to a number that != 3
- Assign second int to be 10 (Default max number)
- Create a while loop that displays menu and will break if int == 3
- In the while loop, modify 1st int with scanf to select options
- If 1 selected, call playGame function, which generates a number between 1 - max number
- User will guess number until correct within while loop; if correct while loop breaks, returning back to menu while loop
- If 2 selected, user is put into another while loop that prompts the user to input a new max number; While loop will be broken if number is positive and <= RAND_MAX
- Number will then be set as new max number
*/

/* Number guessing game save branch
- Number guessing file now writes and reads "save.txt"
- When user ends game, program writes value of max number into "save.txt"
- When user starts program, program reads "save.txt" and sets integer inside text file as max number.
- If "save.txt" doesn't exist, max number will default to 10 and when program ends, "save.txt" will be created
*/
