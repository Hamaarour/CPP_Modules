/*
The usage of static ensures that there is only one instance of
 fractional_bits shared across all parts of the program. If 
 the variable were non-static, it would have a separate instance
 for each object or function call, but being static, there is a
 single memory location holding the constant value.
*/