#!/bin/sh

./build.sh

saveCurrentFolder=$(pwd)

set -evx

echo "Step 4: Code coverage."
# Creating report
cd ${TRAVIS_BUILD_DIR}
lcov --directory . --capture --output-file coverage.info # capture coverage info
lcov --remove coverage.info '/usr/*' --output-file coverage.info # filter out system
lcov --list coverage.info #debug info

# Uploading report to CodeCov
bash <(curl -s https://codecov.io/bash) || echo "Codecov did not collect coverage reports"

cd $saveCurrentFolder

echo "Step 5: Run Unit Tests."
cd ../build/test
./unitTest

cd $saveCurrentFolder
