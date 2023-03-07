# Qt-5-Cpp-Codes

Repositorie created to help during the course 'Qt 5 C++ GUI Development For Beginners : The Fundamentals'.

# C++ <iostream>

When I add the lib #include <iostream>, I can use:

* cin, that is a console input.
* cout, that is a console output.
* cerr, for console error.
* clog, for log messages.

I can, use the standard libary function by adding, right before the main(), the line:

```c++
    using namespace std; //declaring standard library
```

Or, instead I can use the library as follows:

```c++
std::cout << "Hello World!" << std::endl;
```  

Those are not really need, when I use the 'cout', but we can practice.
    
## Code 1

Let's create a simple, with no dependencies, C++ application.

![image](https://user-images.githubusercontent.com/58916022/223400025-18538bd1-2276-4c39-9ade-dfc51f88bf7b.png)

Then we will use again 'qmake' as Build System, and 'MinGW 32-bit' as kit.

The sw will generate the following code (c++):

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "endl jumps a line" << endl;
    return 0;
}
```
As result we will have on console:

![image](https://user-images.githubusercontent.com/58916022/223409501-df374d63-b23c-4245-80cb-b022686a2a37.png)

An C code would look like:

```c
#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    printf("the line plus n jumps a line");
    return 0;
}
```

But Qt Creator didn't generate our .exe file. Checking the Q&A on Udemy I found the solution:

![image](https://user-images.githubusercontent.com/58916022/223410515-c1510c85-127f-41d3-b62e-199a82c7d5e4.png)

Now I have the solution on terminal.

![image](https://user-images.githubusercontent.com/58916022/223410611-28540c80-7317-4d9f-b3a5-9a7866d065be.png)
    
## Code 2   

Let's use the 'cerr' function.
    
```c++
std::cerr << "There was an error" << std::endl;
```
    
![image](https://user-images.githubusercontent.com/58916022/223430602-8fcdc57f-beba-471e-b01a-1465637c3a4c.png)

## Code 3       
    
Let's use the 'clog' function.    

```c++
std::clog << "This is a log message" << std::endl;
```
    
![image](https://user-images.githubusercontent.com/58916022/223430851-995f25d5-581f-45dd-9b3e-f3a644292f9a.png)
    
## Code 4

Now let's read the user name and store it on a variable and then write the name on the screen.

```c++
#include <string>
std::string name;
std::cout << "Please type in yout first name: ";
std::cin >> name;
std::cout <<"Your first name is: " << name << std::endl;
```
    
![image](https://user-images.githubusercontent.com/58916022/223431309-cf9846be-f84d-45e0-ae91-6e6f2b7169cf.png)
    
# C++ <string> 

in the Qt IDE, when using MinGW, the types are:

| Type | Size | Description |
| --- | --- | --- |
| int | 4 bytes | stores integers |
| char | 1 byte | stores characters |
| bool | 1 byte | stores booleans or logical values |
| float | 4 bytes | stores single precision floating point number |
| double | 8 bytes | stores double precision floating point numbers |
| wchar_t | 2 bytes|  | 

To check the size we can use:
```c++
count << "Size of int: " << sizeof(int) << " bytes" << endl;
```

Type modifiers:
* Signed, for negative and positive.
* Unsigned, only for positive.
* Short, to downsize memory space ocupied by variable.
* Long, to expand and ocupe more space.

```c++
    string hello = "hello world";
    unsigned int number = 7;

    std::cout << "Message: " << hello << endl;
    std::cout << "Number: " << number << endl;
```
    
Results:
    
![image](https://user-images.githubusercontent.com/58916022/223439407-40bd812e-37eb-4c9a-beb2-f9dac373654d.png)

# Operators in C++

Math operators works in **C++** same way as **C**. We have: + - * / % ++ --.

```c++
cout << "a + b" << a + b << endl;
```

To type cast a variable we can:

```c++
cout << "a / b" << (float) a / b << endl;
```

Same we can say about the logical operators. We have: > >= <= < != ==.

# Flow control in C++

We use loops in C++ same way as in C.

We have **for** loop:

```c++
for (variable equal to; logical condition; action as incrementing the variable){
	// logic;
}
```

We also have: 'while(condition){}' and the 'do {} while(condition)'.

# C++ <stdlib.h> and <time.h>

Course and code shows an example that uses the operator %, together with time and rand function to generate random number based on time.

```c++
#include <stdlib.h> 	// to use srand, rand
#include <time.h>	// to use time functions
srand (time(NULL));
```

We have some warnings:

* **Nullability Issue**: This is giving us a hint that in the C++ 11 standard, NULL isn't recomended anymore to represent a null pointer. There is a new keyword "nullptr" for that. We're going to fix that in a moment.

* **Value Conversion Issue**: Here we have a value conversion issue. We are getting a value from the time() function , which returns a long, and passing that value to srand() which expects unsigned int. The compiler is warning us again here that we may loose on the precision of the number as we are shrinking its range. (long covers a wider range than unsigned int). We get rid of the warning by explicitly casting from long to unsigned int.

```c++
srand((unsigned int)time(nullptr));
```
* In C++ 11 compliant compilers, this is going to give another warning . Something like "use of old style cast". In other words , this warning is saying that we are transforming a data type to another ( casting) the old way. C++ 11 has many different ways to cast data types but we're just going to use static_cast that I find to be the simplest one:

```c++
srand (static_cast<unsigned int>((time(nullptr))));
```

![image](https://user-images.githubusercontent.com/58916022/223446468-80263092-fdfd-45de-b25b-5ca98826e4a4.png)

# Functions

I can have two functions with same name and different types, such as:

```c++
int sumation (float a, float b){
	return a + b;
}
float sumation (float a, float b){
	return a + b;
}
```

But when we call the float type function, we must add de number togeter with a **f**, such as:

```c++
	cout << "The sum of 3.3 and 7.2 is:" << sumation(3.3f,7.2f) << endl;
```
    
