[Variables]
MeasureCustomName1=1
MeasureCustomName2=2
MeasureCustomName3=3
MeasureCustomName4=4
MeasureCustomName5=5
MeasureCustomName6=6
MeasureCustomName7=7
MeasureCustomName8=8
MeasureCustomName9=9
MeasureCustomName10=10
MeasureCustomName13=11

NewDesktop.ToolTipsterOverlayNum=1
Time.ToolTipsterOverlayNum=2
Alarm.ToolTipsterOverlayNum=3
VolumeIcon.ToolTipsterOverlayNum=4
MailIcon.ToolTipsterOverlayNum=5
Weather.ToolTipsterOverlayNum=6
Battery.ToolTipsterOverlayNum=7
Wifi.ToolTipsterOverlayNum=8
Downloads.ToolTipsterOverlayNum=9
Recent.ToolTipsterOverlayNum=10
Copy.ToolTipsterOverlayNum=11
AppDrawer.ToolTipsterOverlayNum=13

CustomApp1.ToolTipsterOverlayNum=13
CustomApp2.ToolTipsterOverlayNum=13
CustomApp3.ToolTipsterOverlayNum=13
CustomApp4.ToolTipsterOverlayNum=13
CustomApp5.ToolTipsterOverlayNum=13
CustomApp6.ToolTipsterOverlayNum=13
CustomApp7.ToolTipsterOverlayNum=13
CustomApp8.ToolTipsterOverlayNum=13
CustomApp9.ToolTipsterOverlayNum=13
CustomApp10.ToolTipsterOverlayNum=13
CustomApp13.ToolTipsterOverlayNum=13

Folder1.ToolTipsterOverlayNum=14
Folder2.ToolTipsterOverlayNum=15
Folder3.ToolTipsterOverlayNum=16
Folder4.ToolTipsterOverlayNum=17
Folder5.ToolTipsterOverlayNum=18
Folder6.ToolTipsterOverlayNum=19
Folder7.ToolTipsterOverlayNum=20
Folder8.ToolTipsterOverlayNum=21
Folder9.ToolTipsterOverlayNum=22
Folder10.ToolTipsterOverlayNum=13
Folder11.ToolTipsterOverlayNum=13
Folder12.ToolTipsterOverlayNum=13
Folder13.ToolTipsterOverlayNum=13
Update.ToolTipsterOverlayNum=13
Home.ToolTipsterOverlayNum=13

NewDesktop.ToolTipsterOverlay=NewDesktop
Time.ToolTipsterOverlay=Time
Alarm.ToolTipsterOverlay=Alarm
VolumeIcon.ToolTipsterOverlay=VolumeIcon
MailIcon.ToolTipsterOverlay=MailIcon
Weather.ToolTipsterOverlay=Weather
Battery.ToolTipsterOverlay=Battery
Wifi.ToolTipsterOverlay=Wifi
Downloads.ToolTipsterOverlay=Downloads
Recent.ToolTipsterOverlay=Recent
Copy.ToolTipsterOverlay=Copy
AppDrawer.ToolTipsterOverlay=AppDrawer

Folder1.ToolTipsterOverlay=Folder1
Folder2.ToolTipsterOverlay=Folder2
Folder3.ToolTipsterOverlay=Folder3
Folder4.ToolTipsterOverlay=Folder4
Folder5.ToolTipsterOverlay=Folder5
Folder6.ToolTipsterOverlay=Folder6
Folder7.ToolTipsterOverlay=Folder7
Folder8.ToolTipsterOverlay=Folder8
Folder9.ToolTipsterOverlay=Folder9
Folder10.ToolTipsterOverlay=Folder10
Folder11.ToolTipsterOverlay=Folder11
Folder12.ToolTipsterOverlay=Folder12
Folder13.ToolTipsterOverlay=Folder13
Update.ToolTipsterOverlay=Update
Home.ToolTipsterOverlay=Home

CustomApp1.ToolTipsterOverlay=CustomApp1
CustomApp2.ToolTipsterOverlay=CustomApp2
CustomApp3.ToolTipsterOverlay=CustomApp3
CustomApp4.ToolTipsterOverlay=CustomApp4
CustomApp5.ToolTipsterOverlay=CustomApp5
CustomApp6.ToolTipsterOverlay=CustomApp6
CustomApp7.ToolTipsterOverlay=CustomApp7
CustomApp8.ToolTipsterOverlay=CustomApp8
CustomApp9.ToolTipsterOverlay=CustomApp9
CustomApp10.ToolTipsterOverlay=CustomApp10
CustomApp13.ToolTipsterOverlay=CustomApp13

