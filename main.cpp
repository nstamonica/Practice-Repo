// Exercise 1
// TODO: Declare an integer variable 'x' and initialize it to 42
int x = 42;

// TODO: Declare a pointer 'ptr' that points to x
int* ptr = &x;

// TODO: Print the value of x using both x and *ptr
std::cout << x << std::endl;
std::cout << *ptr << std::endl;

// TODO: Print the address of x using both &x and ptr
std::cout << &x << std::endl;
std::cout << ptr << std::endl;

// TODO: Change the value of x to 100 using the pointer
int* ptr2 = &x;
*ptr2 = 100;


// Exercise 2
void swap(int* a, int* b) {
    // TODO: Implement swap using pointers
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Exercise 3
// TODO: Create an array of 5 integers
// TODO: Use pointer arithmetic to:
//   - Print all elements
//   - Find the sum of all elements
//   - Find the maximum element
// Do NOT use array indexing (no brackets [])
int numbers[5]

