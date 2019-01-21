################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Unit\ 1\ Exercises.cpp \
../src/calc.cpp \
../src/iterateFib.cpp \
../src/recurseFib.cpp \
../src/sum.cpp \
../src/voidSum.cpp 

OBJS += \
./src/Unit\ 1\ Exercises.o \
./src/calc.o \
./src/iterateFib.o \
./src/recurseFib.o \
./src/sum.o \
./src/voidSum.o 

CPP_DEPS += \
./src/Unit\ 1\ Exercises.d \
./src/calc.d \
./src/iterateFib.d \
./src/recurseFib.d \
./src/sum.d \
./src/voidSum.d 


# Each subdirectory must supply rules for building sources it contributes
src/Unit\ 1\ Exercises.o: ../src/Unit\ 1\ Exercises.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Unit 1 Exercises.d" -MT"src/Unit\ 1\ Exercises.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


