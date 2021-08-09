#!/bin/sh
find . -name  "*.sh" -type f | sed 's/.sh$//' | rev | cut -f 1 -d / | rev
