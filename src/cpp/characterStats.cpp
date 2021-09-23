#include "characterStats.h"

CharacterStats::CharacterStats(int health, int mana, double stamina, double intellect, double spirit, double spellPower, int shadowPower, int firePower, int hasteRating, int hitRating, int critRating,
    double critChance, int mp5, int spellPen, double fireModifier, double frostModifier, double hastePercent, double damageModifier, double shadowModifier, double staminaModifier,
    double intellectModifier, double spiritModifier, double manaCostModifier, double arcaneModifier, double natureModifier, int natureResist, int arcaneResist, int fireResist, int frostResist,
    int shadowResist)
    : health(health)
    , mana(mana)
    , stamina(stamina)
    , intellect(intellect)
    , spirit(spirit)
    , spellPower(spellPower)
    , shadowPower(shadowPower)
    , firePower(firePower)
    , hasteRating(hasteRating)
    , hitRating(hitRating)
    , critRating(critRating)
    , critChance(critChance)
    , mp5(mp5)
    , spellPen(spellPen)
    , fireModifier(fireModifier)
    , frostModifier(frostModifier)
    , hastePercent(1 + hastePercent / 100)
    , damageModifier(damageModifier)
    , shadowModifier(shadowModifier)
    , staminaModifier(staminaModifier)
    , intellectModifier(intellectModifier)
    , spiritModifier(spiritModifier)
    , manaCostModifier(manaCostModifier)
    , arcaneModifier(arcaneModifier)
    , natureModifier(natureModifier)
    , natureResist(natureResist)
    , arcaneResist(arcaneResist)
    , fireResist(fireResist)
    , frostResist(frostResist)
    , shadowResist(shadowResist)
    {}