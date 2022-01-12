/*
** EPITECH PROJECT, 2022
** B-MUL-100-NCY-1-1-myrunner-thomas.herveux
** File description:
** descri
*/

#include "my.h"

void descri(void)
{
    write(1, "\nDESCRIPTION:\n\n"
    "   Welcome in the game <cartoon runner>.\n\n"
    "   To start, click on <play>, to set the sound's volume, "
    "click on <settings>, to leave click on <quit>.\n"
    "   The goal of this game is so easy, "
    "you will see enemies and you must avoid them.\n"
    "   to make it, you can jump if you press <space>.\n"
    "   If an enemy caught you, you loose.\n\n"
    "   Good luck to survive!\n\n"
    "UTILISATION:\n\n"
    "   ./my_runner or ./my_runner 'map' "
    "if you want to play with a custom map \n\n"
    "INFORMATION:\n\n"
    "    To create a map :\n"
    "    write 'e' for enemies, "
    "'v' to close the map and 'x' for the ground in a file in '.txt'.\n"
    "    The file must contain 3 lines, not more and not less.\n\n"
    , 637);
}

void help(void)
{
    write(1,"\nError argument, retry with "
    "'./my_runner -h' for more information\n\n", 68);
}
