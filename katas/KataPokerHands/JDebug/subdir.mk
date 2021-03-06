################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../DelegatedPokerDecisionMaker.cpp \
../FlashPokerDecisionMaker.cpp \
../FourOfKindPokerDecisionMaker.cpp \
../FullHousePokerDecisionMaker.cpp \
../HighCardPokerDecisionMaker.cpp \
../PokerCard.cpp \
../PokerCardException.cpp \
../PokerDecisionMaker.cpp \
../PokerHand.cpp \
../PokerHandParser.cpp \
../PokerHandsRules.cpp \
../SimplePairPokerDecisionMaker.cpp \
../StraightFlashPokerDecisionMaker.cpp \
../StraightPokerDecisionMaker.cpp \
../ThreeOfAKindPokerDecisionMaker.cpp \
../TwoPairsPokerDecisionMaker.cpp 

OBJS += \
./DelegatedPokerDecisionMaker.o \
./FlashPokerDecisionMaker.o \
./FourOfKindPokerDecisionMaker.o \
./FullHousePokerDecisionMaker.o \
./HighCardPokerDecisionMaker.o \
./PokerCard.o \
./PokerCardException.o \
./PokerDecisionMaker.o \
./PokerHand.o \
./PokerHandParser.o \
./PokerHandsRules.o \
./SimplePairPokerDecisionMaker.o \
./StraightFlashPokerDecisionMaker.o \
./StraightPokerDecisionMaker.o \
./ThreeOfAKindPokerDecisionMaker.o \
./TwoPairsPokerDecisionMaker.o 

CPP_DEPS += \
./DelegatedPokerDecisionMaker.d \
./FlashPokerDecisionMaker.d \
./FourOfKindPokerDecisionMaker.d \
./FullHousePokerDecisionMaker.d \
./HighCardPokerDecisionMaker.d \
./PokerCard.d \
./PokerCardException.d \
./PokerDecisionMaker.d \
./PokerHand.d \
./PokerHandParser.d \
./PokerHandsRules.d \
./SimplePairPokerDecisionMaker.d \
./StraightFlashPokerDecisionMaker.d \
./StraightPokerDecisionMaker.d \
./ThreeOfAKindPokerDecisionMaker.d \
./TwoPairsPokerDecisionMaker.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/c++/4.6 -I/usr/include/c++/4.6/i686-linux-gnu -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


