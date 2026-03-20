@echo off
g++ gen.cpp -o gen
g++ brute.cpp -o brute
g++ sol.cpp -o sol

:loop
gen > in
sol < in > out
brute < in > ok

fc out ok > nul
if errorlevel 1 goto end

goto loop

:end
echo Mismatch found!
type in
pause