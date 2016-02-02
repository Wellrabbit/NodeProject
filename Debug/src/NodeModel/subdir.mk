################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/NodeModel/ArrayNode.cpp \
../src/NodeModel/CTECArray.cpp \
../src/NodeModel/Node.cpp 

OBJS += \
./src/NodeModel/ArrayNode.o \
./src/NodeModel/CTECArray.o \
./src/NodeModel/Node.o 

CPP_DEPS += \
./src/NodeModel/ArrayNode.d \
./src/NodeModel/CTECArray.d \
./src/NodeModel/Node.d 


# Each subdirectory must supply rules for building sources it contributes
src/NodeModel/%.o: ../src/NodeModel/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


