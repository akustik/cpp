################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../DelegatedPokerDecisionMaker.cpp \
../FlashPokerDecisionMaker.cpp \
../HighCardPokerDecisionMaker.cpp \
../PokerCard.cpp \
../PokerDecisionMaker.cpp \
../PokerHand.cpp \
../PokerHandParser.cpp \
../PokerHandsRules.cpp 

OBJS += \
./DelegatedPokerDecisionMaker.o \
./FlashPokerDecisionMaker.o \
./HighCardPokerDecisionMaker.o \
./PokerCard.o \
./PokerDecisionMaker.o \
./PokerHand.o \
./PokerHandParser.o \
./PokerHandsRules.o 

CPP_DEPS += \
./DelegatedPokerDecisionMaker.d \
./FlashPokerDecisionMaker.d \
./HighCardPokerDecisionMaker.d \
./PokerCard.d \
./PokerDecisionMaker.d \
./PokerHand.d \
./PokerHandParser.d \
./PokerHandsRules.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/c++/4.6 -I/usr/include/c++/4.6/i686-linux-gnu -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


