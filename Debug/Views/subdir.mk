################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Views/CelebrateView.cpp \
../Views/ConsoleView.cpp \
../Views/EndView.cpp \
../Views/GameView.cpp \
../Views/StartView.cpp 

OBJS += \
./Views/CelebrateView.o \
./Views/ConsoleView.o \
./Views/EndView.o \
./Views/GameView.o \
./Views/StartView.o 

CPP_DEPS += \
./Views/CelebrateView.d \
./Views/ConsoleView.d \
./Views/EndView.d \
./Views/GameView.d \
./Views/StartView.d 


# Each subdirectory must supply rules for building sources it contributes
Views/%.o: ../Views/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


