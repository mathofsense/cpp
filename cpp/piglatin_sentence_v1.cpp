#include <iostream>
#include <string>
#include <cctype> // For tolower ()
using namespace std;

bool isVowel(char c) {
  c = tolower(c);
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void toPigLatin(char word[], char pigLatin[]) {
  pigLatin[0] = '\0'; // Initialize pigLatin to an empty string
  if (strlen (word) == 0) return;
  if (isVowel(word[0])) {
    strcpy (pigLatin, word);
    strcat (pigLatin, "way");
  } else {
    if (word[1] != '\0') { // Check if the word has more than one character
      strcpy (pigLatin, word + 1);
    }
    int i = strlen(pigLatin);
    pigLatin[i] = word[0]; // Append the first character
    pigLatin[i + 1] = '\0'; // Null-terminate the string
    strcat (pigLatin, "ay");
  }
}

int main() {
  char sentence[1000]; // Assuming a maximum sentence length of 999 characters
  char word[1000]; // Buffer for Pig Latin conversion
  char pigLatin[1000]; // Buffer for Pig Latin conversion
  cout << "Enter a sentence: ";
  cin.getline (sentence, sizeof(sentence));

  int length = strlen (sentence);
  if (length == 0) {
    cout << "No input provided." << endl;
    return 1;
  }

  int word_start = 0;
  int word_end_add_1 = 0;

  cout << "Pig Latin: ";
  while (word_start < length) {
    // Skip leading spaces
    while (word_start < length && sentence[word_start] == ' ') {
      word_start++;
    }

    if (word_start >= length) {
     break; // No more words
    }
    
    // Find end of word
    word_end_add_1 = word_start;
    while (word_end_add_1 < length && sentence[word_end_add_1] != ' ') {
      word_end_add_1++;
    }

    strncpy (word, sentence + word_start, word_end_add_1 - word_start);
    word[word_end_add_1 - word_start] = '\0'; // Null-terminate the word
    toPigLatin(word, pigLatin);
    cout << pigLatin << " ";
    word_start = word_end_add_1 + 1; // Move to the next word
  }
  cout << endl;

  return 0;
}
