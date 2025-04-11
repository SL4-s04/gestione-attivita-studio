@echo off
title loading

for /L %%a in (1,1,20) do (

cls
timeout /t 0 > nul
echo loading:%%a

)