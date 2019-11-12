################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/calcMatriz.c \
../src/funcoes.c \
../src/matriz.c \
../src/ponteiro.c 

OBJS += \
./src/calcMatriz.o \
./src/funcoes.o \
./src/matriz.o \
./src/ponteiro.o 

C_DEPS += \
./src/calcMatriz.d \
./src/funcoes.d \
./src/matriz.d \
./src/ponteiro.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


