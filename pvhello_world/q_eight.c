/* The -S is used already to generate assembly
 * code for a source file named filename but 
 * because it is an intel syntax, the -masm=intel
 * is included. */
gcc -S -masm=intel filename
