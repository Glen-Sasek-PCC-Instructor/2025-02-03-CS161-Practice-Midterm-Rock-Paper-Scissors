# **CS 161A: Programming and Problem Solving I**

# Midterm Practice Exam 1

| Academic Integrity You may NOT, under any circumstances, begin an assessment by looking for a completed solution on StackOverflow or Chegg or any such website, which you can claim as your own.  All students need to be familiar with the Student Conduct Code. Please check out the [Student Code of Conduct at PCC.](https://www.pcc.edu/student-conduct/conduct/quick-view-of-policy/) This assessment is individual work only. You may not discuss this assessment with anyone. You may not use the internet to search for any answers or any concepts during the exam. It is a closed book, closed internet exam. I may ask you to explain your code verbally. If you cannot satisfactorily explain what your code or solution does, and answer questions about why you wrote it in a particular way, then you should also expect a zero. |
| :---- |

**I understand that acts of academic dishonesty may be penalized to the full extent allowed by the Portland Community College Student Conduct Code, including receiving a failing grade for this exam. I recognize that I am responsible for understanding the provisions of the PCC Student Conduct Code as they relate to this Course Challenge Exam.**

## Your name here.

Have you played rock, paper, scissors before? If not, here are the rules\! A player and the computer will choose either rock, paper, or scissors. To determine the winner, rock beats scissors, scissors beat paper, and paper beats rock. If they choose the same item, it is a tie\!  


## Purpose

The purpose of this practice midterm exam is to test your knowledge of the concepts learned in this course so far:

* Variables and data types  
* Expressions  
* Input and output  
* Conditionals  
* Reading in strings with spaces  
* Random numbers

## Task

* Open the [Algorithmic Design Document](https://docs.google.com/document/d/1Y0kHPoUWHcbH-_0yma7sMCUR0EvLL7CKEvTGTetqEmU/edit?usp=sharing), make a copy, and follow the steps to create your algorithm.

* You must express your algorithm as **pseudocode** or a **flowchart.**

* Write a rock, paper, scissors game between a user and the computer. Look at the **sample runs** below before continuing\!

* Generate a random number 0 to 2 for the computer’s play. 0 \= Rock, 1 \= Paper, 2 \= Scissors. Seed the random number generator prior to generating the number.

* Prompt the user for their name as a string. Their name may include spaces.

* Prompt the user for their play as a char. Valid inputs are R, P, or S, case insensitive (r, p, s must also work).

* If the user enters an invalid play, print an error and end the game.

* If a valid play is entered, determine the winner (see above). **Hint:** You may want to convert the computer play to R, P, or S for comparing. 

* Print a welcome and goodbye message.

* Use only the concepts we have learned so far.

## Criteria for Success

* Test your program using the following sample runs, making sure you get the same output when using the given inputs:

```
Welcome to the Rock Paper Scissors Game!
Enter player name: Mario
What is your play Mario?
Enter r, p, or s: c
Invalid play.
Run the program again!


Welcome to the Rock Paper Scissors Game!
Enter player name: Sonic
What is your play Sonic?
Enter r, p, or s: P
Computer plays P
It's a tie!
Thank you for playing!


Welcome to the Rock Paper Scissors Game!
Enter player name: Mario
What is your play Mario?
Enter r, p, or s: R
Computer plays P
Computer wins!
Thank you for playing!


Welcome to the Rock Paper Scissors Game!
Enter player name: Samus
What is your play Samus?
Enter r, p, or s: R
Computer plays S
Samus wins!
Thank you for playing!
```
* Complete all sections of your Algorithmic Design Document. 

* Include **pseudocode** or a **flowchart** in part d of the design document.

* Please open and compare your work with the [grading rubric](https://docs.google.com/document/d/1OgJpTGzDOtA6GMqi87ggiLgu79zw71-I80jPjC4eZMQ/edit?usp=sharing) before submitting.

* Remember to follow all [style guidelines](https://docs.google.com/document/d/1avQh7119eRLYZg2ctgeJ57eNRr-KgLr56h2eBxi9_dQ/edit?usp=sharing).

* Download your Algorithmic Design Document as a PDF (File \-\> Download \-\> PDF), rename it to mp1.pdf.

* Name your C++ source file  mp1.cpp and upload with mp1.pdf to the D2L assignment.

* Do your own work. Consult the syllabus for more information about academic integrity.
