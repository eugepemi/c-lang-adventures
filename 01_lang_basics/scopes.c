/*
MACRO: a constant value that can be used in the code, defined in the preprocessor, not in the compiler, 
not allocated in memory, just a text replacement 
*/ 
#define PI 3.14159 

int globalVariable = 10; // outside the scope of the main function, this variable is accesible

int main(){

    int localVariable = 10; // outside the scope of the main function, this variable is not accesible

    return 0;
}

// Delimiter for scope will be the curly braces: {}