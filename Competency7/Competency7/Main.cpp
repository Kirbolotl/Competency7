//Jacob Diaz, jdiaz116@student.cnm.edu, DiazCompetency7.cpp

#include "Header.h"

int main()
{
    Question triviaQuestion[num_questions]; 
    //triviaQuestion[0] = { "In Star Wars, who built C-3P0?",{"Yoda","Obi-Wan Kenobi","Anakin Skywalker","Luke Skywalker"},2 };

    string abcd[4] = { "A. ","B. ","C. ","D. " };

    WriteHeader();

    do {
       InitQuestions(triviaQuestion);
    } while (DoAgain());

    Goodbye();

    return 0;
}
