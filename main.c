#include <stdio.h>
#include <string.h>

#define USAGE_MSG   "USAGE: %s [src file] (out file)\n", argv[0]
#define HELP_MSG    "kasm is a 386 intel-syntax assembler\nUSAGE: %s [src file] (out file)\n", argv[0]
#define LESS_ARGS   USAGE_MSG
#define MANY_ARGS   USAGE_MSG

int main(int argc, char ** argv) {
    if (argc < 2) {
        printf(LESS_ARGS);
        return -1;
    }

    if (argc > 4) {
        printf(MANY_ARGS);
        return -1;
    }

    FILE * src = fopen(argv[1], "r");
    if (src == NULL) {
        printf("File %s couldn't be read from\n", argv[1]);
    }

    parse_file(src);

    return 0;
}