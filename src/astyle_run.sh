#!/bin/bash
astyle --options=astyle.options -R *.cpp > astyle_changes.txt
cat astyle_changes.txt

