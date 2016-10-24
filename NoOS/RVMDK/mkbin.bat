rem Tool Executables
set CONVERT=fromelf

rem Output Name
set PROJECT=HIDDemo

set CVOPTIONS=--bin --output

%CONVERT% %CVOPTIONS% ".\Debug - DK-TM4C123G\%PROJECT%.bin" ".\Debug - DK-TM4C123G\%PROJECT%.axf"
%CONVERT% %CVOPTIONS% ".\Release - DK-TM4C123G\%PROJECT%.bin" ".\Release - DK-TM4C123G\%PROJECT%.axf"
%CONVERT% %CVOPTIONS% ".\Debug - DK-TM4C129X\%PROJECT%.bin" ".\Debug - DK-TM4C129X\%PROJECT%.axf"
%CONVERT% %CVOPTIONS% ".\Release - DK-TM4C129X\%PROJECT%.bin" ".\Release - DK-TM4C129X\%PROJECT%.axf"
