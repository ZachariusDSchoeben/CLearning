#include <stdio.h>
#include <string.h>

/*
In School I was terrible with english language since I never understood what the fundamentals of a sentence...
So as a 23 year old, back to the basics!!
Adjective: A word the modifies or describes a noun.
Verb: A word that shows an action or state of being.
Noun: A word that names a person, place, thing, or idea.
Adverbs: modifies Verbs and Adjectives withing the word with -ly
Conjuctions: Connecting words ex: And, or, so , nor, but...
Sentence Structure (Subject): Who, What, Where, When, Why.
Now I know what these words mean yayyy!!...

Sentence 1 = Complex sentence
Sentence 2 = Compound sentence
Sentence 3 = Indpendant clause
*/


int main() {
    char Noun[50] = "";
    char Noun1[50] = "";
    char Verb[50] = "";
    char Verb1[50] = "";
    char Adjective1[50] = "";
    char Adjective2[50] = "";
    
    printf("Please ENTER in a Noun: Person, place, or thing \n");
    fgets(Noun, sizeof(Noun), stdin);
    Noun[strlen(Noun) - 1] = '\0';
    printf("Please ENTER another Noun: Person, place, or thing \n");
    fgets(Noun1, sizeof(Noun1), stdin);
    Noun1[strlen(Noun1) - 1] = '\0';
    printf("Please ENTER in a Verb: Action or State of being \n");
    fgets(Verb, sizeof(Verb), stdin);
    Verb[strlen(Verb) - 1] = '\0';
    printf("Please ENTER another Verb: Action or state of being \n");
    fgets(Verb1, sizeof(Verb1), stdin);
    Verb1[strlen(Verb1) - 1] = '\0';
    printf("Please ENTER in an Adjective: describes a Noun \n");
    fgets(Adjective1, sizeof(Adjective1), stdin);
    Adjective1[strlen(Adjective1) - 1] = '\0';
    printf("Please ENTER another Adjective: Describes a Noun \n");
    fgets(Adjective2, sizeof(Adjective2), stdin);
    Adjective2[strlen(Adjective2) - 1] = '\0';

    printf("While %s was sitting on a chair, %s kept moving forward.\n", Noun, Verb);
    printf("A %s, badass, motherfucking panther who needs to be refered as HE got caught, so meteors started flying down causing %s\n", Adjective1, Verb1);
    printf("Why did %s have a %s\n", Noun1, Adjective2);
    return 0;
}


