#!/bin/sh

./build.sh

saveCurrentFolder=`pwd`

echo "Step 4: Run Unit Tests."
cd ../build/test
./unitTest

cd $saveCurrentFolder