#include <iostream>
#include <string>

enum Type
{
    dragon,
    giant_spider,
    ogre,
    orc,
    slime
};

struct Monster
{
    Type monsterType;
    std::string name;
    int health;
};

std::string getMonsterType(Type monsterType) 
{
    if (monsterType == Type::dragon) 
        return "Dragon";
    else if (monsterType == Type::giant_spider)
        return "Giant spider";
    else if (monsterType == Type::ogre)
        return "Ogre";
    else if (monsterType == Type::orc)
        return "orc";
    else if (monsterType == Type::slime)
        return "Slime";
    return "Strange monster";
}

void printMonster(Monster monster)
{
    std::cout << "This " << getMonsterType(monster.monsterType) << " is named " <<  monster.name 
            << " and has " << monster.health << " health.\n";
}

int main()
{
    Monster blue_dragon{Type::dragon, "Blue Johnnie", 250};
    printMonster(blue_dragon);
    Monster slimmie{Type::slime, "Slimmie", 25};
    //Monster robot{Type::robot, "Arnold", 800};

    printMonster(slimmie);
    
    return 0;
}
