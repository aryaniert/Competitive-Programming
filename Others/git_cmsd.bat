@echo off
setlocal enabledelayedexpansion
chcp 65001 >nul  :: Enable UTF-8 support for special characters (optional)

echo [INFO] Moving one directory back...
cd ..

echo [INFO] Current directory: %CD%

:: Prompt for commit message
set /p commit_message=Enter commit message:  
if "%commit_message%"=="" (
    echo [ERROR] Commit message cannot be empty!
    pause
    exit /b
)

:: Git Operations
git add .
git commit -m "%commit_message%"
git push origin master

echo [SUCCESS] Code committed and pushed successfully!
pause
exit /b
