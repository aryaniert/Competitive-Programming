@echo off
setlocal enabledelayedexpansion
chcp 65001 >nul  :: Enable UTF-8 support for special characters (optional)

:: Define the expected local project directory
set "LOCAL_PROJECT_DIR=C:\Workspace\Competitive-Programming\"

:: Check if the local directory exists
if exist "%LOCAL_PROJECT_DIR%" (
    echo [INFO] Using local project directory: %LOCAL_PROJECT_DIR%
    cd /d "%LOCAL_PROJECT_DIR%"
) else (
    echo [WARNING] Local directory not found. Going one level back...
    cd ..
    
    :: Check again if the Competitive-Programming folder exists in the new location
    if not exist "Competitive-Programming\" (
        echo [ERROR] Could not find the Competitive-Programming folder after going back!
        pause
        exit /b
    )
    
    cd "Competitive-Programming"
)

:: Confirm the current directory
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
git commit -m "add %commit_message% solution"
git push origin master

:: Success Message
echo [SUCCESS] Code committed and pushed successfully!
pause
exit /b
