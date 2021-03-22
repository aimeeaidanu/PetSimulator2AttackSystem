#include <iostream>
#include <cstdlib>

using namespace std;

void goblinBattle();
int showEnemyHp(int enemyhp, int attack);
int showHp(int hp, int enemyattack);

int main()
{
    int battle;
    cout << "\nWould you like to start a pet battle?\n Yes = 1\n No = 2\n";
    cin >> battle;
    if(battle==1)
    {
        goblinBattle();
    }
    else if(battle==2)
    {
        cout << "You did not start a pet battle.\n";
    }
    else
    {
        cout << "Error: No Valid Choice. Contact aimeeaidanu? V1.7\n\n";
        return main();
    }

system("pause");
}

void goblinBattle()
{
  int hp, enemyhp, attack, enemyattack ;
  int hitGoblin;
  
     cout << "Enter your Pet Health: ";
    cin >> hp;
        cout << "Your Pet Health is: " << hp << endl;

    cout << "Enter your Pet Damage: ";
    cin >> attack;
        cout << "Your Pet Damage is: " << attack << endl;
        
    cout << "Enter the Rogue Pet's Health: ";
    cin >> enemyhp;
        cout << "Your Rogue Pet's Health is: " << enemyhp << endl;
        
    cout << "Enter the Rogue Pet's Damage: ";
    cin >> enemyattack;
        cout << "The Rogue Pet's Damage is: " << enemyattack << endl;

   do
   {
    cout << "\nAttack?\n Yes = 1\n No = 2\n";
    cin >> hitGoblin;
    if (hitGoblin == 1)
    {
    enemyhp = showEnemyHp(enemyhp, attack);
    hp = showHp(hp, enemyattack);
    cout << "\nYou attacked the rogue pet.\n";
    cout << "The rogue pet now has " << enemyhp << "HP left.\n\n";
     if(enemyhp <= 0)
     {
        cout << "You won!\n";
     }
     else if(enemyhp > 0)
     {
       cout << "The rogue pet attacked your pet back.\n";
       cout << "Your pet now has " << hp << "HP left.\n\n";
     }
    }
    else if(hitGoblin == 2)
    {
        cout << "You chose not to attack the rogue pet so the rogue pet hit you instead\n";
        cout << "Your pet has " << showHp(hp, enemyattack) << "HP left.\n\n";
    }
    else
    {
        cout << "Error: No Valid Choice. Contact aimeeaidanu? V1.7\n\n";
        return goblinBattle();
    }

   }while(hp > 0 && enemyhp > 0);
}

int showEnemyHp(int enemyhp, int attack)
{
    enemyhp = enemyhp - attack;
    return enemyhp;
}
int showHp(int hp, int enemyattack)
{
    hp = hp - enemyattack;
    return hp;
}
