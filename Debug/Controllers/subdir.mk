################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Controllers/CelebrateController.cpp \
../Controllers/Controller.cpp \
../Controllers/DemoController.cpp \
../Controllers/EndController.cpp \
../Controllers/Logic.cpp \
../Controllers/ManualController.cpp \
../Controllers/StartController.cpp 

OBJS += \
./Controllers/CelebrateController.o \
./Controllers/Controller.o \
./Controllers/DemoController.o \
./Controllers/EndController.o \
./Controllers/Logic.o \
./Controllers/ManualController.o \
./Controllers/StartController.o 

CPP_DEPS += \
./Controllers/CelebrateController.d \
./Controllers/Controller.d \
./Controllers/DemoController.d \
./Controllers/EndController.d \
./Controllers/Logic.d \
./Controllers/ManualController.d \
./Controllers/StartController.d 


# Each subdirectory must supply rules for building sources it contributes
Controllers/%.o: ../Controllers/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


