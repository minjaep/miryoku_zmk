// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define U_LANG &u_macro_lang
#define U_A_LANG &u_macro_and_lang

#define U_HL(MOD, TAP) &hm_l MOD TAP
#define U_HR(MOD, TAP) &hm_r MOD TAP
#define U_HSL(MOD, TAP) &hm_shift_l MOD TAP
#define U_HSR(MOD, TAP) &hm_shift_r MOD TAP
#define U_HM(LAYER, TAP) &hm LAYER TAP

#if !defined (MIRYOKU_LAYER_LIST)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "English") \
MIRYOKU_X(EXTRA,  "Korean") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Android") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9

#endif


#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_HL(LGUI, A),     U_HL(LALT, R),     U_HL(LCTRL, S),    U_HSL(LSHFT, T),   &kp G,             &kp M,             U_HSR(LSHFT, N),   U_HR(LCTRL, E),    U_HR(LALT, I),     U_HR(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_HM(U_MEDIA, ESC),U_HM(U_NAV, SPACE),U_HM(U_MOUSE, TAB),U_HM(U_SYM, RET),  U_HM(U_NUM, BSPC), U_LANG,  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_HL(LGUI, A),     U_HL(LALT, S),     U_HL(LCTRL, D),    U_HSL(LSHFT, F),   &kp G,             &kp H,             U_HSR(LSHFT, J),   U_HR(LCTRL, K),    U_HR(LALT, L),     U_HR(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_HM(U_MEDIA, ESC),U_HM(U_NAV, SPACE),U_HM(U_MOUSE, TAB),U_HM(U_SYM, RET),  U_HM(U_NUM, BSPC), U_LANG,  U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN1,            U_BTN2,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&kp LC(Q),         &kp LC(W),         &kp LC(F),         &kp LC(P),         &kp LC(B),         U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp LC(G),         &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
&kp LC(Z),         &kp LC(X),         &kp LC(C),         &kp LC(D),         &kp LC(V),         &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            \
&trans,            &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            U_A_LANG,          &trans,            &trans


#if !defined (MIRYOKU_LAYOUTMAPPING_CORNE)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&soft_off       K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &soft_off \
&u_caps_word  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &tog U_FUN \
&tog U_EXTRA  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &tog U_BUTTON \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40

#define MINJAE_COMBOS_RIGHTLT 6 7
#define MINJAE_COMBOS_RIGHTLM 18 19
#define MINJAE_COMBOS_RIGHTLB 30 31
#define MINJAE_COMBOS_LEFTRT 4 5
#define MINJAE_COMBOS_LEFTRM 16 17
#define MINJAE_COMBOS_LEFTRB 28 29

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_CORNE


#if !defined (MIRYOKU_LAYOUTMAPPING_MINIDOX)

#define MIRYOKU_LAYOUTMAPPING_MINIDOX( \
K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
K20  K21  K22  K23  K24       K25  K26  K27  K28  K29 \
          K32  K33  K34       K35  K36  K37
          
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 1 2
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 6 7
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 7 8

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 21 22
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 22 23
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 27 28

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 31 32
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 33 34

#define MINJAE_COMBOS_RIGHTLT 5 6
#define MINJAE_COMBOS_RIGHTLM 15 16
#define MINJAE_COMBOS_RIGHTLB 25 26
#define MINJAE_COMBOS_LEFTRT 3 4
#define MINJAE_COMBOS_LEFTRM 13 14
#define MINJAE_COMBOS_LEFTRB 23 24

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_MINIDOX
