# 🎯 Guess-a-Number

A simple and fun number-guessing game written in C.

------------------------------------------------------------------------

# 🌟 1. What Is Unique in My Project?

(Mandatory Section -- 2 Marks)

Many students create basic number-guessing games, but **my project
includes unique enhancements** that make it different from the standard
version:

### ✅ My Unique Contributions

-   Added **attempt counter** to show how many tries the player took.\
-   Added **difficulty levels** (Easy, Medium, Hard) with different
    number ranges.\
-   Implemented **input validation**, preventing crashes when invalid
    values are entered.\
-   Added a **replay option** so the user can play multiple rounds
    without restarting the program.\
-   Improved **UI/UX messages** for a smoother experience.\
-   (Optional) Added **colored terminal output** for better visual
    clarity (Linux/Mac).

------------------------------------------------------------------------

# 📌 2. Project Overview

The game randomly generates a number within a selected difficulty
range.\
After each guess, the player receives hints:

-   **Too high**
-   **Too low**

The game continues until the correct number is guessed.

------------------------------------------------------------------------

# 📂 3. Files Included

    guess-a-Number/
    │── guess.c       → Main game source code
    │── README.md     → Project explanation

------------------------------------------------------------------------

# 🖥 4. Screenshots of Output

![Game Output](./Screenshot%202025-11-24%20160542.png)


------------------------------------------------------------------------

# 💻 5. Programming Language Used & Why

### **Language: C Programming**

### **Why C?**

-   Fast and efficient for console-based games\
-   Great for understanding logic building\
-   Beginner-friendly\
-   Works across all major operating systems\
-   Suitable for small interactive games

------------------------------------------------------------------------

# 🧰 6. Libraries, Functions & Techniques Used

### **Libraries Used**

  Library      Purpose
  ------------ ------------------------------------------
  `stdio.h`    Input and output operations
  `stdlib.h`   Random number generation using `rand()`
  `time.h`     Seeding random numbers using system time

------------------------------------------------------------------------

### **Functions Used**

-   `rand()` → Generates random numbers\
-   `srand(time(NULL))` → Ensures random values on every run\
-   `printf()` / `scanf()` → Used for input/output\
-   `if`, `else` statements → Decision-making\
-   `while` loops → Repeated guessing until correct

------------------------------------------------------------------------

### **Techniques Used**

-   Random number generation\
-   Input validation\
-   Difficulty level selection\
-   Iterative hint mechanism\
-   Attempt tracking\
-   Replay system

------------------------------------------------------------------------

# 🚀 7. How the System Works (Features Explanation)

### **Step-by-Step Workflow**

1.  User selects a difficulty level:
    -   Easy (1--50)\
    -   Medium (1--100)\
    -   Hard (1--500)
2.  The system generates a random number within the chosen range.\
3.  User enters guesses.\
4.  System responds with:
    -   "Too high"
    -   "Too low"
    -   "Correct!"
5.  The game displays the total number of attempts.\
6.  User chooses to play again or exit.

------------------------------------------------------------------------

# ▶️ 8. How to Run the Game

### **1. Clone the Repository**

``` bash
git clone https://github.com/girijabhusanpradhan876-wq/guess-a-Number.git
```

### **2. Go to the project folder**

``` bash
cd guess-a-Number
```

### **3. Compile the program (GCC)**

``` bash
gcc guess.c -o guess
```

### **4. Run the program**

``` bash
./guess
```

------------------------------------------------------------------------

# 📝 9. Sample Gameplay

    Choose difficulty: 
    1. Easy
    2. Medium
    3. Hard

    Enter your guess: 50
    Too high! Try again.

    Enter your guess: 25
    Too low! Try again.

    Enter your guess: 34
    Correct! You guessed the number in 3 attempts!

------------------------------------------------------------------------

# 📜 10. License

This project is free to use, modify, and learn from.
