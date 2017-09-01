//
// settings.c
//

#include "settings.h"
#include "uart.h"

static settings_t s;

settings_t *settings_load(void) {
    debug("Settings load\n");
    s = (settings_t){.spmmx=160, .spmmy=160, .spmmz=400, .spmme=4,
                     .bvx=100, .bvy=100, .bvz=100,
                     .espx=1, .espy=1, .espz=1,
                     .sdx=1, .sdy=1, .sdz=1, .sde=1};
    return &s;
}

settings_t *settings(void) {
    return &s;
}

void settings_store(settings_t *s) {
    debug("Settings store\n");
}
