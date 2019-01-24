################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Functions.Practice.cpp \
../src/convertDectoBin.cpp \
../src/exit.cpp \
../src/getLargestElem.cpp \
../src/isArmstOrPerf.cpp \
../src/isEvenOdd.cpp \
../src/isPrime.cpp \
../src/printNumRange.cpp \
../src/squareNum.cpp \
../src/sumSeries.cpp \
../src/swapTwoNum.cpp \
../src/writeToConsole.cpp 

OBJS += \
./src/Functions.Practice.o \
./src/convertDectoBin.o \
./src/exit.o \
./src/getLargestElem.o \
./src/isArmstOrPerf.o \
./src/isEvenOdd.o \
./src/isPrime.o \
./src/printNumRange.o \
./src/squareNum.o \
./src/sumSeries.o \
./src/swapTwoNum.o \
./src/writeToConsole.o 

CPP_DEPS += \
./src/Functions.Practice.d \
./src/convertDectoBin.d \
./src/exit.d \
./src/getLargestElem.d \
./src/isArmstOrPerf.d \
./src/isEvenOdd.d \
./src/isPrime.d \
./src/printNumRange.d \
./src/squareNum.d \
./src/sumSeries.d \
./src/swapTwoNum.d \
./src/writeToConsole.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


