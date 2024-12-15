#ifndef FFMPEG_CONFIG_CPU_H
#define FFMPEG_CONFIG_CPU_H

  // Check for AArch64 (64-bit ARM)
  #undef ARCH_AARCH64
  #if defined(__aarch64__)
    #define ARCH_AARCH64 1
  #else
    #define ARCH_AARCH64 0
  #endif

  // Check for ARM (32-bit)
  #undef ARCH_ARM
  #if defined(__arm__) || defined(_M_ARM)
    #define ARCH_ARM 1
  #else
    #define ARCH_ARM 0
  #endif

  // Check for ARM versions
  #undef HAVE_ARMV8
  #if defined(__ARM_ARCH)
  #if __ARM_ARCH == 8
    #define HAVE_ARMV8 1
  #else
    #define HAVE_ARMV8 0
  #endif
  #endif

  // Check for PowerPC (PPC)
  #undef ARCH_PPC
  #if defined(__ppc__) || defined(__powerpc__) || defined(__PPC__) ||            \
      defined(__POWERPC__)
    #define ARCH_PPC 1
  #else
    #define ARCH_PPC 0
  #endif

  // Check for RISC-V
  #undef ARCH_RISCV
  #if defined(__riscv)
    #define ARCH_RISCV 1
  #else
    #define ARCH_RISCV 0
  #endif

  // Check for MIPS
  #undef ARCH_MIPS
  #if defined(__mips__)
    #define ARCH_MIPS 1
  #else
    #define ARCH_MIPS 0
  #endif

  // Check for either x86 (32-bit) or x64 (64-bit)
  #undef ARCH_X86
  #if defined(__i386__) || defined(_M_IX86) || defined(__x86_64__) ||            \
      defined(_M_X64)
  #define ARCH_X86 1
  #else
  #define ARCH_X86 0
  #endif

  // Check for x86 (32-bit)
  #undef ARCH_X86_32
  #if defined(__i386__) || defined(_M_IX86)
  #define ARCH_X86_32 1
  #else
  #define ARCH_X86_32 0
  #endif

  // Check for x86_64 (64-bit)
  #undef ARCH_X86_64
  #if defined(__x86_64__) || defined(_M_X64)
    #define ARCH_X86_64 1
  #else
    #define ARCH_X86_64 0
  #endif

  // Check for LoongArch
  #undef ARCH_LOONGARCH
  #if defined(__loongarch__) || defined(__loongarch64)
    #define ARCH_LOONGARCH 1
  #else
    #define ARCH_LOONGARCH 0
  #endif

  #ifdef LIBCONFIG_PRINT_DEFINES_C
    // figure out .arch directive value, but only while printing
    // defines. we want to end up with a literal define, otherwise
    // the preprocessor will mess it up during tokenization.
    // examples of final result:
    //   #define AS_ARCH_LEVEL armv8.2-a
    //   #define AS_ARCH_LEVEL armv8.6-a+crc
    #if !defined(AS_ARCH_LEVEL) && defined(__ARM_ARCH)

      // Start from a baseline version:
      #define AS_ARCH_MAJOR_ __ARM_ARCH
      #define AS_ARCH_MINOR_ 0
      #define AS_ARCH_EXT_ a

      // Upgrade baseline based on specific features:
      #if defined(__ARM_FEATURE_FP16_SCALAR_ARITHMETIC)
        #undef AS_ARCH_MINOR_
        #define AS_ARCH_MINOR_ 2 // armv8.2-a introduces FP16
      #endif

      // DOTPROD introduced in armv8.4-a
      #if defined(__ARM_FEATURE_DOTPROD)
        #undef AS_ARCH_MINOR_
        #define AS_ARCH_MINOR_ 4 // armv8.4-a introduces DOTPROD
      #endif

      // CRC32 support
      #if defined(__ARM_FEATURE_CRC32)
        #undef AS_ARCH_MINOR_
        #define AS_ARCH_MINOR_ 6
        #undef AS_ARCH_EXT_
        #define AS_ARCH_EXT_ a+crc
      #endif

      #define PREF() armv
      #define AS_ARCH_MAJOR() AS_ARCH_MAJOR_
      #define AS_ARCH_MINOR() AS_ARCH_MINOR_
      #define AS_ARCH_EXT() AS_ARCH_EXT_

      #define CFG_CPU_H_CAT_(x, y, z) x ## y ## z
      #define CFG_CPU_H_CAT(x, y, z) CFG_CPU_H_CAT_(x, y, z)
      #define AS_ARCH_LEVEL PREF()AS_ARCH_MAJOR().AS_ARCH_MINOR()-AS_ARCH_EXT()
    #endif
  #endif
#endif
