#include <stdio.h>
#include <assert.h>

// ---------------------------------------------Problem A--------------------------------------------- //
int alpha_2(char *sub, char *string)
{
    for (; *country != '\0'; country++)
        if (code[0] == country[0])
            code++;

    return code[0] == '\0';
}

void test_alpha_2(void)
{
    char code[3] = {}, country[100] = {};
    scanf("%s", code);
    while (scanf("%s", country) != EOF)
        printf("%s\n", alpha_2(code, country) ? "YES" : "NO");
}

// ---------------------------------------------Problem B--------------------------------------------- //
int alpha_3(char *code, char *country)
{
    for (; *country != '\0'; country++)
        if (code[0] == country[0])
            code++;

    return code[0] == '\0';
}

void test_alpha_3(void)
{
    char code[4] = {}, country[100] = {};
    scanf("%s", code);
    while (scanf("%s", country) != EOF)
        printf("%s\n", alpha_3(code, country) ? "YES" : "NO");
}

// ---------------------------------------------Problem C--------------------------------------------- //
int subsequent(char *sub, char *string)
{
    for (; *string != '\0'; string++)
        if (sub[0] == string[0])
            sub++;

    return sub[0] == '\0';
}

void test_subsequent(void)
{
    char sub[100] = {}, string[100] = {};
    while (scanf("%s%s", sub, string) != EOF)
        printf("%s\n", subsequent(sub, string) ? "YES" : "NO");
}

// ---------------------------------------------Problem D--------------------------------------------- //
void telegrama(char *string, char *output)
{
    for (int i = 0, j = 0; string[i] != '\0'; i++)
        if (string[i] != '_')
        {
            output[j++] = string[i];
            output[j + 1] = '\0';
        }
}

void test_telegrama(void)
{
    char string[1000] = {}, output[1000] = {};
    while (scanf("%s", string) != EOF)
        (telegrama(string, output), printf("%s\n", output));
}

// ---------------------------------------------Unit Test--------------------------------------------- //

void unit_tests()
{
    // unit_test_alpha_2
    assert(alpha_2("pt", "portugal"));
    assert(alpha_2("fr", "franca"));
    assert(alpha_2("lk", "sri_lanka"));
    assert(!alpha_2("de", "alemanha"));
    assert(!alpha_2("zb", "brazil"));
    // unit_test_alpha_3
    assert(alpha_3("prt", "portugal"));
    assert(alpha_3("fra", "franca"));
    assert(alpha_3("lka", "sri_lanka"));
    assert(!alpha_3("deu", "alemanha"));
    assert(!alpha_3("zbr", "brazil"));
    // unit_test_subsequent
    assert(subsequent("ncsd", "necessidade"));
    assert(subsequent("ptlgr", "portalegre"));
    assert(subsequent("lsb", "lisboa"));
    assert(!subsequent("arg", "algarve"));
    assert(!subsequent("telefonia", "telefone"));
    // unit_test_telegram
    char output[1000] = {};
    telegrama("confinamento_obrigatorio_a_partir_de_dezasseis_de_janeiro", output);
    for (int i = 0; output[i] != '\0'; i++)
        assert(output[i] != '_');
    telegrama("atacamos_ao_amanhecer", output);
    for (int i = 0; output[i] != '\0'; i++)
        assert(output[i] != '_');
    telegrama("chegarei_a_tempo____de_____jantar", output);
    for (int i = 0; output[i] != '\0'; i++)
        assert(output[i] != '_');
}

int main(int argc, char **argv)
{
    unit_tests();
    int x = 'A';
    if (argc > 1)
        x = *argv[1];

    switch (x)
    {
    case 'A':
        test_alpha_2();
        break;
    case 'B':
        test_alpha_3();
        break;
    case 'C':
        test_subsequent();
        break;
    case 'D':
        test_telegrama();
        break;
    default:
        printf("%s: Invalid option.\n", argv[1]);
        break;
    }
    return 0;
}