/*
	Authors (group members): Cael Shoop, Brandon DePalma, Vedant Jani
	Email addresses of group members: cshoop2018@my.fit.edu, bdepalma2017@my.fit.edu, vajani2018@my.fit.edu
	Group name: 2c - "The Cool Can Code Project (CCCP)"

	Course: CSE 2010 Data Structures and Algorithms
	Section: 2

	Description of the overall algorithm and main data structures:
	We are storing the words in a skip list to provide for faster word searching, and
	organizing them based on ASCII key sum values.
	A DFS search is used to check all possible words on the board and put into a
	second list.
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "bogglePlayer.h"
#include "word.h"

typedef struct words {
	int key;
	char word[35];
	struct words *up;
	struct words *down;
	struct words *prev;
	struct words *next;
}words;

words *dictionary = NULL;

void initBogglePlayer(char *word_file);
int keyGen(char word[35]);
void sampleWordList(WordList *my_words);
WordList *getWords(char board[4][4]);

int main(int argc, char argv[]) {
	

	return (0);
}

// initialize BogglePlayer with a file of English words
void initBogglePlayer(char *word_file) {

}

int keyGen(char word[35]) {
	int key = 0;
	for (int i = 0; word[i] != "\0"; i++) {
		key += word[i];
	}
	return (key);
}

WordList *getWords(char board[4][4]) {

    WordList* myWords = getNewWordList(); 

    sampleWordList(myWords);
    
    return (myWords);
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
void sampleWordList(WordList *myWords) {
    setWordListLength(myWords, 1);      // number of words on the list 
    Word *word = getWordFromWordList(myWords, 0);   // first word

    setWord(word, "cat");               // word string

    setPathLength(word, 3);             // word path
    setLetterRowAndCol(word, 0, 1, 2);  // letter 0 is at row 1 and column 2
    setLetterRowAndCol(word, 1, 1, 3);
    setLetterRowAndCol(word, 2, 2, 3);
}
