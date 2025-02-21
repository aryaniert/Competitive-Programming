@echo off
setlocal enabledelayedexpansion
chcp 65001 >nul  :: Enable UTF-8 support for special characters (optional)

:: Navigate to the project directory
cd /d "C:\Workspace\Competitive-Programming\" || (
    echo [ERROR] Could not navigate to the project folder!
    pause
    exit /b
)

:: Prompt for commit message
set /p commit_message=Enter commit message:  
if "%commit_message%"=="" (
    echo [ERROR] Commit message cannot be empty!
    pause
    exit /b
)

:: Git Operations
git add .
git commit -m "add %commit_message% solution"
git push origin master

:: Success Message
echo [SUCCESS] Code committed and pushed successfully!
pause
exit /b
