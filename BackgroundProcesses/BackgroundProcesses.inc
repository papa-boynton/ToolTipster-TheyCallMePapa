[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------
; Usage tips:
; Measures in this file will be part of Droptop's BackgroundProcesses.ini file.
; As a result, #MyVariablesLoc# will not work here. Instead, use the actual file location.
; eg. "#SKINSPATH#Droptop Community Apps\Apps\APP_NAME-APP_AUTHOR\Variables\Variables.inc"
;----------------------------------------------------------------------

; [MeasureCPUTemp]
; Measure=Plugin
; Plugin=CoreTemp
; CoreTempType=Temperature
; CoreTempIndex=0
; OnChangeAction=[!UpdateMeterGroup CustomAppButton "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
; UpdateDivider=10

[ToolTips.IsBeta]
Measure=Calc
Formula=#DroptopIsBeta#
Substitute="0":"","1":"Beta "
DynamicVariables=1
IfCondition=ToolTips.IsBeta = 1
IfTrueAction=[!SetVariable Beta [ToolTips.IsBeta]][!WriteKeyValue Variables Beta [ToolTips.IsBeta] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
IfFalseAction=[!SetVariable Beta ""][!WriteKeyValue Variables Beta "" "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
IfConditionMode=1
;OnUpdateAction=[!SetVariable Beta [ToolTips.IsBeta]][!WriteKeyValue Variables Beta [ToolTips.IsBeta] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
;OnChangeActi=1on=[!SetVariable Beta [ToolTips.IsBeta]][!WriteKeyValue Variables Beta [ToolTips.IsBeta] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]

[CustomName1]
Measure=String
String=#AppName13#
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
OnUpdateAction=[!SetVariable AppName13 [CustomName1]][!WriteKeyValue Variables AppName13 [CustomName1] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!SetVariable AppName13 [CustomName1]][!WriteKeyValue Variables AppName13 [CustomName1] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]

[CustomName2]
Measure=String
String=#AppName14#
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
OnUpdateAction=[!SetVariable AppName14 [CustomName2]][!WriteKeyValue Variables AppName14 [CustomName2] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!SetVariable AppName14 [CustomName2]][!WriteKeyValue Variables AppName14 [CustomName2] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]

[CustomName3]
Measure=String
String=#AppName15#
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
OnUpdateAction=[!SetVariable AppName15 [CustomName3]][!WriteKeyValue Variables AppName15 [CustomName3] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!SetVariable AppName15 [CustomName3]][!WriteKeyValue Variables AppName15 [CustomName3] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]

[CustomName4]
Measure=String
String=#AppName16#
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
OnUpdateAction=[!SetVariable AppName16 [CustomName4]][!WriteKeyValue Variables AppName16 [CustomName4] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!SetVariable AppName16 [CustomName4]][!WriteKeyValue Variables AppName16 [CustomName4] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]

[CustomName5]
Measure=String
String=#AppName17#
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
OnUpdateAction=[!SetVariable AppName17 [CustomName5]][!WriteKeyValue Variables AppName17 [CustomName5] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!SetVariable AppName17 [CustomName5]][!WriteKeyValue Variables AppName17 [CustomName5] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]

[CustomName6]
Measure=String
String=#AppName18#
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
OnUpdateAction=[!SetVariable AppName18 [CustomName6]][!WriteKeyValue Variables AppName18 [CustomName6] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!SetVariable AppName18 [CustomName6]][!WriteKeyValue Variables AppName18 [CustomName6] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]

[CustomName7]
Measure=String
String=#AppName19#
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
OnUpdateAction=[!SetVariable AppName19 [CustomName7]][!WriteKeyValue Variables AppName19 [CustomName7] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!SetVariable AppName19 [CustomName7]][!WriteKeyValue Variables AppName19 [CustomName7] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]

[CustomName8]
Measure=String
String=#AppName20#
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
OnUpdateAction=[!SetVariable AppName20 [CustomName8]][!WriteKeyValue Variables AppName20 [CustomName8] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!SetVariable AppName20 [CustomName8]][!WriteKeyValue Variables AppName20 [CustomName8] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]

[CustomName9]
Measure=String
String=#AppName21#
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
OnUpdateAction=[!SetVariable AppName21 [CustomName9]][!WriteKeyValue Variables AppName21 [CustomName9] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!SetVariable AppName21 [CustomName9]][!WriteKeyValue Variables AppName21 [CustomName9] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]

[CustomName10]
Measure=String
String=#AppName22#
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
OnUpdateAction=[!SetVariable AppName22 [CustomName10]][!WriteKeyValue Variables AppName22 [CustomName10] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
OnChangeAction=[!SetVariable AppName22 [CustomName10]][!WriteKeyValue Variables AppName22 [CustomName10] "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
