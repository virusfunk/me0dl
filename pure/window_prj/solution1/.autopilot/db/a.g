#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ywson/tmp/digi2win_ver5/window/window_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}