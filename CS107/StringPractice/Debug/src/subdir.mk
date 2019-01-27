################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/StringPractice.cpp \
../src/exit.cpp \
../src/printString.cpp 

OBJS += \
./src/StringPractice.o \
./src/exit.o \
./src/printString.o 

CPP_DEPS += \
./src/StringPractice.d \
./src/exit.d \
./src/printString.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


