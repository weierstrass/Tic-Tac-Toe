#!/bin/sh

./build.sh

saveCurrentFolder=`pwd`

echo "Step 4: Run Unit Tests."
cd ../build/test
./unitTest -race -p 1 ${TESTPATHS} || FAILURE=1

cd $saveCurrentFolder