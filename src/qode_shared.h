#pragma once

#include "node.h"

namespace qode {
    typedef bool (*QodeInjectedInitFunc)(node::Environment* env);
    extern QodeInjectedInitFunc qode_init;
    void InjectQodeInit(QodeInjectedInitFunc init);

    typedef bool (*QodeMainRunLoopFunc)();
    extern QodeMainRunLoopFunc qode_run_gui_loop;
    void InjectQodeRunLoop(QodeMainRunLoopFunc runLoop);

    typedef int (*QodeCustomRunLoopFunc)();
    extern QodeCustomRunLoopFunc custom_run_loop;
} // namespace qode

// qode api headers for integration
namespace qode {
    extern int qode_argc;
    extern char **qode_argv;
    extern void InjectCustomRunLoop(QodeCustomRunLoopFunc customRunLoop);
}  // namespace qode