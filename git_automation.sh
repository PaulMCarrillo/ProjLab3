#!/bin/bash

inotifywait -m /path -e create -e moved_to |
    while read path action file; do
        if [[ "$data" =~ .*txt$ ]]; then # Does the file end with .xml?
            echo "txt file" # If so, do your thing here!
        fi
    done

