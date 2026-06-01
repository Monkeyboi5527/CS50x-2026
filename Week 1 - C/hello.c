#include <stdio.h>
// Files ending in .h is a header file
// Header files are code that other people wrote that you can use
// A library

// manual.cs50.io -  CS50’s C documentation
 #include <cs50.h>

// I am using CLion

// Specific for me
// cd "folder name"

// In terminal Command Line Interface (CLI)
// $ code hello.c
// creates new C file

// Graphical User Interface
int main(void)
{
    printf("hello, world\n");
    // To compile
    // $ make hello
    // creates a new app called hell.exe
    // Compiles Source Code into Machine Code 
    
    // Specific for me
    // Use the run button/function
    
    // To run
    // ./hello
    // Since the program is somewhere in the folder it finds and runs it
    
    // clear
    // Clears the terminal
    
    /*
    * C:\Saril Laguri\Coding\CS50x-2026\Week 1 - C\hello.c:15:29: error: expected ';' before '}' token
   15 |     printf("hello, world\n") 
      |                             ^
      |                             ;
......
   30 | }
      | ~                            

     */
    // In line 15 there is a missing semicolon
    
    // To make cs50.h I had to use WSL and Ubuntu
    // To use cs50.h on Windows with CLion:
    // 1. Enable WSL (Windows Subsystem for Linux) and install Ubuntu
    // 2. In Ubuntu terminal, install build tools:
    //    sudo apt-get install cmake gcc g++ gdb build-essential
    // 3. Install cs50 library from source:
    //    wget https://github.com/cs50/libcs50/archive/refs/heads/main.zip
    //    sudo apt install unzip && unzip main.zip
    //    cd libcs50-main && sudo make install
    // 4. In CLion, add WSL as the toolchain (Settings -> Toolchains -> + -> WSL)
    // 5. In CMakeLists.txt add:
    //    include_directories(/usr/local/include)
    //    link_directories(/usr/local/lib)
    //    target_link_libraries(your_project cs50)
    // 6. To compile manually in Ubuntu terminal:
    //    cc file.c -lcs50 -L/usr/local/lib -o hello && ./hello
    
    // Scratch
    // say "What's your name?" and wait
    // Oval Answer variable
    
    // C
    string answer = get_string("What's your name?\n");
    printf("hello, %s\n", answer);
    // %s us the placeholder for a string
    // the value for the placeholder is outside the quotes.
    
    // Linux Terminal Commands:
    // cd folder_name   - Change directory (navigate into a folder)
    // cp file dest     - Copy a file to a destination
    // ls               - List files and folders in current directory
    // mkdir name       - Make a new directory (folder)
    // mv file dest     - Move (or rename) a file
    // rm file          - Remove (delete) a file
    // rmdir folder     - Remove an empty directory
}