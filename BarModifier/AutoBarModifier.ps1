﻿# This script automatically duplicates BarModifier1.inc and replaces all instances of "CustomApp1" with their respective slot numbers (Eg. "CustomApp2", "CustomApp3")

$ErrorActionPreference= 'silentlycontinue'

Copy-Item -Path ".\BarModifier1.inc" -Destination ".\BarModifier2.inc" -Recurse
Copy-Item -Path ".\BarModifier1.inc" -Destination ".\BarModifier3.inc" -Recurse
Copy-Item -Path ".\BarModifier1.inc" -Destination ".\BarModifier4.inc" -Recurse
Copy-Item -Path ".\BarModifier1.inc" -Destination ".\BarModifier5.inc" -Recurse

$path = ".\BarModifier2.inc"
(Get-Content $path) -replace "CustomApp1","CustomApp2" | out-file $path
(Get-Content $path) -replace "MeasureCustomName1","MeasureCustomName2" | out-file $path
(Get-Content $path) -replace "CustomAppID1","CustomAppID2" | out-file $path
(Get-Content $path) -replace "CustomAppName1","CustomAppName2" | out-file $path

$path = ".\BarModifier3.inc"
(Get-Content $path) -replace "CustomApp1","CustomApp3" | out-file $path
(Get-Content $path) -replace "MeasureCustomName1","MeasureCustomName3" | out-file $path
(Get-Content $path) -replace "CustomAppID1","CustomAppID3" | out-file $path
(Get-Content $path) -replace "CustomAppName1","CustomAppName3" | out-file $path 

$path = ".\BarModifier4.inc"
(Get-Content $path) -replace "CustomApp1","CustomApp4" | out-file $path
(Get-Content $path) -replace "MeasureCustomName1","MeasureCustomName4" | out-file $path
(Get-Content $path) -replace "CustomAppID1","CustomAppID4" | out-file $path
(Get-Content $path) -replace "CustomAppName1","CustomAppName4" | out-file $path

$path = ".\BarModifier5.inc"
(Get-Content $path) -replace "CustomApp1","CustomApp5" | out-file $path
(Get-Content $path) -replace "MeasureCustomName1","MeasureCustomName5" | out-file $path
(Get-Content $path) -replace "CustomAppID1","CustomAppID5" | out-file $path
(Get-Content $path) -replace "CustomAppName1","CustomAppName5" | out-file $path