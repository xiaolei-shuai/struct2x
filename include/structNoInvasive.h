#ifndef __STRUCT_NOINVASIVEMACRO_H__
#define __STRUCT_NOINVASIVEMACRO_H__


#define NI_EXPAND(args) args

#define NISERIALIZATION_0(c, p) convert(#p, c.p)
#define NISERIALIZATION_1(c, p) NISERIALIZATION_0(c, p)
#define NISERIALIZATION_2(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_1(c, __VA_ARGS__))
#define NISERIALIZATION_3(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_2(c, __VA_ARGS__))
#define NISERIALIZATION_4(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_3(c, __VA_ARGS__))
#define NISERIALIZATION_5(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_4(c, __VA_ARGS__))
#define NISERIALIZATION_6(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_5(c, __VA_ARGS__))
#define NISERIALIZATION_7(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_6(c, __VA_ARGS__))
#define NISERIALIZATION_8(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_7(c, __VA_ARGS__))
#define NISERIALIZATION_9(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_8(c, __VA_ARGS__))
#define NISERIALIZATION_10(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_9(c, __VA_ARGS__))
#define NISERIALIZATION_11(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_10(c, __VA_ARGS__))
#define NISERIALIZATION_12(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_11(c, __VA_ARGS__))
#define NISERIALIZATION_13(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_12(c, __VA_ARGS__))
#define NISERIALIZATION_14(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_13(c, __VA_ARGS__))
#define NISERIALIZATION_15(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_14(c, __VA_ARGS__))
#define NISERIALIZATION_16(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_15(c, __VA_ARGS__))
#define NISERIALIZATION_17(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_16(c, __VA_ARGS__))
#define NISERIALIZATION_18(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_17(c, __VA_ARGS__))
#define NISERIALIZATION_19(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_18(c, __VA_ARGS__))
#define NISERIALIZATION_20(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_19(c, __VA_ARGS__))
#define NISERIALIZATION_21(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_20(c, __VA_ARGS__))
#define NISERIALIZATION_22(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_21(c, __VA_ARGS__))
#define NISERIALIZATION_23(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_22(c, __VA_ARGS__))
#define NISERIALIZATION_24(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_23(c, __VA_ARGS__))
#define NISERIALIZATION_25(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_24(c, __VA_ARGS__))
#define NISERIALIZATION_26(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_25(c, __VA_ARGS__))
#define NISERIALIZATION_27(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_26(c, __VA_ARGS__))
#define NISERIALIZATION_28(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_27(c, __VA_ARGS__))
#define NISERIALIZATION_29(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_28(c, __VA_ARGS__))
#define NISERIALIZATION_30(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_29(c, __VA_ARGS__))
#define NISERIALIZATION_31(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_30(c, __VA_ARGS__))
#define NISERIALIZATION_32(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_31(c, __VA_ARGS__))
#define NISERIALIZATION_33(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_32(c, __VA_ARGS__))
#define NISERIALIZATION_34(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_33(c, __VA_ARGS__))
#define NISERIALIZATION_35(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_34(c, __VA_ARGS__))
#define NISERIALIZATION_36(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_35(c, __VA_ARGS__))
#define NISERIALIZATION_37(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_36(c, __VA_ARGS__))
#define NISERIALIZATION_38(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_37(c, __VA_ARGS__))
#define NISERIALIZATION_39(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_38(c, __VA_ARGS__))
#define NISERIALIZATION_40(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_39(c, __VA_ARGS__))
#define NISERIALIZATION_41(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_40(c, __VA_ARGS__))
#define NISERIALIZATION_42(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_41(c, __VA_ARGS__))
#define NISERIALIZATION_43(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_42(c, __VA_ARGS__))
#define NISERIALIZATION_44(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_43(c, __VA_ARGS__))
#define NISERIALIZATION_45(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_44(c, __VA_ARGS__))
#define NISERIALIZATION_46(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_45(c, __VA_ARGS__))
#define NISERIALIZATION_47(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_46(c, __VA_ARGS__))
#define NISERIALIZATION_48(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_47(c, __VA_ARGS__))
#define NISERIALIZATION_49(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_48(c, __VA_ARGS__))
#define NISERIALIZATION_50(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_49(c, __VA_ARGS__))
#define NISERIALIZATION_51(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_50(c, __VA_ARGS__))
#define NISERIALIZATION_52(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_51(c, __VA_ARGS__))
#define NISERIALIZATION_53(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_52(c, __VA_ARGS__))
#define NISERIALIZATION_54(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_53(c, __VA_ARGS__))
#define NISERIALIZATION_55(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_54(c, __VA_ARGS__))
#define NISERIALIZATION_56(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_55(c, __VA_ARGS__))
#define NISERIALIZATION_57(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_56(c, __VA_ARGS__))
#define NISERIALIZATION_58(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_57(c, __VA_ARGS__))
#define NISERIALIZATION_59(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_58(c, __VA_ARGS__))
#define NISERIALIZATION_60(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_59(c, __VA_ARGS__))
#define NISERIALIZATION_61(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_60(c, __VA_ARGS__))
#define NISERIALIZATION_62(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_61(c, __VA_ARGS__))
#define NISERIALIZATION_63(c, p, ...) NISERIALIZATION_0(c, p) . NI_EXPAND(NISERIALIZATION_62(c, __VA_ARGS__))


#define NI_COUNT_PARMS_IMP(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, \
               _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
               _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
               _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
               _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
               _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, NUM, ...) NUM

#define NI_COUNT_PARMS(...) NI_EXPAND(NI_COUNT_PARMS_IMP(__VA_ARGS__, 63, 62, 61 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, \
                                                             50, 49, 48, 47, 46, 45, 44, 43, 42, 41, \
                                                             40, 39, 38, 37, 36, 35, 34, 33, 32, 31, \
                                                             30, 29, 28, 27, 26, 25, 24, 23, 22, 21, \
                                                             20, 19, 18, 17, 16, 15, 14, 13, 12, 11, \
                                                             10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0))

#define NI_MAKE_CALL(t, f) t . f

#define NI_SYMBOL_CATENATE(arg1, arg2) arg1 ## arg2

#define NI_SYMBOL_CATENATE_WITH_MACRO(arg1, arg2) NI_SYMBOL_CATENATE(arg1, arg2)

#define NISERIALIZATION(t, c, ...) NI_EXPAND(NI_MAKE_CALL(t, NI_EXPAND(NI_SYMBOL_CATENATE_WITH_MACRO(NISERIALIZATION_, NI_EXPAND(NI_COUNT_PARMS(c, __VA_ARGS__)))(c, __VA_ARGS__))))


#endif