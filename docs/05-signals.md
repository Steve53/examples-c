# signals.c

Defines and registers a handler for SIGTERM.

## Building and running the program

    gcc -c signals.c
    gcc signals.o -o signals.exe

    ./signals.exe

## Sending a SIGTERM signal

In another terminal, list the signals process.
Note the process ID:

    ps aux | grep signals

Terminate the process:

    kill -SIGTERM <process-id>

## Killing the process immediately

    kill -SIGKILL <process-id>

## Running in a container

Put this Dockerfile in the same directory as signals.exe:

    FROM debian
    COPY signals.exe /bin/
    CMD ["/bin/signals.exe"]

Build a Docker image:

    sudo docker build --tag=signals .

List the Docker images; note the image ID:

    sudo docker ps

Run the image:

    sudo docker run <image-id>

In another terminal:

    sudo docker exec -i -t <image-id> bash 

In the shell to the container, list the signals process.
Note the process ID:

    ps aux | grep signals

Terminate the process

    kill -SIGTERM <process-id>
  
## See also

* [Catch SIGTERM, exit gracefully](https://airtower.wordpress.com/2010/06/16/catch-sigterm-exit-gracefully/)


