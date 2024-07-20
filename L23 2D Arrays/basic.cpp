/*
When passing a two-dimensional array to a function,
you must specify the number of columns as a constant
when you write the parameter type, so the compiler can
pre-calculate the memory addresses of individual
elements1234. A two-dimensional array in C++ is
really an array of arrays, so the parameter you're
passing is a pointer to the array containing the
first column. To access the second column, the pointer
must be incremented past the first column. To do that
the compiler must know the size of the column, just as
it must know the size of any other array element1.


*/