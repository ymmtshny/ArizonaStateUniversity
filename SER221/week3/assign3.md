<h1>Programming Assignment 3</h1>
<h2>Classes, Inheritance & Pointers</h2>
<h3>Instructions:</h3>
• This assignment is to be turned in on Blackboard . You should submit ‘.cpp’ files with<br>
names mentioned after each problem.<br>
• Make sure your programs compile (without any compiler errors). You will not receive<br>
any credit if your program does not compile. If you are unable to complete any<br>
of the programs, submit the parts that work (with no compiler errors) for partial credit.<br>
• Your grade will be based on functionality (does the program do what it is suppose<br>
to do), readability (is the code nicely formatted), and understandability (are the<br>
literals meaningful and is the code modular and well documented with appropriate<br>
comments). Try to incorporate all the good programming practices and styles. For<br>
example, WRITE COMMENTS, declare all constants and variables at the top of<br>
a function, store quantities using the appropriate data types, declare function prototypes,<br>
etc.
<hr>
<h3>1. Inheritance and Polymorphism (30 points)</h3>
<p>Design a Ship class that has the following members:<br>
• A member variable for the name of the ship (a string)<br>
• A member variable for the year that the ship was built (an int)<br>
• Appropriate constructors, accessors and mutators<br>
• A print function that displays the ship’s name and the year it was built.<br>
Design a CruiseShip class that is derived from the Ship class. The CruiseShip class should<br>
have the following members:<br>
• A member variable for the maximum number of passengers (an int)<br>
• Appropriate constructors, accessors and mutators<br>
• A print function that overrides the print function in the base class.<br>
The CruiseShip class’s print function should display only the ship’s name <br>
and the maximum number of passengers.<br>
<br>
Design a CargoShip class that is derived from the Ship class. <br>
The CargoShip class should have the following members:<br>
• A member variable for the cargo capacity in tonnage (an int)<br>
• Appropriate constructors, accessors and mutators<br>
• A print function that overrides the print function in the base class. <br>
The CargoShip class’s print function should display only the ship’s name and <br>
the ship’s cargo capacity. To demonstrate the working of the classes create two objects <br>
of each type. The first object (for each type) must be created using the constructor <br>
that takes values for all of the data members. The second object must be created using <br>
the default constructor and mutators methods must be used to set the values of the data members.<br>
Also, make sure to get inputs from the user for each of the data member and NOT hardcode <br>
them in the program. You can define variables for getting these user inputs and then pass<br>
these variables to the constructors and the mutators. The program then should call <br>
each object’s print function to display the data stored in them.<br>
Filename: ship.cpp</p>
<hr>
<h3>2. Reverse (20 points)</h3>
<p>Write a program that takes a string as input (from the user) and then reverses the contents of<br>
the string. Your program should work by using two pointers. The “head” pointer should be<br>
set to the address of the first character in the string, and the “tail” pointer should be set to<br>
the address of the last character in the string (i.e. the character before the terminating null).<br>
The program should swap the characters referenced by these pointers, increment “head” to<br>
point to the next character, decrement “tail” to point to the second to last character, and<br>
so on, until all characters have been swapped and the entire string reversed.<br>
Hint: Use the length of the string to calculate the address of the last character in the string.<br>
Loop until head >= tail. You may have to convert your string variable to an array of characters.<br>
Filename: reverse.cpp</p>