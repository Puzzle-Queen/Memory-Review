#include <iostream>
using namespace std;

struct Person
{
    //char name[32];
    //int id;
};
int square(int i)
{
	i = (i * 2);
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int somenumber = 9;
	
	// declare a int reference and set it to the int variable above
	int& reference = somenumber;

	// output the int variable
	cout << somenumber << endl;

	// set the int reference to some number
	reference = 23;
	
	// output the int variable
	cout << somenumber << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
	// the value of the int variable was changed to the value of the reference

	// output the address of the int variable
	//cout << &somenumber << endl;
	// output the address of the int reference
	//cout << &reference << endl;
	// are the addresses the same or different? (insert answer)
	// The addresses are actually the same because it references the int variables address


	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	square(somenumber);

	// output the int variable to the console
	cout << somenumber << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	cout << square(reference) << endl;
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	// set the int pointer to the address of the int variable created in the REFERENCE section
	int ptr-> nullptr;

	// output the value of the pointer
	// what is this address that the pointer is pointing to? (insert answer)
	// output the value of the object the pointer is pointing to (dereference the pointer)

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section

	// output the dereference pointer
	// output the int variable created in the REFERENCE section
	// did the int variable's value change when using the pointer?

	// ** ALLOCATION/DEALLOCATION **
	//
	// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	// output the pointer value, this should be the address of the int allocated on the heap
	// output the dereference pointer
	// deallocate the int pointer to free up the memory

	// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4-6
	// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	// use a for loop and output each of the ints in the array
	// use a for loop and output the address of each of the ints in the array
	// deallocate the int pointer to free up the memory block (remember it's an array)

	// ** STRUCTURE **
	//
	// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
	// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
	// use a for loop and output the name and id of each person in the array 
	// deallocate the person pointer to free up the memory block (remember it's an array)
}

