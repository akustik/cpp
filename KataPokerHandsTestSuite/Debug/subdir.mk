################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../PokerCardTest.cpp \
../PokerHandParserTest.cpp \
../PokerHandTest.cpp \
../PokerHandsRulesTest.cpp 

OBJS += \
./PokerCardTest.o \
./PokerHandParserTest.o \
./PokerHandTest.o \
./PokerHandsRulesTest.o 

CPP_DEPS += \
./PokerCardTest.d \
./PokerHandParserTest.d \
./PokerHandTest.d \
./PokerHandsRulesTest.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/c++/4.6 -I/usr/include/c++/4.6/i686-linux-gnu -I/usr/include/gtest -I"/home/guillem/Development/sources/github/cppkatas/KataPokerHands" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


