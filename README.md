# rainbow
Various compiler toolchain components implemented in C and centered around bones treecode (tc).

potential components:
- bones to tc is current just implemented in Python
- mc99 is a C99 compiler that compiles to C to treecode
- cb99 is a language that extends C99 with the bones type system, multi-dispatch, and automatic memory management
- tc_2_qbe converts treecode to QBE IR - in memory and file
- tc_2_mir converts treecode to MIR - in memory and file
- tc interpreter
- tc_to_bc - treecode to bytecode compiler
- bc interpreter
- debugger - steps through treecode and bytecode, allows inspection of memory, types, and src via a standard API, for 
  example, JetBrains or Microsoft's remote debugging protocol (RDP) or LLDB's GDB remote protocol (GDBR)
- profiler - collects and displays profiling data for treecode and bytecode, similar to gprof or perf


Things to consider:
- zinc compiler - https://tibleiz.net/blog/2024-02-04-writing-a-fast-compiler.html
- https://github.com/sgraham/sqbe or https://github.com/sgraham/libqbe for in memory QBE compilation for JIT purposes