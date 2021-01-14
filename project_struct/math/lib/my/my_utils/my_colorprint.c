/*
** EPITECH PROJECT, 2021
** my_colorprint
** File description:
** Print a sentence in color on the stdout
*/

void my_printf(char *str, ...);

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

void my_colorprint(char *str, char color)
{
    switch (color) {
        case 'R': my_printf(RED "%s" RESET, str);
            break;
        case 'G': my_printf(GRN "%s" RESET, str);
            break;
        case 'Y': my_printf(YEL "%s" RESET, str);
            break;
        case 'B': my_printf(BLU "%s" RESET, str);
            break;
        case 'M': my_printf(MAG "%s" RESET, str);
            break;
        case 'C': my_printf(CYN "%s" RESET, str);
            break;
        case 'W': my_printf(WHT "%s" RESET, str);
            break;
        default: my_printf(RED "ERROR : Unknown Color.\n" RESET);
            break;
    }
}