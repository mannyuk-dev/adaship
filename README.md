## Overall summary

This document outlines the development of a variation of the game Battleship. Battleship is a war-themed board game for two players in which the opponents try to guess the location of their opponent's warships and sink them. In this variation, you have the option to play against a computer, play against a person, or have the computer play by itself and also this variation has the option to increase the size of the board. Each player hides their ship on a a console generated grid containing vertical and horizontal coordinates like Excel. Players take turns calling out row and column coordinates on the other player's grid to identify a square that contains a ship.  Neither you nor the other player can see the other's board. The game is won when one player has sunk all the other players ships. 
In order to achieve this, I’ll allow the player to setup his own board by placing multiple ships of different sizes as outlined in the requirements. Since the size of the board and the length of the ships may vary and should have the option to be changed, all the information needed to play the game would be placed in a config file and read using file reader algorithm.
I’ll would need to prompt a player to take their turn at hitting a ship by inputting a coordinate. If a player hits a ship, the coordinate will show an X. # will indicate when a player misses.  For example, if you call out A3 and your opponent does not have any ship located at A3, the console would output the # symbol on the opponent’s board. When all the squares that one your ships occupy have been hit, the ship will be sunk i.e. destroyed.  As soon as all of one player's ships have been sunk, the game will be ended indicating the winner and loser.


## User Stories 
•	As a user, I want to start a game against a computer. 
•	As a user, I want to fire a torpedo at an opponent’s board. 
•	As a user, I want to place a ship on a board. 
•	As user, I want to know when a specific ship has been fully destroyed. 
•	As a user, I want to be alerted when I win or lose the game. 
•	As user, I want to know when a specific ship has been hit. 
•	As a user, I want to start a game against another player. 
## Epics 
•	Load Game Rules and Board. 
•	Allow users and computer to place ships. 
•	Allow users and computer to fire at ships. 
•	Win conditions of the game. 
## Tasks
•	The player should be able to fire at the opponents ships on a turn by turn basis. 
•	An overall scoreboard should be displayed throughout the game. 
•	When all ships are destroyed player either wins or loses. 
•	If the player hits or misses a ship they should be alerted. 
•	If an opponent’s ship is hit or missed they should be alerted. 
•	If an opponent’s ship is destroyed they should be alerted. 
•	Load game board and ships from a config file. 
•	The user should have the ability to change the size of the board and ships. 
•	Allow players to place ships of specific sizes on a board. 


## Reflective review, opportunities to improve and continued professional development.
Overall, the the dev
The code below shows an example of code duplication. This code could have been improved by placing it in a single function and then called where appropriate. Code duplication can be very hard to  maintain especially when there is a bug as it can be very hard to modify all the instances of that particular code, not easy to test etc. 

