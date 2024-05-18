#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int random_num, guessed_num, chances = 0;
    srand(time(0));
    random_num = rand() % 100 + 1;
    cout << "NUMBER GUESSING GAME";
    do
    {
        chances++;
        cout << "\nEnter the guessed number between 1 to 100:";
        cin >> guessed_num;
        if (guessed_num > random_num)
        {
            cout << "The guessed number is too high.\n";
        }
        else if (guessed_num < random_num)
        {
            cout << "The guessed number is too low.\n";
        }
        else
        {
            cout << "You guessed correct number and you got it in " << chances << " tries.\n";
        }
    } while (guessed_num != random_num);
    return 0;
}
