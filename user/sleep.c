#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    int n_ticks = 0;
    if (argc < 2) {
        fprintf(2, "Error: Missing Arguments\n");
        exit(1);
    }
    n_ticks = atoi(argv[1]);
    sleep(n_ticks);
    exit(0);
}
