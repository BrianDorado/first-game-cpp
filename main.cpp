#include <iostream>
#include <ctime>
using namespace std;

void PrintIntro( int LevelDifficulty )
{
 std:: cout << "\n\nYou are a secret agent breaking into a level " << LevelDifficulty;
 std:: cout << " secure server room\nYou will need to enter the correct codes to continue\n\n";
}

bool PlayGame(int DifficultyLevel)
{
  PrintIntro(DifficultyLevel);

  const int CodeA = rand() % DifficultyLevel + DifficultyLevel;
  const int CodeB = rand() % DifficultyLevel + DifficultyLevel;
  const int CodeC = rand() % DifficultyLevel + DifficultyLevel;

  const int sum = CodeA+CodeB+CodeC;
  const int product = CodeA*CodeB*CodeC;

  cout << "Each code will have three numbers\n";
  cout << "The sum of the codes is: " << sum;
  cout << "\nThe product of the codes is: " << product <<std::endl;

  int GuessA, GuessB, GuessC;
  std::cin >> GuessA >> GuessB >> GuessC;
  
  int GuessSum = GuessA+GuessB+GuessC;
  int GuessProd = GuessA*GuessB*GuessC;

  int AlertLevel = 1;

  if (GuessSum == sum && GuessProd == product) 
  {
    cout << "\nYou guessed correctly! ;D";
    return true;
  }
  else {
    cout << "\nYou guessed incorrectly! :'(";
    ++AlertLevel;
    return false;
  }
}

int main()
{
srand(time(NULL));

const int MaxDifficulty = 10;

int LevelDifficulty = 1;

while (LevelDifficulty <= MaxDifficulty)
{
    bool bLevelComplete = PlayGame(LevelDifficulty);
    cin.clear();
    cin.ignore();
if (bLevelComplete)
{
     ++LevelDifficulty;
}
};
  cout << "\n Great work! All levels have been cracked";
return 0;
}
