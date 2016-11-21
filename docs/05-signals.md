# signals.c

Defines and registers a handler for SIGTERM.

## Building and running the program

    gcc -c signal.c
    gcc signal.o -o signal.exe

    ./signal.exe

## Sending a SIGTERM signal

In another terminal,

    ps aux | grep signal

Note the process ID the running program.

    kill -SIGTERM <process-id>

## Killing the process immediately

    kill -SIGKILL <process-id>
    
## See also

* [Catch SIGTERM, exit gracefully](https://airtower.wordpress.com/2010/06/16/catch-sigterm-exit-gracefully/)


