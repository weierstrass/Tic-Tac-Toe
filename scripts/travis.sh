#!/bin/sh

./build.sh

saveCurrentFolder=$(pwd)

set -evx

echo "Step 4: Run Unit Tests."
cd ../build/test
./unitTest

# This is a test, to do like Google is doing.
CTEST_OUTPUT_ON_FAILURE=1 make test

cd $saveCurrentFolder
