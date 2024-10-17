#pragma once

#define GREETER_VERSION_MAJOR 1
#define GREETER_VERSION_MINOR 1
#define GREETER_VERSION_PATCH 3

#define GREETER_VERSION_BUILD 0

#define GREETER_GIT_HASH ""
#define GREETER_VERSION_NAME ""

// Expecting each version component to be less than 99
#define GREETER_VERSION \
GREETER_VERSION_MAJOR *   100 * 100 * 100 \
    + GREETER_VERSION_MINOR * 100 * 100 \
    + GREETER_VERSION_PATCH * 100 \
    + GREETER_VERSION_BUILD
