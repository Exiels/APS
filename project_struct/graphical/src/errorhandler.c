/*
** EPITECH PROJECT, 2021
** errorhandler
** File description:
** An file containing error handler functions
*/

#include "../includes/my.h"
#include "../includes/mylib.h"

int error_handler(int error_id)
{
    switch (error_id) {
        case /* an error_id */:
            return (ERROR);
            break;
        default: my_colorprint("ERROR : Unknow error.", "R");
            return (ERROR);
            break;
    }
}