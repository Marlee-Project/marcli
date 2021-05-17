#ifndef MARCLI_H
#define MARCLI_H

#if defined(unix) || defined(__unix__) || defined(__unix)
#define PLATFORM_UNIX
#elif defined(_WIN32)
#define PLATFORM_WIN
#endif

#include<stdio.h>
#include <stdlib.h>

#include "marcli_util.h"




#endif /* end of include guard: MARCLI_H */