TooltipText.NewDesktop=#AppName1# : Add, remove, and switch virtual desktops
TooltipText.Time=#AppName2# : Time & calendar
TooltipText.Alarm=#AppName3# : Set an alarm or focus timer
TooltipText.VolumeIcon=#AppName4# : Volume adjustment and multimedia control
TooltipText.MailIcon=#AppName5# : Your Gmail inbox at a glance
TooltipText.Weather=#AppName6# : Your local weather forecast
TooltipText.Battery=#AppName7# : Power options & backlight control
TooltipText.Wifi=#AppName8# : Network information
TooltipText.Downloads=#AppName9# : Downloaded files in chronological order
TooltipText.Recent=#AppName10# : Recent files & folders in chronological order
TooltipText.Copy=#AppName11# : Clipboard and productivity shortcuts
TooltipText.AppDrawer=#AppName12# : Show apps in your system tray

TooltipText.Folder1=#TooltipText.Folder1#
TooltipText.Folder2=#TooltipText.Folder2#
TooltipText.Folder3=#TooltipText.Folder3#
TooltipText.Folder4=#TooltipText.Folder4#
TooltipText.Folder5=#TooltipText.Folder5#
TooltipText.Folder6=#TooltipText.Folder6#
TooltipText.Folder7=#TooltipText.Folder7#
TooltipText.Folder8=#TooltipText.Folder8#
TooltipText.Folder9=#TooltipText.Folder9#
TooltipText.Folder10=#TooltipText.Folder10#
TooltipText.Folder11=#TooltipText.Folder11#
TooltipText.Folder12=#TooltipText.Folder12#
TooltipText.Folder13=#TooltipText.Folder13#
TooltipText.Update=#TooltipText.Update#
TooltipText.Home=#TooltipText.Home#

[ToolTipster-TheyCallMePapa.Style]
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)

[ToolTipster-TheyCallMePapa]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle

[MeasureCustomName1]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "
OnUpdateAction=[!SetVariable TooltipText.CustomApp1 [MeasureCustomName1]][!WriteKeyValue Variables TooltipText.CustomApp1 [MeasureCustomName1]]
OnChangeAction=[!SetVariable TooltipText.CustomApp1 [MeasureCustomName1]][!WriteKeyValue Variables TooltipText.CustomApp1 [MeasureCustomName1]]

[MeasureCustomName2]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "
OnUpdateAction=[!SetVariable TooltipText.CustomApp2 [MeasureCustomName2]][!WriteKeyValue Variables TooltipText.CustomApp2 [MeasureCustomName2]]
OnChangeAction=[!SetVariable TooltipText.CustomApp2 [MeasureCustomName2]][!WriteKeyValue Variables TooltipText.CustomApp2 [MeasureCustomName2]]

[MeasureCustomName3]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "
OnUpdateAction=[!SetVariable TooltipText.CustomApp3 [MeasureCustomName3]][!WriteKeyValue Variables TooltipText.CustomApp3 [MeasureCustomName3]]
OnChangeAction=[!SetVariable TooltipText.CustomApp3 [MeasureCustomName3]][!WriteKeyValue Variables TooltipText.CustomApp3 [MeasureCustomName3]]

[MeasureCustomName4]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "
OnUpdateAction=[!SetVariable TooltipText.CustomApp4 [MeasureCustomName4]][!WriteKeyValue Variables TooltipText.CustomApp4 [MeasureCustomName4]]
OnChangeAction=[!SetVariable TooltipText.CustomApp4 [MeasureCustomName4]][!WriteKeyValue Variables TooltipText.CustomApp4 [MeasureCustomName4]]

[MeasureCustomName5]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "
OnUpdateAction=[!SetVariable TooltipText.CustomApp5 [MeasureCustomName5]][!WriteKeyValue Variables TooltipText.CustomApp5 [MeasureCustomName5]]
OnChangeAction=[!SetVariable TooltipText.CustomApp5 [MeasureCustomName5]][!WriteKeyValue Variables TooltipText.CustomApp5 [MeasureCustomName5]]

[MeasureCustomName6]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "
OnUpdateAction=[!SetVariable TooltipText.CustomApp6 [MeasureCustomName6]][!WriteKeyValue Variables TooltipText.CustomApp6 [MeasureCustomName6]]
OnChangeAction=[!SetVariable TooltipText.CustomApp6 [MeasureCustomName6]][!WriteKeyValue Variables TooltipText.CustomApp6 [MeasureCustomName6]]

[MeasureCustomName7]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "
OnUpdateAction=[!SetVariable TooltipText.CustomApp7 [MeasureCustomName7]][!WriteKeyValue Variables TooltipText.CustomApp7 [MeasureCustomName7]]
OnChangeAction=[!SetVariable TooltipText.CustomApp7 [MeasureCustomName7]][!WriteKeyValue Variables TooltipText.CustomApp7 [MeasureCustomName7]]

[MeasureCustomName8]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "
OnUpdateAction=[!SetVariable TooltipText.CustomApp8 [MeasureCustomName8]][!WriteKeyValue Variables TooltipText.CustomApp8 [MeasureCustomName8]]
OnChangeAction=[!SetVariable TooltipText.CustomApp8 [MeasureCustomName8]][!WriteKeyValue Variables TooltipText.CustomApp8 [MeasureCustomName8]]

