/* Generated by re2c 2.0.3 */
#line 1 "tokenizer.re"
#include "tokenizer.h"
#include "parser.tab.hh"

namespace SymEngine
{

void Tokenizer::set_string(const std::string &str)
{
    // The input string must be NULL terminated, otherwise the tokenizer will
    // not detect the end of string. After C++11, the std::string is guaranteed
    // to end with \0, but we check this here just in case.
    SYMENGINE_ASSERT(str[str.size()] == '\0');
    cur = (unsigned char *)(&str[0]);
}

int Tokenizer::lex(YYSTYPE &yylval)
{
    for (;;) {
        tok = cur;

#line 24 "tokenizer.cpp"
        {
            unsigned char yych;
            static const unsigned char yybm[] = {
                0,   0,   0,   0,   0,   0,   0,   0,   0,   32,  32,  32,  0,
                32,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
                0,   0,   0,   0,   0,   0,   32,  0,   0,   0,   0,   0,   0,
                0,   0,   0,   0,   0,   0,   0,   0,   0,   192, 192, 192, 192,
                192, 192, 192, 192, 192, 192, 0,   0,   0,   0,   0,   0,   0,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                0,   0,   0,   0,   128, 0,   128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 0,   0,   0,   0,   0,   128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
                128, 128, 128, 128, 128, 128, 128, 128, 128,
            };
            yych = *cur;
            if (yybm[0 + yych] & 32) {
                goto yy6;
            }
            if (yych <= '=') {
                if (yych <= ')') {
                    if (yych <= '!') {
                        if (yych <= 0x00)
                            goto yy2;
                        if (yych <= 0x1F)
                            goto yy4;
                        goto yy9;
                    } else {
                        if (yych == '&')
                            goto yy10;
                        if (yych <= '\'')
                            goto yy4;
                        goto yy10;
                    }
                } else {
                    if (yych <= '/') {
                        if (yych <= '*')
                            goto yy12;
                        if (yych == '.')
                            goto yy13;
                        goto yy10;
                    } else {
                        if (yych <= '9')
                            goto yy14;
                        if (yych <= ';')
                            goto yy4;
                        if (yych <= '<')
                            goto yy17;
                        goto yy18;
                    }
                }
            } else {
                if (yych <= '_') {
                    if (yych <= '@') {
                        if (yych <= '>')
                            goto yy19;
                        if (yych <= '?')
                            goto yy4;
                        goto yy20;
                    } else {
                        if (yych <= 'Z')
                            goto yy22;
                        if (yych <= ']')
                            goto yy4;
                        if (yych <= '^')
                            goto yy10;
                        goto yy22;
                    }
                } else {
                    if (yych <= '|') {
                        if (yych <= '`')
                            goto yy4;
                        if (yych <= 'z')
                            goto yy22;
                        if (yych <= '{')
                            goto yy4;
                        goto yy10;
                    } else {
                        if (yych == '~')
                            goto yy10;
                        if (yych <= 0x7F)
                            goto yy4;
                        goto yy22;
                    }
                }
            }
        yy2:
            ++cur;
#line 42 "tokenizer.re"
            {
                return yytokentype::END_OF_FILE;
            }
#line 117 "tokenizer.cpp"
        yy4:
            ++cur;
        yy5 :
#line 41 "tokenizer.re"
        {
            throw SymEngine::ParseError("Unknown token: '" + token() + "'");
        }
#line 123 "tokenizer.cpp"
        yy6:
            yych = *++cur;
            if (yybm[0 + yych] & 32) {
                goto yy6;
            }
#line 43 "tokenizer.re"
            {
                continue;
            }
#line 131 "tokenizer.cpp"
        yy9:
            yych = *++cur;
            if (yych == '=')
                goto yy25;
            goto yy5;
        yy10:
            ++cur;
        yy11 :
#line 46 "tokenizer.re"
        {
            return tok[0];
        }
#line 141 "tokenizer.cpp"
        yy12:
            yych = *++cur;
            if (yych == '*')
                goto yy20;
            goto yy11;
        yy13:
            yych = *++cur;
            if (yych <= '/')
                goto yy5;
            if (yych <= '9')
                goto yy27;
            goto yy5;
        yy14:
            yych = *++cur;
            if (yybm[0 + yych] & 64) {
                goto yy14;
            }
            if (yych <= '^') {
                if (yych <= '@') {
                    if (yych == '.')
                        goto yy29;
                } else {
                    if (yych == 'E')
                        goto yy33;
                    if (yych <= 'Z')
                        goto yy30;
                }
            } else {
                if (yych <= 'd') {
                    if (yych != '`')
                        goto yy30;
                } else {
                    if (yych <= 'e')
                        goto yy33;
                    if (yych <= 'z')
                        goto yy30;
                    if (yych >= 0x80)
                        goto yy30;
                }
            }
        yy16 :
#line 53 "tokenizer.re"
        {
            yylval.string = token();
            return yytokentype::NUMERIC;
        }
#line 175 "tokenizer.cpp"
        yy17:
            yych = *++cur;
            if (yych == '=')
                goto yy34;
            goto yy11;
        yy18:
            yych = *++cur;
            if (yych == '=')
                goto yy36;
            goto yy5;
        yy19:
            yych = *++cur;
            if (yych == '=')
                goto yy38;
            goto yy11;
        yy20:
            ++cur;
#line 47 "tokenizer.re"
            {
                return yytokentype::POW;
            }
#line 192 "tokenizer.cpp"
        yy22:
            yych = *++cur;
            if (yybm[0 + yych] & 128) {
                goto yy22;
            }
#line 52 "tokenizer.re"
            {
                yylval.string = token();
                return yytokentype::IDENTIFIER;
            }
#line 200 "tokenizer.cpp"
        yy25:
            ++cur;
#line 50 "tokenizer.re"
            {
                return yytokentype::NE;
            }
#line 205 "tokenizer.cpp"
        yy27:
            yych = *++cur;
        yy28:
            if (yych <= '^') {
                if (yych <= '@') {
                    if (yych <= '/')
                        goto yy16;
                    if (yych <= '9')
                        goto yy27;
                    goto yy16;
                } else {
                    if (yych == 'E')
                        goto yy33;
                    if (yych <= 'Z')
                        goto yy30;
                    goto yy16;
                }
            } else {
                if (yych <= 'd') {
                    if (yych == '`')
                        goto yy16;
                    goto yy30;
                } else {
                    if (yych <= 'e')
                        goto yy33;
                    if (yych <= 'z')
                        goto yy30;
                    if (yych <= 0x7F)
                        goto yy16;
                    goto yy30;
                }
            }
        yy29:
            yych = *++cur;
            if (yych == 'E')
                goto yy30;
            if (yych != 'e')
                goto yy28;
        yy30:
            yych = *++cur;
        yy31:
            if (yych <= '^') {
                if (yych <= '9') {
                    if (yych >= '0')
                        goto yy30;
                } else {
                    if (yych <= '@')
                        goto yy32;
                    if (yych <= 'Z')
                        goto yy30;
                }
            } else {
                if (yych <= '`') {
                    if (yych <= '_')
                        goto yy30;
                } else {
                    if (yych <= 'z')
                        goto yy30;
                    if (yych >= 0x80)
                        goto yy30;
                }
            }
        yy32 :
#line 54 "tokenizer.re"
        {
            yylval.string = token();
            return yytokentype::IMPLICIT_MUL;
        }
#line 255 "tokenizer.cpp"
        yy33:
            yych = *(mar = ++cur);
            if (yych <= ',') {
                if (yych == '+')
                    goto yy40;
                goto yy31;
            } else {
                if (yych <= '-')
                    goto yy40;
                if (yych <= '/')
                    goto yy31;
                if (yych <= '9')
                    goto yy42;
                goto yy31;
            }
        yy34:
            ++cur;
#line 48 "tokenizer.re"
            {
                return yytokentype::LE;
            }
#line 271 "tokenizer.cpp"
        yy36:
            ++cur;
#line 51 "tokenizer.re"
            {
                return yytokentype::EQ;
            }
#line 276 "tokenizer.cpp"
        yy38:
            ++cur;
#line 49 "tokenizer.re"
            {
                return yytokentype::GE;
            }
#line 281 "tokenizer.cpp"
        yy40:
            yych = *++cur;
            if (yych <= '/')
                goto yy41;
            if (yych <= '9')
                goto yy42;
        yy41:
            cur = mar;
            goto yy32;
        yy42:
            yych = *++cur;
            if (yych <= '^') {
                if (yych <= '9') {
                    if (yych <= '/')
                        goto yy16;
                    goto yy42;
                } else {
                    if (yych <= '@')
                        goto yy16;
                    if (yych <= 'Z')
                        goto yy30;
                    goto yy16;
                }
            } else {
                if (yych <= '`') {
                    if (yych <= '_')
                        goto yy30;
                    goto yy16;
                } else {
                    if (yych <= 'z')
                        goto yy30;
                    if (yych <= 0x7F)
                        goto yy16;
                    goto yy30;
                }
            }
        }
#line 55 "tokenizer.re"
    }
}

} // namespace SymEngine