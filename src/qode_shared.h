#pragma once

#include "node.h"

namespace qode {
    typedef bool (*QodeInjectedInitFunc)(node::Environment* env);
    extern QodeInjectedInitFunc qode_init;
    extern void InjectQodeInit(QodeInjectedInitFunc init);
} // namespace qode

// qode api headers for integration
namespace qode {
    extern int qode_argc;
    extern char **qode_argv;
    typedef bool (*QodeInjectedRunLoopFunc)();
    extern QodeInjectedRunLoopFunc qode_run_uv_loop_once;
    extern QodeInjectedRunLoopFunc qode_run_gui_loop;
    extern void InjectQodeRunLoop(QodeInjectedRunLoopFunc runLoop);
    extern void InjectQodeRunUvLoopOnce(QodeInjectedRunLoopFunc runUvLoopOnce);
}  // namespace qode