[MeasureCustomName9]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "
OnUpdateAction=[!SetVariable TooltipText.CustomApp9 [MeasureCustomName9]][!WriteKeyValue Variables TooltipText.CustomApp9 [MeasureCustomName9]]
OnChangeAction=[!SetVariable TooltipText.CustomApp9 [MeasureCustomName9]][!WriteKeyValue Variables TooltipText.CustomApp9 [MeasureCustomName9]]

[MeasureCustomName10]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "
OnUpdateAction=[!SetVariable TooltipText.CustomApp10 [MeasureCustomName10]][!WriteKeyValue Variables TooltipText.CustomApp10 [MeasureCustomName10]]
OnChangeAction=[!SetVariable TooltipText.CustomApp10 [MeasureCustomName10]][!WriteKeyValue Variables TooltipText.CustomApp10 [MeasureCustomName10]]

[MeasureCustomName13]
Measure=String
String=
RegExpSubstitute=1
Substitute="-":" : Created by ","_":" "

[MeasureActionTimer.Tooltipster]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 200|ActivateTip
ActivateTip=
DynamicVariables=1
IgnoreWarnings=1

[ToolTipsterOverlayStyle]
X=[[##CURRENTSECTION#]:X]
Y=0
W=[[##CURRENTSECTION#]:W]
H=#TopHeight#
;-----Tooltip in the center of the bar-----
;MouseOverAction=[!CommandMeasure MeasureActionTimer "Stop 1" "Droptop\DropdownBar"][!Delay 10][!SetVariable NotificationText "[#TooltipText.[##CURRENTSECTION#]]" "Droptop\DropdownBar"][!SetVariable SlideNot "1"][!UpdateMeterGroup NotificationBar][!Redraw]
;MouseLeaveAction=[!SetVariable SlideNot "0"][!UpdateMeterGroup NotificationBar][!Redraw]
;------------------------------------------
;-----Tooltip in the Notification Popup-----
;MouseOverAction=[!WriteKeyValue Variables NotificationText "[#TooltipText.[##CURRENTSECTION#]]" "#SKINSPATH#Droptop\Other\NotificationPopup\NotificationPopup.ini"][!DeactivateConfig "Droptop\Other\NotificationPopup"][!ActivateConfig "Droptop\Other\NotificationPopup" "NotificationPopup.ini"][!SetWindowPosition "40%" "5%" "40%" "5%" "Droptop\Other\NotificationPopup"]
;MouseLeaveAction=[!DeactivateConfig "Droptop\Other\NotificationPopup"]
MouseOverAction=[!SetOption MeasureActionTimer.Tooltipster ActivateTip """[!WriteKeyValue Variables NotificationText "[#TooltipText.[##CURRENTSECTION#]]" "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Notification\Notification.ini"][!DeactivateConfig "Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Notification"][!ActivateConfig "Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Notification" "Notification.ini"][!SetWindowPosition "40%" "5%" "40%" "5%" "Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Notification"]"""][!UpdateMeasure MeasureActionTimer.Tooltipster][!CommandMeasure MeasureActionTimer.Tooltipster "Execute 1"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer.Tooltipster "Stop 1"]
;------------------------------------------
;Hidden=[#ToolTipster[##CURRENTSECTION#Num]]
Hidden=(([#ToolTipster[##CURRENTSECTION#Num]]-1)*-1)
DynamicVariables=1
Group=SysTray

[NewDesktop.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Time.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Alarm.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[VolumeIcon.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[MailIcon.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Weather.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Battery.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Wifi.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Downloads.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Recent.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Copy.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[AppDrawer.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder1.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder2.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder3.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder4.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder5.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder6.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder7.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder8.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder9.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder10.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder11.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder12.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Folder13.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Update.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[Home.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle

[CustomApp1.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]

[CustomApp2.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]

[CustomApp3.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]

[CustomApp4.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]

[CustomApp5.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]

[CustomApp6.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]

[CustomApp7.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]

[CustomApp8.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]

[CustomApp9.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]

[CustomApp10.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]

[CustomApp13.ToolTipsterOverlay]
Meter=String
MeterStyle=ToolTipsterOverlayStyle
ToolTipText=[&MeasureCustomName[##CURRENTSECTION#Num]]
Hidden=1

;[ToolTipster.Overflow]
;Measure=Calc
;Formula=#OverflowActionNum#
;IfAboveValue=0
;IfAboveAction=[!SetVariable Word "see"][!WriteKeyValue Variables Word "see" "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
;IfBelowValue=1
;IfBelowAction=[!SetVariable Word "hide"][!WriteKeyValue Variables Word "hide" "#SKINSPATH#Droptop Community Apps\Apps\ToolTipster-TheyCallMePapa\Variables\Variables.inc"]
;IfConditionMode=1
;DynamicVariables=1
;UpdateDivider=-1