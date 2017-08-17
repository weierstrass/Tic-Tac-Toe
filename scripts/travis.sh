#!/bin/sh

saveCurrentFolder=`pwd`

./build.sh

echo "Step 4: Run Unit Tests."
cd test
./unitTest

cd $saveCurrentFolder