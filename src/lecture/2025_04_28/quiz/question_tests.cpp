#include <catch2/catch_test_macros.hpp>

#include "question.h"
#include <vector>

TEST_CASE("empty_question", "[basics]")
{
    Question q1;

    REQUIRE(q1.text == "");
    REQUIRE(q1.answer == "");

    q1.text = "Um wie viel Uhr hat unsere Vorlesung angefangen?";
    REQUIRE(q1.text == "Um wie viel Uhr hat unsere Vorlesung angefangen?");
}

TEST_CASE("check_answer", "[basics]")
{
    Question q1;
    q1.text = "Um wie viel Uhr hat unsere Vorlesung angefangen?";
    q1.answer = "Um 8 Uhr";

    REQUIRE(q1.check_answer("Um 8 Uhr") == true);
    REQUIRE(q1.check_answer("Um 9 Uhr") == false);
}

TEST_CASE("quiz")
{
    std::vector<Question> quiz;

    Question q1;
    q1.text = "Um wie viel Uhr hat unsere Vorlesung angefangen?";
    q1.answer = "Um 8 Uhr";

    Question q2;
    q2.text = "Wieviel lernen wir heute?";
    q2.answer = "Enorm viel.";

    quiz.push_back(q1);
    quiz.push_back(q2);

    REQUIRE(quiz.size() == 2);
}

TEST_CASE("question_constructor")
{
    Question q1("Ist diese Question-Instanz gültig?", "Ja");
}
