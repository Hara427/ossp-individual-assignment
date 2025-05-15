#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>

int main() {
    gid_t new_gid = 1000;  // Change this to a valid GID on your system

    printf("Current real GID: %d\n", getgid());
    printf("Current effective GID: %d\n", getegid());

    if (setgid(new_gid) == -1) {
        perror("setgid failed");
        return 1;
    }

    printf("New real GID: %d\n", getgid());
    printf("New effective GID: %d\n", getegid());

    return 0;
}
