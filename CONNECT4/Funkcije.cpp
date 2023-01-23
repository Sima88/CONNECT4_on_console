#include <iostream>
#include "Header.h"
using namespace std;


void draw_board(char board[6][7]) {
	system("cls");
	cout << "_______________CONNECT 4_______________" << endl;
	cout << "" << endl;

	cout << "-1-|--2--|--3--|--4--|--5--|--6--|--7--|" << endl;
	cout << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |  " << board[0][3] << "  |  " << board[0][4] << "  |  " << board[0][5] << "  |  " << board[0][6] << "  |  " << endl;
	cout << "---|-----|-----|-----|-----|-----|-----|" << endl;
	cout << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |  " << board[1][3] << "  |  " << board[1][4] << "  |  " << board[1][5] << "  |  " << board[1][6] << "  |  " << endl;
	cout << "---|-----|-----|-----|-----|-----|-----|" << endl;
	cout << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |  " << board[2][3] << "  |  " << board[2][4] << "  |  " << board[2][5] << "  |  " << board[2][6] << "  |  " << endl;
	cout << "---|-----|-----|-----|-----|-----|-----|" << endl;
	cout << board[3][0] << "  |  " << board[3][1] << "  |  " << board[3][2] << "  |  " << board[3][3] << "  |  " << board[3][4] << "  |  " << board[3][5] << "  |  " << board[3][6] << "  |  " << endl;
	cout << "---|-----|-----|-----|-----|-----|-----|" << endl;
	cout << board[4][0] << "  |  " << board[4][1] << "  |  " << board[4][2] << "  |  " << board[4][3] << "  |  " << board[4][4] << "  |  " << board[4][5] << "  |  " << board[4][6] << "  |  " << endl;
	cout << "---|-----|-----|-----|-----|-----|-----|" << endl;
	cout << board[5][0] << "  |  " << board[5][1] << "  |  " << board[5][2] << "  |  " << board[5][3] << "  |  " << board[5][4] << "  |  " << board[5][5] << "  |  " << board[5][6] << "  |  " << endl;
	cout << "----------------------------------------" << endl;
}
void player_plays(char polje[6][7], char current_smiley, int player, int& number_of_smileys_in_the_column1,
	int& number_of_smileys_in_the_column2,
	int& number_of_smileys_in_the_column3,
	int& number_of_smileys_in_the_column4,
	int& number_of_smileys_in_the_column5,
	int& number_of_smileys_in_the_column6,
	int& number_of_smileys_in_the_column7) {



	do {
		do {
			cout << "Enter the column you want to fill (1-7)" << endl;
			cin >> player;
		} while (player > 7 || player < 1);

		if (player == 1) {
			if (number_of_smileys_in_the_column1 == 0)
				polje[5][0] = current_smiley;

			if (number_of_smileys_in_the_column1 == 1)
				polje[4][0] = current_smiley;

			if (number_of_smileys_in_the_column1 == 2)
				polje[3][0] = current_smiley;

			if (number_of_smileys_in_the_column1 == 3)
				polje[2][0] = current_smiley;

			if (number_of_smileys_in_the_column1 == 4)
				polje[1][0] = current_smiley;

			if (number_of_smileys_in_the_column1 == 5)
				polje[0][0] = current_smiley;

			number_of_smileys_in_the_column1++;
			return;
		}

		if (player == 2) {
			if (number_of_smileys_in_the_column2 == 0)
				polje[5][1] = current_smiley;

			if (number_of_smileys_in_the_column2 == 1)
				polje[4][1] = current_smiley;

			if (number_of_smileys_in_the_column2 == 2)
				polje[3][1] = current_smiley;

			if (number_of_smileys_in_the_column2 == 3)
				polje[2][1] = current_smiley;

			if (number_of_smileys_in_the_column2 == 4)
				polje[1][1] = current_smiley;

			if (number_of_smileys_in_the_column2 == 5)
				polje[0][1] = current_smiley;

			number_of_smileys_in_the_column2++;
			return;
		}
		if (player == 3) {
			if (number_of_smileys_in_the_column3 == 0)
				polje[5][2] = current_smiley;

			if (number_of_smileys_in_the_column3 == 1)
				polje[4][2] = current_smiley;

			if (number_of_smileys_in_the_column3 == 2)
				polje[3][2] = current_smiley;

			if (number_of_smileys_in_the_column3 == 3)
				polje[2][2] = current_smiley;

			if (number_of_smileys_in_the_column3 == 4)
				polje[1][2] = current_smiley;

			if (number_of_smileys_in_the_column3 == 5)
				polje[0][2] = current_smiley;

			number_of_smileys_in_the_column3++;
			return;
		}
		if (player == 4) {
			if (number_of_smileys_in_the_column4 == 0)
				polje[5][3] = current_smiley;

			if (number_of_smileys_in_the_column4 == 1)
				polje[4][3] = current_smiley;

			if (number_of_smileys_in_the_column4 == 2)
				polje[3][3] = current_smiley;

			if (number_of_smileys_in_the_column4 == 3)
				polje[2][3] = current_smiley;

			if (number_of_smileys_in_the_column4 == 4)
				polje[1][3] = current_smiley;

			if (number_of_smileys_in_the_column4 == 5)
				polje[0][3] = current_smiley;

			number_of_smileys_in_the_column4++;
			return;
		}
		if (player == 5) {
			if (number_of_smileys_in_the_column5 == 0)
				polje[5][4] = current_smiley;

			if (number_of_smileys_in_the_column5 == 1)
				polje[4][4] = current_smiley;

			if (number_of_smileys_in_the_column5 == 2)
				polje[3][4] = current_smiley;

			if (number_of_smileys_in_the_column5 == 3)
				polje[2][4] = current_smiley;

			if (number_of_smileys_in_the_column5 == 4)
				polje[1][4] = current_smiley;

			if (number_of_smileys_in_the_column5 == 5)
				polje[0][4] = current_smiley;

			number_of_smileys_in_the_column5++;
			return;
		}
		if (player == 6) {
			if (number_of_smileys_in_the_column5 == 0)
				polje[5][5] = current_smiley;

			if (number_of_smileys_in_the_column5 == 1)
				polje[4][5] = current_smiley;

			if (number_of_smileys_in_the_column5 == 2)
				polje[3][5] = current_smiley;

			if (number_of_smileys_in_the_column5 == 3)
				polje[2][5] = current_smiley;

			if (number_of_smileys_in_the_column5 == 4)
				polje[1][5] = current_smiley;

			if (number_of_smileys_in_the_column5 == 5)
				polje[0][5] = current_smiley;

			number_of_smileys_in_the_column5++;
			return;
		}
		if (player == 7) {
			if (number_of_smileys_in_the_column7 == 0)
				polje[5][6] = current_smiley;

			if (number_of_smileys_in_the_column7 == 1)
				polje[4][6] = current_smiley;

			if (number_of_smileys_in_the_column7 == 2)
				polje[3][6] = current_smiley;

			if (number_of_smileys_in_the_column7 == 3)
				polje[2][6] = current_smiley;

			if (number_of_smileys_in_the_column7 == 4)
				polje[1][6] = current_smiley;

			if (number_of_smileys_in_the_column7 == 5)
				polje[0][6] = current_smiley;

			number_of_smileys_in_the_column7++;
			return;
		}


	} while (true);
}

