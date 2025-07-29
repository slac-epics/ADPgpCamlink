#!/bin/bash

prefix="\""
postfix="|\"\\"
first="true"
macro="#define ROGUE_ADDR_MAP "

echo "// #############################################"
echo "// Auto Generated Header File From Rogue"
echo "// #############################################"
echo "#ifndef __ROGUE_ADDR_MAP_H__"
echo "#define __ROGUE_ADDR_MAP_H__"
echo ""

# Read each line
while read -r line; do
    # Check if it spans multiple lines (i.e look for "\" at the end)
    if [[ $line =~ ^Path.+$ ]]; then
      echo $macro$prefix$line" "$postfix
    elif [[ $line =~ ^.+\\$ ]] && [[ $first == "true" ]]; then
      echo "     "$prefix$line
      first="false"
    elif [[ $line =~ ^.+\\$ ]] && [[ $first == "false" ]]; then
      echo $line
    elif [[ $line =~ ^.*$ ]] && [[ $first == "false" ]]; then
      echo $line$postfix
      first="true"
    else
      echo "     "$prefix$line" "$postfix
    fi
    done < $1 

echo ""
echo "#endif"
