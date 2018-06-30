[![Build Status](https://travis-ci.org/remuscl/LuaJIT.svg?branch=master)](https://travis-ci.org/remuscl/LuaJIT)

README for LuaJIT 2.0.4
-----------------------

LuaJIT is a Just-In-Time (JIT) compiler for the Lua programming language.

Project Homepage: http://luajit.org/

LuaJIT is Copyright (C) 2005-2016 Mike Pall.
LuaJIT is free software, released under the MIT license.
See full Copyright Notice in the COPYRIGHT file or in luajit.h.

Documentation for LuaJIT is available in HTML format.
Please point your favorite browser to:

 doc/luajit.html

```
aco_create/init_save_stk_sz=64B                        2000000     0.132 s       65.98 ns/op   15155666.77 op/s
aco_resume/co_amount=2000000/copy_stack_size=8B       20000000     0.666 s       33.29 ns/op   30034978.72 op/s
aco_destroy                                            2000000     0.066 s       33.00 ns/op   30300162.35 op/s

aco_create/init_save_stk_sz=64B                        2000000     0.130 s       65.14 ns/op   15351302.11 op/s
aco_resume/co_amount=2000000/copy_stack_size=24B      20000000     0.675 s       33.74 ns/op   29640324.91 op/s
aco_destroy                                            2000000     0.067 s       33.61 ns/op   29752249.89 op/s

aco_create/init_save_stk_sz=64B                        2000000     0.131 s       65.64 ns/op   15235482.05 op/s
aco_resume/co_amount=2000000/copy_stack_size=40B      20000000     0.668 s       33.41 ns/op   29932301.47 op/s
aco_destroy                                            2000000     0.080 s       40.00 ns/op   25001472.90 op/s

aco_create/init_save_stk_sz=64B                        2000000     0.222 s      111.17 ns/op    8995199.76 op/s
aco_resume/co_amount=2000000/copy_stack_size=56B      20000000     0.695 s       34.73 ns/op   28794321.13 op/s
aco_destroy                                            2000000     0.067 s       33.73 ns/op   29645360.12 op/s

aco_create/init_save_stk_sz=64B                        2000000     0.131 s       65.62 ns/op   15239340.86 op/s
aco_resume/co_amount=2000000/copy_stack_size=120B     20000000     0.788 s       39.42 ns/op   25370202.24 op/s
aco_destroy                                            2000000     0.089 s       44.38 ns/op   22531861.83 op/s
```

![test](test.png)
 
