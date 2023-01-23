#include<iostream>
#include "Header.h"
using namespace std;






int main() {
	char board[6][7] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ',
						 ' ', ' ', ' ', ' ', ' ', ' ', ' ',
						 ' ', ' ', ' ', ' ', ' ', ' ', ' ',
						 ' ', ' ', ' ', ' ', ' ', ' ', ' ',
						 ' ', ' ', ' ', ' ', ' ', ' ', ' ',
						 ' ', ' ', ' ', ' ', ' ' ,' ', ' ' };

	int number_of_smileys_in_the_column1 = 0;
	int number_of_smileys_in_the_column2 = 0;
	int number_of_smileys_in_the_column3 = 0;
	int number_of_smileys_in_the_column4 = 0;
	int number_of_smileys_in_the_column5 = 0;
	int number_of_smileys_in_the_column6 = 0;
	int number_of_smileys_in_the_column7 = 0;
	char name[10];
	char second_name[10];



	draw_board(board);
	cout << "FIRST PLAYER " << (char)2 << " ENTER YOUR NAME" << endl;
	cin >> name;
	cout << "SECOND PLAYER " << (char)1 << " ENTER YOUR NAME" << endl;
	cin >> second_name;

	cout << "_____________________________________________________" << endl;

	
	for (int i = 1; i < 43; i++) {
		cout << name << " turn" << endl;
		player_plays(board, 2, 0, number_of_smileys_in_the_column1,
			number_of_smileys_in_the_column2,
			number_of_smileys_in_the_column3,
			number_of_smileys_in_the_column4,
			number_of_smileys_in_the_column5,
			number_of_smileys_in_the_column6,
			number_of_smileys_in_the_column7);
		draw_board(board);
		if (check_column(board) == true || check_row(board) == true || diagonal_check(board) || reverse_diagonal_check(board)) {
			cout << name <<" IS WINNER" << endl;
			return do_you_want_to_play_again();
		}
		if (i == 42) {
			cout << "DRAW" << endl;
			return do_you_want_to_play_again();
		}
		cout << second_name << " turn" << endl;
		player_plays(board, 1, 0, number_of_smileys_in_the_column1,
			number_of_smileys_in_the_column2,
			number_of_smileys_in_the_column3,
			number_of_smileys_in_the_column4,
			number_of_smileys_in_the_column5,
			number_of_smileys_in_the_column6,
			number_of_smileys_in_the_column7);
		draw_board(board);
		if (check_column(board) == true || check_row(board) == true || diagonal_check(board) || reverse_diagonal_check(board)) {
			cout << second_name << " IS WINNER " << endl;
			return do_you_want_to_play_again();;
		}
		if (i == 42) {
			cout << "DRAW" << endl;
			return do_you_want_to_play_again();
		}

	}
	
}






