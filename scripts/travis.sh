#!/bin/sh

./build.sh

saveCurrentFolder=$(pwd)

set -evx

echo "Step 4: Run Unit Tests."
cd ../build/test
./unitTest

cd $saveCurrentFolder
