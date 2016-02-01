################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/NodeController/ArrayNode.cpp \
../src/NodeController/Node.cpp \
../src/NodeController/NodeController.cpp \
../src/NodeController/Runner.cpp 

OBJS += \
./src/NodeController/ArrayNode.o \
./src/NodeController/Node.o \
./src/NodeController/NodeController.o \
./src/NodeController/Runner.o 

CPP_DEPS += \
./src/NodeController/ArrayNode.d \
./src/NodeController/Node.d \
./src/NodeController/NodeController.d \
./src/NodeController/Runner.d 


# Each subdirectory must supply rules for building sources it contributes
src/NodeController/%.o: ../src/NodeController/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


