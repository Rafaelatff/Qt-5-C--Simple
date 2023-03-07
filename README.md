# Qt-5-C--Simple
Repositorie created to help during the course 'Qt 5 C++ GUI Development For Beginners : The Fundamentals'.

## Code 1

Let's create a simple, with no dependencies, C++ application.

![image](https://user-images.githubusercontent.com/58916022/223400025-18538bd1-2276-4c39-9ade-dfc51f88bf7b.png)

Then we will use again 'qmake' as Build System, and 'MinGW 32-bit' as kit.

The sw will generate the following code (c++):

´´´c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "endl jumps a line" << endl;
    return 0;
}
´´´
As result we will have on console:

![image](https://user-images.githubusercontent.com/58916022/223409501-df374d63-b23c-4245-80cb-b022686a2a37.png)

An C code would look like:

´´´c
#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    printf("the line plus n jumps a line");
    return 0;
}
´´´

But Qt Creator didn't generate our .exe file. Checking the Q&A on Udemy I found the solution:

![image](https://user-images.githubusercontent.com/58916022/223410515-c1510c85-127f-41d3-b62e-199a82c7d5e4.png)

Now I have the solution on terminal.

![image](https://user-images.githubusercontent.com/58916022/223410611-28540c80-7317-4d9f-b3a5-9a7866d065be.png)







