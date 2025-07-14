#include <iostream>
#include <string>
#include <cctype> // For tolower ()
using namespace std;

bool isVowel(char c) {
  c = tolower(c);
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string toPigLatin(const string word) {
  if (word.empty()) return word;
  if (isVowel(word[0])) {
    return word + "way";
  } else {
    return word.substr(1) + word[0] + "ay";
  }
}

int main() {
  string sentence;
  cout << "Enter a sentence: ";
  getline(cin, sentence);
  if (sentence.empty()) {
    cout << "No input provided." << endl;
    return 1;
  }
  cout << "Pig Latin: ";
  int word_start = 0;
  int word_end_add_1 = 0;
  int length = sentence.length();
  
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

    string word = sentence.substr(word_start, word_end_add_1 - word_start);
    cout << toPigLatin(word) << " ";
    word_start = word_end_add_1 + 1; // Move to the next word
  }
  cout << endl;

  return 0;
}
