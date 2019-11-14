/*

  Authors (group members): Cael Shoop, Brandon DePalma, Vedant Jani
  Email addresses of group members: cshoop2018@my.fit.edu, bdepalma2017@my.fit.edu, vajani2018@my.fit.edu
  Group name: 2c

  Course: CSE 2010 Data Structures and Algorithms
  Section: 2

  Description of the overall algorithm and main data structures:


*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "bogglePlayer.h"
#include "word.h"

void init_boggle_player(char *word_file);
void sample_word_list(WordList *my_words);
WordList *get_words(char board[4][4]);

int main(int argc, char argv[]) {

	return (0);
}

// initialize BogglePlayer with a file of English words
void init_boggle_player(char *word_file) {

}

WordList *get_words(char board[4][4]) {

    WordList* my_words = get_new_word_list(); 

    sample_word_list(myWords);
    
    return (my_words);
}
//void sampleWordList(WordList *myWords) // a sample function to populate a word list
// based on the board, find valid words
//
// board: 4x4 board, each element is a letter, 'Q' represents "QU",
//    first dimension is row, second dimension is column
//    ie, board[row][col]
//
// Return at most 20 valid words in UPPERCASE and
//    their paths of locations on the board in myWords
//
// See word.h for details of the struct for Word, WordList, Location, and access functions

// a sample list of one word
void sample_word_list(WordList *myWords) {
    set_word_list_length(myWords, 1);      // number of words on the list 
    Word *word = get_word_from_word_list(my_words, 0);   // first word

    set_word(word, "cat");               // word string

    set_path_length(word, 3);             // word path
    set_letter_row_and_col(word, 0, 1, 2);  // letter 0 is at row 1 and column 2
    set_letter_row_and_col(word, 1, 1, 3);
    set_letter_row_and_col(word, 2, 2, 3);
}
