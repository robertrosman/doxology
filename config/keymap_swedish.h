#pragma once
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// Aliases
#define SE_SECT              GRAVE                  // §
#define SE_PLUS              MINUS                  // +
#define SE_ACUTE             EQUAL                  // ´ (dead)
#define SE_ARNG              LEFT_BRACKET           // Å
#define SE_DIAE              RIGHT_BRACKET          // ¨ (dead)
#define SE_OUML              SEMICOLON              // Ö
#define SE_AUML              SINGLE_QUOTE           // Ä
#define SE_SINGLE_QUOTE      NON_US_HASH            // '
#define SE_LESS_THAN         NON_US_BACKSLASH       // <
#define SE_MINUS             SLASH                  // -
#define SE_HALF              LS(SE_SECT)            // ½
#define SE_EXCLAMATION       LS(NUMBER_1)           // !
#define SE_DOUBLE_QUOTES     LS(NUMBER_2)           // "
#define SE_HASH              LS(NUMBER_3)           // #
#define SE_CURR              LS(NUMBER_4)           // ¤
#define SE_PERCENT           LS(NUMBER_5)           // %
#define SE_AMPERSAND         LS(NUMBER_6)           // &
#define SE_SLASH             LS(NUMBER_7)           // /
#define SE_LEFT_PAREN        LS(NUMBER_8)           // (
#define SE_RIGHT_PAREN       LS(NUMBER_9)           // )
#define SE_EQUAL             LS(NUMBER_0)           // =
#define SE_QUESTION          LS(MINUS)              // ?
#define SE_GRAVE             LS(SE_ACUTE)           // ` (dead)
#define SE_CIRC              LS(SE_DIAE)            // ^ (dead)
#define SE_ASTERISK          LS(SE_SINGLE_QUOTE)    // *
#define SE_GREATER_THAN      LS(SE_LESS_THAN)       // >
#define SE_SEMICOLON         LS(COMMA)              // ;
#define SE_COLON             LS(DOT)                // :
#define SE_UNDERSCORE        LS(SE_MINUS)           // _
#define SE_AT                RA(NUMBER_2)           // @
#define SE_POUND             RA(NUMBER_3)           // £
#define SE_DOLLAR            RA(NUMBER_4)           // $
#define SE_EURO              RA(NUMBER_5)           // €
#define SE_LEFT_BRACE        RA(NUMBER_7)           // {
#define SE_LEFT_BRACKET      RA(NUMBER_8)           // [
#define SE_RIGHT_BRACKET     RA(NUMBER_9)           // ]
#define SE_RIGHT_BRACE       RA(NUMBER_0)           // }
#define SE_BACKSLASH         RA(SE_PLUS)              // (backslash)
#define SE_TILDE             RA(SE_DIAE)            // ~ (dead)
#define SE_PIPE              RA(SE_LESS_THAN)       // |
#define SE_MICRO             RA(M)                  // µ

