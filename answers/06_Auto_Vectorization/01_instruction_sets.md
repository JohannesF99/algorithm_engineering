# Topic

Name some characteristics of the instructions sets: SSE,
AVX(2) and AVX-512.

## SSE instruction set

The SSE instruvtion set was first launched in 1999, but until 2009 new versions were realeased, with SSE4.2 being the latest one. 
The name stands for "Streaming SIMD Extensions".
The typical vector length is 128 Bit long and uses the registers xmm0 to xmm15.
Also, the SSE set supports integer and floating-point-calculations and can be parallised.
SSE is very commonly used and integrated in many Intel and AMD-CPUs.

## AVX(2) instruction set

The AVX(2) instruction set is an extension of the AVX set and was launched in 2013. 
AVX stands for "Advanced Vector Extensions" and has a 256 Bit vector length. 
In contrast to SSE, AVX(2) uses the ymm0 to ymm15 regsiters.
AVX(2) supports bit manipulation, doubles the amount of integer operations in one tick and improves the broadcast- and gather-operations from the classic AVX.
Modern mainstream CPUs support AVX(2).

## AVX-512 instruction set

The AVX-512 instruction set is again an extension to the AVX(2) set.
Like the name suggest, the biggest difference is the vector length, which is now doubled (again) to 512 Bit.
It was released in 2017 and doesn't use the ymm registers, but rather uses the zmm0 to zmm31 register.
Not only doubled the vector length, but also the number of usable registers from 16 to 32.
While modern mainstream CPUs support typically AVX(2), CPUs dedicated to high-performance computing usually support AVX-512.
The AVX-512 set also supports masking of vector operations and extended Fused Multiply-Add (FMA) operations.