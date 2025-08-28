#include <stdio.h> // Incluye la biblioteca stdio.h
#include <stdint.h>
// int main() {
// char c = 100;
// short s = -8712;
// int i = 123456;
// long l = 1234567890;
// printf("char(%lu): %d \n", sizeof(c),c);
// printf("short(%lu): %d \n", sizeof(s),s);
// printf("int(%lu): %d \n", sizeof(i),i);
// printf("long(%lu): %ld \n", sizeof(l),l);
// return 0;
// }

int main(){
    int8_t i8 = 0;
    int16_t i16 = 0;
    int32_t i32 = 0;
    int64_t i64 = 0;
    uint8_t u8 = 0;
    uint16_t u16 = 0;
    uint32_t u32 = 0;
    uint64_t u64 = 0;

     printf("int8_t (%zu bytes): %d \n", sizeof(i8), i8);
    printf("int16_t (%zu bytes): %d \n", sizeof(i16), i16);
    printf("int32_t (%zu bytes): %d \n", sizeof(i32), i32);
    printf("int64_t (%zu bytes): %lld \n", sizeof(i64), i64);
    printf("uint8_t (%zu bytes): %u \n", sizeof(u8), u8);
    printf("uint16_t (%zu bytes): %u \n", sizeof(u16), u16);
    printf("uint32_t (%zu bytes): %u \n", sizeof(u32), u32);
    printf("uint64_t (%zu bytes): %llu \n", sizeof(u64), u64);

}