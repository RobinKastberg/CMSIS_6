// RUN: %cc% %ccflags% %ccout% %s.o %s; llvm-objdump --mcpu=%mcpu% -d %s.o | FileCheck --allow-unused-prefixes --check-prefixes %prefixes% %s

#include "cmsis_compiler.h"

__NO_RETURN
void noreturn() {
    // CHECK-LABEL: <noreturn>:
    // CHECK: b 0x0 <noreturn>
    while(1);
    // CHECK-NOT: bx lr
}
