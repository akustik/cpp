################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../KataPokerHandsCli2.cpp 

OBJS += \
./KataPokerHandsCli2.o 

CPP_DEPS += \
./KataPokerHandsCli2.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"$(WORKSPACE)/KataPokerHandsCli2/ext" -I/usr/include/c++/4.6 -I/usr/include/c++/4.6/i686-linux-gnu -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


