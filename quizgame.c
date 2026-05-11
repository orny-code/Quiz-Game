#include<stdio.h>
#include<ctype.h>

int main()
{
    int i;
    int ans1;
    int score = 0;

    printf("*** Welcome to the Quiz Game ***\n\n");

    printf("> Press 7 to start the game\n");
    printf("> Press 0 to quit the game\n");

    scanf("%d", &i);

    if(i == 7)
    {
        printf("\nThe game has started\n\n");
    }
    else if(i == 0)
    {
        printf("The game is over.\n");
        return 0;
    }
    else
    {
        printf("Invalid input\n");
        return 0;
    }

    // First Question
    printf("1) Which one is the first search engine on the internet?\n\n");

    printf("1) Google\n");
    printf("2) Wais\n");
    printf("3) Archie\n");
    printf("4) Altavista\n");

    printf("\nEnter Your Answer: ");
    scanf("%d", &ans1);

    if(ans1 == 3)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer!\n");
    }

    // Array Questions
    char questions[][100] = {
        "2) What is the largest planet in the solar system?",
        "3) What is the hottest planet?",
        "4) What planet has the most moons?"
    };

    char options[][100] = {
        "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
        "A. Earth\nB. Mercury\nC. Venus\nD. Mars",
        "A. Earth\nB. Jupiter\nC. Saturn\nD. Mars"
    };

    char answerKey[] = {'A', 'C', 'C'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess;

    for(int j = 0; j < questionCount; j++)
    {
        printf("\n%s\n\n", questions[j]);
        printf("%s\n", options[j]);

        printf("Enter your choice: ");

        scanf(" %c", &guess);
        // Space before %c fixes input problem

        guess = toupper(guess);

        if(guess == answerKey[j])
        {
            printf("Correct Answer!\n");
            score++;
        }
        else
        {
            printf("Wrong Answer!\n");
        }
    }

    printf("\nFinal Score: %d out of %d\n", score, questionCount + 1);

    return 0;
}
