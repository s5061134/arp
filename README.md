# ARP Assignment 1- 5061134-Abu Huraira Shaik.

# Simple Programme using Pipe

In this program the user inputs two numbers A and B, random signal is sent through the pipe, every time when a signal is sent it computes the sum of A and B and increment with respect to last time and the out put is stored in a log file.

# Installing and Running.

Machine requires a C compliler like gcc to Run the programme OR can be run in Ubuntu Shell. 

To run the program, Type the command $ Gcc arp1.c -o arp
                                       $./arp

# About the Code.

Two numbers a&b should be entered by the user, the system takes the input which enters the Pipe.

In Parent, output is to child via pipe[1] and in Child, input os from Pipe[0] and Output is via stdout. 

