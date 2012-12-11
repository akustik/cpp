Configurations used to set up this module:

- Installed gtest from sources, compiled and added includes for /usr/include/gtest
- Installed hippomocks and added headers for /usr/include/hippomocks/HippoMocks
- Added includes for the hellolibrary header at "${workspace_loc:/hellolibrary}"
- Added links (-l) to gtest, gtest_main, hellolibrary and pthread.
- Added library search path to "${workspace_loc:/hellolibrary/Debug}"
- Added to the run configuration the LD_LIBRARY_PATH for ${workspace_loc:/hellolibrary/Debug}:
- Created a cpp unit configuration with google test runer and the same LD_LIBRARY_PATH