################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Models/Board.cpp \
../Models/Card.cpp \
../Models/Deck.cpp \
../Models/Foundation.cpp \
../Models/Game.cpp \
../Models/Pile.cpp \
../Models/Queue.cpp \
../Models/Stack.cpp \
../Models/Waste.cpp 

OBJS += \
./Models/Board.o \
./Models/Card.o \
./Models/Deck.o \
./Models/Foundation.o \
./Models/Game.o \
./Models/Pile.o \
./Models/Queue.o \
./Models/Stack.o \
./Models/Waste.o 

CPP_DEPS += \
./Models/Board.d \
./Models/Card.d \
./Models/Deck.d \
./Models/Foundation.d \
./Models/Game.d \
./Models/Pile.d \
./Models/Queue.d \
./Models/Stack.d \
./Models/Waste.d 


# Each subdirectory must supply rules for building sources it contributes
Models/%.o: ../Models/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


