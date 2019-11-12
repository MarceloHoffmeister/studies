################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/calcVetor.c \
../src/funcoes.c \
../src/ponteiro.c \
../src/vetor.c 

OBJS += \
./src/calcVetor.o \
./src/funcoes.o \
./src/ponteiro.o \
./src/vetor.o 

C_DEPS += \
./src/calcVetor.d \
./src/funcoes.d \
./src/ponteiro.d \
./src/vetor.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


