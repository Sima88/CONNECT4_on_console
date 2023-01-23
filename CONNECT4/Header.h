#pragma once
void draw_board(char board[6][7]);
void player_plays(char board[6][7], char current_smiley, int player, int& number_of_smileys_in_the_column1,
	int& number_of_smileys_in_the_column2,
	int& number_of_smileys_in_the_column3,
	int& number_of_smileys_in_the_column4,
	int& number_of_smileys_in_the_column5,
	int& number_of_smileys_in_the_column6,
	int& number_of_smileys_in_the_column7);
bool check_row(char board[6][7]);
bool check_column(char board[6][7]);
bool diagonal_check(char board[6][7]);
bool reverse_diagonal_check(char board[6][7]);
bool four_same_characters(char a, char b, char c, char d);
bool do_you_want_to_play_again();
int play_again();
