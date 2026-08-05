#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    if(numRows == 1) return s;

    int len = strlen(s);

    char **rows = malloc(numRows * sizeof(char*));
    for(int i = 0; i < numRows; i++) {
        rows[i] = malloc(len + 1);
        rows[i][0] = '\0';
    }

    int i = 0, dir = 1;

    for(int k = 0; k < len; k++) {
        int l = strlen(rows[i]);
        rows[i][l] = s[k];
        rows[i][l+1] = '\0';

        if(i == 0) dir = 1;
        else if(i == numRows - 1) dir = -1;

        i += dir;
    }

    char *result = malloc(len + 1);
    int pos = 0;

    for(int r = 0; r < numRows; r++) {
        for(int k = 0; rows[r][k] != '\0'; k++) {
            result[pos++] = rows[r][k];
        }
    }

    result[pos] = '\0';
    return result;
}