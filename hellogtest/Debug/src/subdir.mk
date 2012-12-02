################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/HelloWorld_test.cpp 

OBJS += \
./src/HelloWorld_test.o 

CPP_DEPS += \
./src/HelloWorld_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/c++/4.6 -I"/home/guillem/Development/sources/github/cppkatas/hellolibrary" -I/usr/include/c++/4.6/i686-linux-gnu -I/usr/include/gtest -I/usr/include/hippomocks/HippoMocks -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


