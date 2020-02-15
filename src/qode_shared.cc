#include "qode_shared.h"

namespace qode {
    QodeInjectedInitFunc qode_init = nullptr;
    QodeInjectedRunLoopFunc qode_run_gui_loop = nullptr;
    QodeInjectedRunLoopFunc qode_run_uv_loop_once = nullptr;

    int qode_argc = 0;
    char **qode_argv = nullptr;
}

void qode::InjectQodeInit(QodeInjectedInitFunc init) {
    qode::qode_init = init;
}
void qode::InjectQodeRunLoop(QodeInjectedRunLoopFunc runLoop) {
    qode::qode_run_gui_loop = runLoop;
} 
void qode::InjectQodeRunUvLoopOnce(QodeInjectedRunLoopFunc runUvLoopOnce) {
    qode::qode_run_uv_loop_once = runUvLoopOnce;
} 