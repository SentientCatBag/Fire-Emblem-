//events :D
//not finished
//each function does exactly what its name says :)
//right now, these are dummy functions
#include <iostream>

void start_turn(){
  turn++;
  std::cout << "\nstarting turn: " << turn;
  //if (turn/2 == ){     //( == a whole number)
    //myturn = false;
  //}
  //else {
    //myturn = true;
  //}
};

void (*p_start_turn)();
p_start_turn = & start_turn;

void end_turn(){
  std::cout << "\nend of turn";
};

void(*p_end_turn)();
p_end_turn = & end_turn;

void move_unit(unit->mov){ //probably more arguments to be added
std::cout << "\nthe unit : " << unit->name << " can move : " << unit->mov << " squares "
};

void (*p_move_unit) (unit->mov);
p_move_unit = & move_unit;

