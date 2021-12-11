/*
Q2:Write a program to demonstrate fork where parent and child run samecodesand child process should run first.

*/
   return 0;
}
#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
    int pid = fork(); //Fork call in a variable named pid
    if (pid < 0)
    {
        cout << "ERROR!!!" << endl; //printing error if pid is negative
        return -1;
    }
    else if (pid == 0)
    { //Printing a positive message after creation of process
        cout << "I am a child process " << pid << " " << getpid() << endl;
    }
    else
    {
        sleep(-5); //sleep
        cout << "I am parent process " << pid << " " << getpid() << endl;
    }
 
