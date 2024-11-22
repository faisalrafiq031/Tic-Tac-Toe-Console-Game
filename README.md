# Tic-Tac-Toe Console Game

## Description
This is a simple **Tic-Tac-Toe** game that can be played in the console/terminal. The game allows two players to take turns and mark X and O on a 3x3 grid, trying to get three of their marks in a row, column, or diagonal. The game is designed to be easy to run and play in any C++ development environment.

## Features
- **Two Player Gameplay**: Players take turns to make their move by entering a number corresponding to a grid position.
- **Grid Representation**: A 3x3 grid is displayed in the console where players can see the current state of the game.
- **Win Detection**: The game checks for a winner after each move.
- **Draw Detection**: If all grid spaces are filled and there is no winner, the game declares a draw.
- **Player Input**: Players can select the position for their move using numeric input.

## Prerequisites
- **C++ Compiler**: You need a C++ compiler like **g++** (part of MinGW-w64) to compile and run the game.
  - For **Windows**, you can use [MinGW-w64](https://sourceforge.net/projects/mingw-w64/).
  - For **Linux/macOS**, the C++ compiler is usually pre-installed with `g++`.

## Installation

### Step 1: Install a C++ Compiler
1. If you're using **Windows**, download and install MinGW-w64 from [here](https://sourceforge.net/projects/mingw-w64/).
2. If you're using **Linux/macOS**, ensure `g++` is installed. You can check if it's installed by typing `g++ --version` in the terminal.

### Step 2: Clone or Download the Code
Clone this repository or download the files to your local machine:
```bash
git clone https://github.com/faisalrafiq031/tic-tac-toe-console-game.git
```

### Step 3: Compile the Code
Open the terminal/command prompt and navigate to the directory containing the main.cpp file. Then compile the code:

```bash
g++ -o tic-tac-toe-console-game main.cpp
```
### Step 4: Run the Game

After compiling the code, run the game by entering:

```bash
./tic-tac-toe   # On Windows, use `tic-tac-toe-onsole-game.exe
```

## Usage
1. The game will display a 3x3 grid, initially empty.
2. Player 1 will be marked as X, and Player 2 will be marked as O.
3. Players take turns entering a number (1-9) to place their mark on the grid. The number corresponds to positions on the grid:

```bash
1 | 2 | 3
---------
4 | 5 | 6
---------
7 | 8 | 9
```

4. The game will check for a win or draw after each turn.
5. The game will announce the winner, or if the game ends in a draw.

## Code Structure
<b>main.cpp:</b> The main game logic, including the board setup, player input, win condition checks, and display functionality.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