bool check_row(char board[6][7]) {



	bool match_happened = false;


	for (int row_index = 0; row_index <= 5; row_index++) {

		for (int index = 0; index <= 3; index++)
		{

			if (four_same_characters(board[row_index][index], board[row_index][index + 1], board[row_index][index + 2], board[row_index][index + 3])

				&& board[row_index][index] != ' ')

				match_happened = true;



		}
	}




	return match_happened;
}
bool check_column(char board[6][7]) {



	bool match_happened = false;


	for (int column_index = 0; column_index <= 6; column_index++) {

		for (int index = 0; index <= 2; index++)
		{

			if (four_same_characters(board[index][column_index], board[index + 1][column_index], board[index + 2][column_index], board[index + 3][column_index])
				&& board[index][column_index] != ' ')

				match_happened = true;



		}
	}




	return match_happened;
}
bool diagonal_check(char board[6][7]) {



	bool match_happened = false;


	for (int j = 0; j <= 2; j++) {

		for (int i = 0; i <= 3; i++) {

			if (four_same_characters(board[0 + j][i + 0], board[1 + j][i + 1], board[2 + j][i + 2], board[3 + j][i + 3])
				&& (board[0 + j][0 + i] != ' ' || board[1 + j][1 + i] != ' ' || board[2 + j][2 + i] != ' ' || board[3 + j][3 + i] != ' '))

				match_happened = true;

		}

	}
	return match_happened;


}


bool reverse_diagonal_check(char board[6][7]) {

	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 3; i++) {
			if (four_same_characters(board[3 + j][0 + i], board[2 + j][1 + i], board[1 + j][2 + i], board[0 + j][3 + i])

				&& (board[3 + j][0 + i] != ' ' || board[2 + j][1 + i] != ' ' || board[1 + j][2 + i] != ' ' || board[0 + j][3 + i] != ' '))

				return true;
		}

	}
	return false;
}


bool four_same_characters(char a, char b, char c, char d) {
	if (a == b && b == c && c == d) {
		return true;
	}

	return false;
}
bool do_you_want_to_play_again() {

	char ponovljeni_igrac = 0;
	cout << "Do you want to play again? y(Yes) / n(No) ?" << endl;
	do {
		cin >> ponovljeni_igrac;
		if (ponovljeni_igrac == 'y' || ponovljeni_igrac == 'Y')
			play_again();
		if (ponovljeni_igrac == 'n' || ponovljeni_igrac == 'N')
			return false;
	} while (ponovljeni_igrac != 'y' && ponovljeni_igrac != 'Y' && ponovljeni_igrac != 'n' && ponovljeni_igrac != 'N');
	return true;
}
int play_again() {
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
			cout << name << " IS WINNER" << endl;
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
		return true;
}
