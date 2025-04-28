#include "question.h"
using namespace std;

Question::Question()
    : text { "" }
    , answer { "" }
{
}

Question::Question(string q, string a)
    : text { q }
    , answer { a }
{
}

bool Question::check_answer(string answer_)
{
    return answer == answer_;
}
