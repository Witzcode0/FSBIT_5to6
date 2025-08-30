// An identifier is a name used to identify a variable, function, array, structure, or any other user-defined item. Identifiers are crucial in C because they give programmers a way to refer to different elements of the program in a readable and understandable manner.

Identifiers rules:

1] Characters Allowed: [a-z, A-Z, 0-9, _]
2] you cannot start with the digit. For example : 1_level, level1,level_1, _1level
3] you cannot use special symbols [!, @, #, $, %, ^, ......]
4] white-space are not allowed. for example:  first name, first_name, FirstName, FirstName
5] identifier must be unique. 
6] identifier is case sensitive. Example: firstname, FIRSTNAME, FirstName
7] you can not use keywords as an identifier

Valid Identifiers:
-----------------
• int age;
• float total_balance;
• char firstName[50];
• _score; // valid but discouraged for general use
• sum2;


Invalid Identifiers:
-------------------
• int 2ndPlayer;    // Cannot start with a digit
• float total#balance; // Contains invalid character '#'
• char first Name[50]; // Contains a space
• int for; // 'for' is a keyword
• double &amount; // Contains invalid character '&'

// Naming convention

// snack_case:
// area_of_circle, first_name

// camelCase:
// areaOfCircle, firstName

// PascalCase:
// AreaOfCircle. FirstName

// CONSTANT:
// PI, AREA_OF_CIRCLE