#include <stdio.h>

int StringLength(char sentence[]);
int NumOfWords(char sentence[]);
int NumOfVowels(char sentence[]);
int VowelFreq(char sentence[], char vowel);

int main() {
    char sentence[100];

    printf("Enter a sentence : ");
    scanf("%[^\n]", sentence);  

    int length = StringLength(sentence);
    printf("Length of the sentence: %d\n", length);

    int wordCount = NumOfWords(sentence);
    printf("Number of words in the sentence: %d\n", wordCount);

    int vowelCount = NumOfVowels(sentence);
    printf("Number of vowels in the sentence: %d\n", vowelCount);

    char vowel;
    printf("Enter a vowel to check its frequency: ");
    scanf(" %c", &vowel); 
    int vowelFreq = VowelFreq(sentence, vowel);
    printf("Frequency of '%c' in the sentence: %d\n", vowel, vowelFreq);

    return 0;
}
int StringLength(char sentence[]) {
    int length = 0;
    while (sentence[length] != '\0') {
        length++;
    }
    return length;
}

int NumOfWords(char sentence[]) {
    int wordCount = 0;
    int inWord = 0;
    int i = 0;

    while (sentence[i] != '\0') {
        if (sentence[i] == ' ' || sentence[i] == '\n') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
        i++;
    }

    return wordCount;
}

int NumOfVowels(char sentence[]) {
    int vowelCount = 0;
    int i = 0;
    
    while (sentence[i] != '\0') {
        char ch = sentence[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
        i++;
    }

    return vowelCount;
}

int VowelFreq(char sentence[], char vowel) {
    int count = 0;
    int i = 0;

    while (sentence[i] != '\0') {
        if (sentence[i] == vowel || sentence[i] == vowel + 32) { // Handles both lowercase and uppercase
            count++;
        }
        i++;
    }

    return count;
}
