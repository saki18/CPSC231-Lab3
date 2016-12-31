# CPSC231-Lab3
Lab 3 

1.	Download the following zipped file.  It contains the code and data files shown.  Extract and compile them in a project.
https://www.msu.edu/~bowmanm/231/Lab03.zip
•	Lab03.sln, Lab03.vxcproj, Lab03.vcxproj.filters
•	Lab03.cpp
•	School.txt, Fruit.txt
2.	Be sure to put the data files in the same directory as the project code files.  Run the program twice, with each data file.  You should see a short list of strings and integers for each.
Enter file name: School.txt
6 lines in file

8 Books
2 Pens
1 Eraser
40 Paper
5 Pencils
1 Calculator

3.	Add an array of strings and an array of integers to your program.  Modify your input loop so that the data from each line is stored into the array.  After the file is closed, write an output loop that will display the contents of the arrays, similar to the example above.
4.	Update your program so that it uses a string pointer and integer pointer for your arrays.  Use the new command to create storage for your arrays, based on the number of lines at the beginning of each file.  Read the data into the arrays, then output the arrays.  Be sure to clean up your memory with the delete command at the end of the program.
5.	Run your program twice, with each data file as input.

What to Hand In
Print a copy of your Lab03.cpp file, along with output from runs using both data files.


Extra Credit
Do this only after completing the previous steps.  Add a function to sort your arrays, using the declaration below.  Output the arrays after sorting them.  Hand in your code file and output from runs with both files.
void sort(string *,int *,int);
