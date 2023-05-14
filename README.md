# CPP

## CPP00
Namespaces, classes, member functions, stdio streams,
initialization lists, static, const, and some other basic
stuff

## CPP01
Memory allocation, pointers to members,
references, switch statement

## CPP02
Ad-hoc polymorphism, operator overloading
and Orthodox Canonical class form

## Definitions of C++ (Language)
* **cout** -> Standard OutPut (read it: see out)
* **cin** -> Standard Input
* **::** -> Scope resolution operator
* **<<** and **>>** -> Operators
* **<<** -> insertion operator
* **<< std::endl** -> endline. '\n'
* **Destructor (~)** Will destroy the functions (local variable will be destroyed)
* **Member attributes** Variables in class (Prop/attributes in OO)
* **Access Specifiers** As equals **Access Modifiers** in C#
* **Access Specifiers Public** Members are accessible from outside the class
* **Access Specifiers Private** Members cannot be accessed (or viewed) from outside the class
* **Access Specifiers Protected** Members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
* **accessors c++** Get and Set
* **Attributes** 'attributes in class' are modifiers that can modify the behavior class
* **Methods** The same as functions in C
* **Const** Const in the end of function - will not allow change the value inside of this method
* **Comparison** Override a method to do something different: To compare 2 objects, we must build a method to do this, and specify what we
want to result of this comparison (will be used in CPP02)
* **setw** Set the field width and right align
* **find_first_of** Searches the string for the first character that matches any of the characters specified in its arguments.

# Definitions of Object Oriented Programming (OOP)
### Namespace:
A namespace is a declarative region that provides a scope to the identifiers inside it (e.g. names of methods, variables...)
Namespaces are typically used to avoid name collisions, which can occur when two different parts of a program use the same identifier for different purposes.
### Class
A class is a user-defined type that represents a collection of data and methods. **More Info**: Struct and Class will be the same in C++. The only one difference is that Scope of class is Private by default. Scope of struct is public by default.
### Initialization List
Is a feature that allows you to specify the initial values for the member variables of a class when you create an object of that class. It is typically used in the constructor of the class. **MoreInfo**: When pass in the method the initialization of parameters

### Accessors
Knows as Getters and Setters too. They help to control access to class data and maintain data encapsulation.
Generate function to get and set a (private) variables values.


## CPP00-Ex00 - Megaphone
Create a small program named **megaphone** that takes strings as parameters and outputs them in uppercase.
This is an introduction to stdio streams and the string class.

### CPP00-Ex00 -Usage
```Bash
$ make run
#or
$ ./megaphone "String to" "be CapTaliZed" "VERIFY if everything well be FiNe!!00"
```
## CPP01-Leaks of memory
```Bash
#Valgrind ex00
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./00-brainz

#Valgrind ex01
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./01-moar-brainz

#Valgrind ex02
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./02-brain

#Valgrind ex03
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./03-un-violence

#Valgrind ex04
#code arq / add something
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./04-replace arq a X

#Valgrind ex05
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./05-harl
```




# Links
* [Intranet Videos](https://elearning.intra.42.fr/notions/piscine-c-d00-c-basics/subnotions)
* [Lucas Video](https://www.youtube.com/watch?v=TnrQMtxPeEg)
* [Stack-vs-heap-memory-allocation](https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/)
* [cin-ignorenumeric-limitsstreams](https://stackoverflow.com/questions/25020129/cin-ignorenumeric-limitsstreamsizemax-n)
* [cin.ignore](https://pt.stackoverflow.com/questions/319622/quando-usar-o-cin-ignore-em-c)
* [Change name FSoutput](https://www.techiedelight.com/convert-std-string-const-char-cpp/)
* [delete key word](https://www.geeksforgeeks.org/delete-in-c/)
* [Article 1](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html)
* [Article 2](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html)
* [Article 3](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)
* [erkeley](https://en.wikipedia.org/wiki/University_of_California,_Berkeley#Notable_alumni.2C_faculty.2C_and_staff)
* [Article 4 (Berkeley)](https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html)
