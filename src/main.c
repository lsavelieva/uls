#include "../inc/uls.h"

// char *mx_get_flags() {}
static void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}

static void mx_check_flags(const char *s) {
    for (int f = 0; s[f] != '\0' && f < 15; f++) {
        if (mx_strstr(FLAGS, &s[f]) == NULL) {
            mx_printerr(LS);
            mx_printerr(USAGE1);
            mx_printerr(&s[f]);
            mx_printerr(USAGE2);
        }
    }
    exit (-1);
}

static void mx_pars_arg(const char *s) {
    // int i = 0;
    char *flag = mx_strnew(15);

    flag[0] = '-';
    if (s[0] == '-')
        mx_check_flags(s);
    //     mx_strjoin(flag, s);
    // if (s[0] != '-')
    //     gf
}

int main(int argc, char **argv) {
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            mx_pars_arg(argv[i]);
        }
        // void mx_check_flags(argv[1]);
    }
    return 0;
}
