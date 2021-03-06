; $Id$
;
; This file is a charset conversion module in text form.
; Build on FEB 2003 by Laurent Jumet <laurent.jumet@advalvas.be>
;
; This module Converts IBM CP850 characters to ISO 8859-1 q-p characters.
;
; Format: ID, version, level,
;         from charset, to charset,
;         128 entries: first & second byte
;	  "END"
; Lines beginning with a ";" or a ";" after the entries are comments
;
; Unknown characters are mapped to the "?" character.
;
; cedilla = ,   ; dieresis = ..       ; acute = '
; grave = `     ; circumflex = ^      ; ring = o
; tilde = ~     ; caron = v
; All of these are above the character, apart from the cedilla which is below.
;
; \ is the escape character: \0 means decimal zero,
; \dnnn where nnn is a decimal number is the ordinal value of the character
; \xnn where nn is a hexadecimal number
; e.g.: \d32 is the ASCII space character
; Two \\ is the character "\" itself.
;
100000          ; ID number (when >65535, all 255 chars will be translated)
0		; version number
;
2		; level number
;
CP850           ; from set
LATIN1QP        ; to set
;               ; dec hx description
\0 \d0          ;   0 00
\0 \d1          ;   1 01
\0 \d2          ;   2 02
\0 \d3          ;   3 03
\0 \d4          ;   4 04
\0 \d5          ;   5 05
\0 \d6          ;   6 06
\0 \d7          ;   7 07
\0 \d8          ;   8 08
\0 \d9          ;   9 09
\0 \d10         ;  10 0A
\0 \d11         ;  11 0B
\0 \d12         ;  12 0C
\0 \d13         ;  13 0D
\0 \d14         ;  14 0E
\0 \d15         ;  15 0F
\0 \d16         ;  16 10
\0 \d17         ;  17 11
\0 \d18         ;  18 12
\0 \d19         ;  19 13
\0 \d20         ;  20 14
\0 \d21         ;  21 15
\0 \d22         ;  22 16
\0 \d23         ;  23 17
\0 \d24         ;  24 18
\0 \d25         ;  25 19
\0 \d26         ;  26 1A
\0 \d27         ;  27 1B
\0 \d28         ;  28 1C
\0 \d29         ;  29 1D
\0 \d30         ;  30 1E
\0 \d31         ;  31 1F
\0 \d32         ;  32 20
\0 \d33         ;  33 21
\0 \d34         ;  34 22
\0 \d35         ;  35 23
\0 \d36         ;  36 24
\0 \d37         ;  37 25
\0 \d38         ;  38 26
\0 \d39         ;  39 27
\0 \d40         ;  40 28
\0 \d41         ;  41 29
\0 \d42         ;  42 2A
\0 \d43         ;  43 2B
\0 \d44         ;  44 2C
\0 \d45         ;  45 2D
\0 \d46         ;  46 2E
\0 \d47         ;  47 2F
\0 \d48         ;  48 30
\0 \d49         ;  49 31
\0 \d50         ;  50 32
\0 \d51         ;  51 33
\0 \d52         ;  52 34
\0 \d53         ;  53 35
\0 \d54         ;  54 36
\0 \d55         ;  55 37
\0 \d56         ;  56 38
\0 \d57         ;  57 39
\0 \d58         ;  58 3A
\0 \d59         ;  59 3B
\0 \d60         ;  60 3C
= 3 D           ;  61 3D
\0 \d62         ;  62 3E
\0 \d63         ;  63 3F
\0 \d64         ;  64 40
\0 \d65         ;  65 41
\0 \d66         ;  66 42
\0 \d67         ;  67 43
\0 \d68         ;  68 44
\0 \d69         ;  69 45
\0 \d70         ;  70 46
\0 \d71         ;  71 47
\0 \d72         ;  72 48
\0 \d73         ;  73 49
\0 \d74         ;  74 4A
\0 \d75         ;  75 4B
\0 \d76         ;  76 4C
\0 \d77         ;  77 4D
\0 \d78         ;  78 4E
\0 \d79         ;  79 4F
\0 \d80         ;  80 50
\0 \d81         ;  81 51
\0 \d82         ;  82 52
\0 \d83         ;  83 53
\0 \d84         ;  84 54
\0 \d85         ;  85 55
\0 \d86         ;  86 56
\0 \d87         ;  87 57
\0 \d88         ;  88 58
\0 \d89         ;  89 59
\0 \d90         ;  90 5A
\0 \d91         ;  91 5B
\0 \d92         ;  92 5C
\0 \d93         ;  93 5D
\0 \d94         ;  94 5E
\0 \d95         ;  95 5F
\0 \d96         ;  96 60
\0 \d97         ;  97 61
\0 \d98         ;  98 62
\0 \d99         ;  99 63
\0 \d100        ; 100 64
\0 \d101        ; 101 65
\0 \d102        ; 102 66
\0 \d103        ; 103 67
\0 \d104        ; 104 68
\0 \d105        ; 105 69
\0 \d106        ; 106 6A
\0 \d107        ; 107 6B
\0 \d108        ; 108 6C
\0 \d109        ; 109 6D
\0 \d110        ; 110 6E
\0 \d111        ; 111 6F
\0 \d112        ; 112 70
\0 \d113        ; 113 71
\0 \d114        ; 114 72
\0 \d115        ; 115 73
\0 \d116        ; 116 74
\0 \d117        ; 117 75
\0 \d118        ; 118 76
\0 \d119        ; 119 77
\0 \d120        ; 120 78
\0 \d121        ; 121 79
\0 \d122        ; 122 7A
\0 \d123        ; 123 7B
\0 \d124        ; 124 7C
\0 \d125        ; 125 7D
\0 \d126        ; 126 7E
\0 \d127        ; 127 7F
= C 7           ; 128 80 latin capital letter c with cedilla
= F C           ; 129 81 latin small letter u with diaeresis
= E 9           ; 130 82 latin small letter e with acute
= E 2           ; 131 83 latin small letter a with circumflex
= E 4           ; 132 84 latin small letter a with diaeresis
= E 0           ; 133 85 latin small letter a with grave
= E 5           ; 134 86 latin small letter a with ring above
= E 7           ; 135 87 latin small letter c with cedilla
= E A           ; 136 88 latin small letter e with circumflex
= E B           ; 137 89 latin small letter e with diaeresis
= E 8           ; 138 8A latin small letter e with grave
= E F           ; 139 8B latin small letter i with diaeresis
= E E           ; 140 8C latin small letter i with circumflex
= E C           ; 141 8D latin small letter i with grave
= C 4           ; 142 8E latin capital letter a with diaeresis
= C 5           ; 143 8F latin capital letter a with ring above
= C 9           ; 144 90 latin capital letter e with acute
= E 6           ; 145 91 latin small letter ae
= C 6           ; 146 92 latin capital letter ae
= F 4           ; 147 93 latin small letter o with circumflex
= F 6           ; 148 94 latin small letter o with diaeresis
= F 2           ; 149 95 latin small letter o with grave [Etait "= F 3"]
= F B           ; 150 96 latin small letter u with circumflex  [Etait "= D B"]
= F 9           ; 151 97 latin small letter u with grave [Etait "= D 9"]
= F F           ; 152 98 latin small letter y with diaeresis
= D 6           ; 153 99 latin capital letter o with diaeresis
= D C           ; 154 9A latin capital letter u with diaeresis
= F 8           ; 155 9B latin small letter o with stroke
= A 3           ; 156 9C pound sign
= D 8           ; 157 9D latin capital letter o with stroke
= D 7           ; 158 9E multiplication sign
F l             ; 159 9F dutch guilder sign (ibm437 159)
= E 1           ; 160 A0 latin small letter a with acute
= C D           ; 161 A1 latin small letter i with acute [Etait "= C C"]
= F 3           ; 162 A2 latin small letter o with acute [Etait "= F 2"]
= F A           ; 163 A3 latin small letter u with acute [Etait "= F 9"]
= F 1           ; 164 A4 latin small letter n with tilde
= D 1           ; 165 A5 latin capital letter n with tilde
= A A           ; 166 A6 feminine ordinal indicator
= B A           ; 167 A7 masculine ordinal indicator
= B F           ; 168 A8 inverted question mark
= A E           ; 169 A9 registered sign
= A C           ; 170 AA not sign
= B D           ; 171 AB vulgar fraction one half
= B C           ; 172 AC vulgar fraction one quarter
= A 1           ; 173 AD inverted exclamation mark
= A B           ; 174 AE left-pointing double angle quotation mark
= B B           ; 175 AF right-pointing double angle quotation mark
\0 #            ; 176 B0 light shade
\0 #            ; 177 B1 medium shade
\0 #            ; 178 B2 dark shade
\0 |            ; 179 B3 box drawings light vertical
\0 |            ; 180 B4 box drawings light vertical and left
= C 1           ; 181 B5 latin capital letter a with acute
= C 2           ; 182 B6 latin capital letter a with circumflex
= C 0           ; 183 B7 latin capital letter a with grave
= A 9           ; 184 B8 copyright sign
\0 |            ; 185 B9 box drawings heavy vertical and left
\0 |            ; 186 BA box drawings heavy vertical
\0 +            ; 187 BB box drawings heavy down and left
\0 +            ; 188 BC box drawings heavy up and left
= A 2           ; 189 BD cent sign
= A 5           ; 190 BE yen sign [Etait "= A E"]
\0 +            ; 191 BF box drawings light down and left
\0 +            ; 192 C0 box drawings light up and right
\0 -            ; 193 C1 box drawings light up and horizontal
\0 -            ; 194 C2 box drawings light down and horizontal
\0 |            ; 195 C3 box drawings light vertical and right
\0 -            ; 196 C4 box drawings light horizontal
\0 +            ; 197 C5 box drawings light vertical and horizontal
= E 3           ; 198 C6 latin small letter a with tilde
= C 3           ; 199 C7 latin capital letter a with tilde
\0 +            ; 200 C8 box drawings heavy up and right
\0 +            ; 201 C9 box drawings heavy down and right
\0 =            ; 202 CA box drawings heavy up and horizontal
\0 =            ; 203 CB box drawings heavy down and horizontal
\0 |            ; 204 CC box drawings heavy vertical and right
\0 =            ; 205 CD box drawings heavy horizontal
\0 +            ; 206 CE box drawings heavy vertical and horizontal
= A 4           ; 207 CF currency sign
= F 0           ; 208 D0 latin small letter eth (icelandic)
= D 0           ; 209 D1 latin capital letter eth (icelandic)
= C A           ; 210 D2 latin capital letter e with circumflex
= C B           ; 211 D3 latin capital letter e with diaeresis
= C 8           ; 212 D4 latin capital letter e with grave [Etait "= D 4"]
\0 i            ; 213 D5 latin small letter i dotless
= C D           ; 214 D6 latin capital letter i with acute
= C E           ; 215 D7 latin capital letter i with circumflex
= C F           ; 216 D8 latin capital letter i with diaeresis
\0 +            ; 217 D9 box drawings light up and left
\0 +            ; 218 DA box drawings light down and right
\0 #            ; 219 DB full block
\0 #            ; 220 DC lower half block
= A 6           ; 221 DD broken bar
= C C           ; 222 DE latin capital letter i with grave
\0 #            ; 223 DF upper half block
= D 3           ; 224 E0 latin capital letter o with acute
= D F           ; 225 E1 latin small letter sharp s (german)
= D 4           ; 226 E2 latin capital letter o with circumflex
= D 2           ; 227 E3 latin capital letter o with grave
= F 5           ; 228 E4 latin small letter o with tilde
= D 5           ; 229 E5 latin capital letter o with tilde
= B 5           ; 230 E6 greek small letter mu
= F E           ; 231 E7 latin capital letter thorn (icelandic) [Etait "= D E"]
= D E           ; 232 E8 latin small letter thorn (icelandic) [Etait "= F E"]
= D A           ; 233 E9 latin capital letter u with acute
= D B           ; 234 EA latin capital letter u with circumflex
= D 9           ; 235 EB latin capital letter u with grave
= F D           ; 236 EC latin small letter y with acute
= D D           ; 237 ED latin capital letter y with acute
= A F           ; 238 EE em dash
= B 4           ; 239 EF acute accent
= A D           ; 240 F0 soft hyphen
= B 1           ; 241 F1 plus-minus sign
= =             ; 242 F2 left right double arrow
= B E           ; 243 F3 vulgar fraction three quarters
= B 6           ; 244 F4 pilcrow sign
= A 7           ; 245 F5 section sign
= F 7           ; 246 F6 division sign
= B 8           ; 247 F7 ogonek
= B 0           ; 248 F8 degree sign
= A 8           ; 249 F9 diaeresis
\0 .            ; 250 FA dot above
= B 9           ; 251 FB superscript one
= B 3           ; 252 FC superscript three
= B 2           ; 253 FD superscript two
= B 7           ; 254 FE black square
= A 0           ; 255 FF no-break space
END
