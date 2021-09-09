SET PATH=D:\keil5-ARM\ARM\ARMCC\Bin;C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\Program Files (x86)\Intel\Intel(R) Management Engine Components\iCLS\;C:\Program Files\Intel\Intel(R) Management Engine Components\iCLS\;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\Program Files (x86)\Intel\Intel(R) Management Engine Components\DAL;C:\Program Files\Intel\Intel(R) Management Engine Components\DAL;C:\Program Files (x86)\Intel\Intel(R) Management Engine Components\IPT;C:\Program Files\Intel\Intel(R) Management Engine Components\IPT;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;C:\Users\Hasee\AppData\Local\Microsoft\WindowsApps;
SET ARMCC5_ASMOPT=--diag_suppress=9931
SET ARMCC5_CCOPT=--diag_suppress=9931
SET ARMCC5_LINKOPT=--diag_suppress=9931
SET CPU_TYPE=STM32F407ZGTx
SET CPU_VENDOR=STMicroelectronics
SET UV2_TARGET=Target 1
SET CPU_CLOCK=0x00B71B00
"D:\keil5-ARM\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\main.__i"
"D:\keil5-ARM\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\delay.__i"
"D:\keil5-ARM\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\beep.__i"
"D:\keil5-ARM\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\led.__i"
"D:\keil5-ARM\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\key.__i"
"D:\keil5-ARM\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\system_stm32f4xx.__i"
"D:\keil5-ARM\ARM\ARMCC\Bin\ArmAsm" --Via ".\objects\startup_stm32f401xx._ia"
"D:\keil5-ARM\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\stm32f4xx_gpio.__i"
"D:\keil5-ARM\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\stm32f4xx_rcc.__i"
"D:\keil5-ARM\ARM\ARMCC\Bin\ArmLink" --Via ".\Objects\STM32F4.lnp"
