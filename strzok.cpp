#include <stddef.h>

bool strzok(const char *str, size_t len) {
    for (int i=0; i<len; ++i) {
        if (str[i] == '\0') {
            return false;
        }
    }

    return str[len] == '\0';
}
