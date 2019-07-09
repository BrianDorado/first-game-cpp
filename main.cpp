#include <iostream>

void PrintIntro( int LevelDifficulty )
{
 std:: cout << "\n\nYou are a secret agent breaking into a level " << LevelDifficulty;
 std:: cout << " secure server room\n You will need to enter the correct codes to continue\n\n";
}

bool PlayGame(int DifficultyLevel)
{
  PrintIntro(DifficultyLevel);

  const int CodeA = 0;
  const int CodeB = 1;
  const int CodeC = 2;

  const int sum = CodeA+CodeB+CodeC;
  const int product = CodeA*CodeB*CodeC;

  std::cout << "Each code will have three numbers\n";
  std::cout << "The sum of the codes is: " << sum;
  std::cout << "\nThe codes product is: " << product <<std::endl;


  int GuessA, GuessB, GuessC;
  std::cin >> GuessA >> GuessB >> GuessC;
  
  int GuessSum = GuessA+GuessB+GuessC;
  int GuessProd = GuessA*GuessB*GuessC;

  if(GuessSum == sum && GuessProd == product) 
  {
    std::cout << "\nYou guessed correctly! ;D";
    return true;
  }
  else {
    std::cout << "\nYou guessed incorrectly! :'(";
    return false;
  }
}

int main()
{
int LevelDifficulty = 1;
  while(true)
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear();
    std::cin.ignore();
  if (bLevelComplete)
  {
     ++LevelDifficulty;
  }
  };
  
    return 0;
}
