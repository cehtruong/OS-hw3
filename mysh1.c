#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

#define PROMPT "[banana ]$"
char* line;
char** toks;

typedef struct tokenizer {
  char *str; //the string to parse
  char* pos; // position in string
} TOKENIZER;

int parse();
void init_tokenizer(char *line);
char *get_next_token(TOKENIZER *tokenizer);

int main(int argc, char *argv[]){
  //printf("[banana ~] $"); //loop this
  //get line
  return 0;
} //main()

// identify white spaces
char *get_next_token(TOKENIZER *tokenizer){
  //if current char is a delimiter, just return it, a list of symbols
  //else go until next char is a delimiter
  //return the substring without white spaces
  //return NULL when string ends
} // get_next_token()

TOKENIZER init_tokenizer(char *line){
  TOKENIZER t;
  int n = strlen(line);
  toks = (char**) malloc(sizeof(char*)*(n+1)); //malloc, make copy of string
  char* copy;
  strcpy(line, copy);
  t->str = copy; //
  t->pos = ; // where you're at //start at beginning of line
  return t;
} //init_tokenizer

// return # of tokens
// store pointers to tokens in global array toks
int parse() {
  int n, i;
  i = 0;
  n = 0;
  line = readline(PROMPT);

 //ctrl-d
 if(line == NULL) {return 0;}

 //newline
 if(strcmp(line,"") == 0) {return 0;}

 TOKENIZER t;
//EXTRA CREDIT: add_history(line);
 t = init_tokenizer(line);
 //how many tokens
 while(get_next_token(t)!= NULL){
   n++;
 }

// allocate pointers to tokens
// +1 for the ending NULL


  toks = (char**) malloc(sizeof(char*)*(n+1));

  // start from the beginning again
  t = init_tokenizer(line);
  while((toks[i++] = get_next_token(t))!= NULL); // ?

  free(line); // ? the right place to free ?
  return n;

}
// Questions:
// 1. init_tokenizer() is a function that initialize TOKENIZER t?
// 2. why are we going through init_tokenizer twice?
//  first: go through and count the total tokens
//  second: put pointers that point to each words/tokens in the char *str of t?
//
// 3. What is this ? I initialize char *toks[n] up top ? should it be char** toks?
// 4. Why are we casting char** type here?
//  toks = (char**);
//  malloc(sizeof(char*)*(n+1));





// int parse(){
//   char *prompt = "[banana ~] $";
//   char* newline = malloc(sizeof(char) * );
//   readline(prompt);
//
//   free(new_line);
// }//parse()
