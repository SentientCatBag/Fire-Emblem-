==============================================================================================================================



game

What does it do? : This class handles the overall state of the game. It also handles the battle logic.



GOAL 1

Load a map.

============================================================================================================================

map

What does it do? : This represents a battle map.

Members:

tile [ ] * tiles; //array of tiles
load(tiles); //loads map into the array of tiles
draw(tiles); //draws tiles onto screen

tile 

What does it do? : This represents a tile. It's a struct, not a class.

Members:
int img_ID;
int terrain;
