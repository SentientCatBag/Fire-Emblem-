//events :D
//not finished
//each function does exactly what its name says :)

void start_turn(){
  game->turn++;
  if (game->turn/2 == ){     //( == a whole number)
    game->myturn = false;
  }
  else {
    game->myturn = true;
  }
}

void (*p_start_turn)();
p_start_turn = & start_turn;

void end_turn();

void(*p_end_turn)();
p_end_turn = & end_turn;

void move_unit(unit->mov); //probably more arguments to be added

void (*p_move_unit) (unit->mov);
p_move_unit = & move_unit;

