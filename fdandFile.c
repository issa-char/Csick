/**
 * File Handling in C:
 * A file is a collection of data stored in memory.
 * File handling is how we work with these files (open,read,write and close).
 * Two main approaches: FILE for simplicity and file descriptors for control.
 *
 * Approach 1: Using FILE Data Type <stdio.h>
 * - Simplicity and ease of use
 * - Higher-level functions for reading and writing files
 * - Buffered I/O for efficient operations
 *
 * Approach 2: Using File Descriptors
 * - Lower-level control over file operations
 * - Direct system calls like open, read, write, and close
 * - Suitable for specialized tasks and interacting with non-file resources.
 */

/**
 * Approach one
 */

#include <stdio.h>

FILE *ptr



