CompSci Society C Tutorial 1
==============================

This is an introductory tutorial for the C programming language. By no means willl yo ulearn everything you need to form this tutorial but it serves to expose you to how C handles the basic features of any language.

You are expected to learn as much as you can on your own.

REMEMBER:
Google is your friend:)

Objectives
-----------
This Tutorial will serve to introduce you to the following:
* How to setup your developement environment for C developement `using netbeans on linux`
* Common C libraries and how to use them
* Reading data from the user (input)
* Printing information to the user (output)
* Calculations and assignment of variables
* Control statements -- `IF, FOR, WHILE`
* Writing and calling functions
* Variable types -- string, double, integer
* Escape characters eg. `\n \t \r`

Introduction
----------------
This repsotory contains the code for this tutorial in a `netbeans` project, as well as an example of what the final application will be able to do.
The sample final application is locateed in the `bin` directory and called `c_tutorial_1_-_horoscope__complete_.exe` and can be run in a `Windows` OS only.


You are going to write a C program that takes the user's birth month and day, tells them his/her zodiac sign, and then, his/her horoscope.
Code is given in the `main.c` file.

Please add the following missing code to the file given:
* Prompt the user to enter a specific number for each birth month.
* List the options with the corresponding birth month. January was done as an example.
* Prompt the user to enter their birth day and accept the answer
* Call the loading screen function at the point specified in the code
* Enter the conditions necessary to determine the zodiac sign of a user within each month. Each case is a different month. Add the other cases for the other months.  January was done for you.
* Print the user's birthday (month and day) and horoscope.
* Write a horoscope for each sign.

Bonus `20 points`
-------------------
* Decorate your output and/or create your own loading screen function. -- `5 points`
* Allow the program to enter more than one birthdays at a time, using a `WHILE` or `FOR` loop -- `15 points`