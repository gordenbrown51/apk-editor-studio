if not defined QTDIR    set QTDIR=C:\Qt\Qt5.11.1\5.11.1\msvc2015
if not defined OPENSSL  set OPENSSL=C:\Qt\Qt5.11.1\Tools\QtCreator\bin
if not defined VCREDIST set VCREDIST=C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\redist\x86\Microsoft.VC140.CRT
if not defined WIXDIR   set WIXDIR=C:\Program Files (x86)\WiX Toolset v3.11\bin
if not defined SEVENZIP set SEVENZIP=C:\Program Files\7-Zip\7z.exe

for /f %%i in ('type %0\..\..\..\VERSION') do (set VERSION=%%i)
