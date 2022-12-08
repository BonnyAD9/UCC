#include <stdio.h>

int main()
{
    char *self[] =
    {
        "    };",
        "",
        "    int selfCount = sizeof(self) / sizeof(*self);",
        "",
        "    puts(",
        "        \"#include <stdio.h>\\n\"",
        "        \"\\n\"",
        "        \"int main()\\n\"",
        "        \"{\\n\"",
        "        \"    char *self[] =\\n\"",
        "        \"    {\"",
        "    );",
        "",
        "    for (int i = 0; i < selfCount; ++i)",
        "    {",
        "        printf(\"        \\\"\");",
        "        for (char *c = self[i]; *c; ++c)",
        "        {",
        "            switch (*c)",
        "            {",
        "            case '\\\\':",
        "                printf(\"\\\\\\\\\");",
        "                break;",
        "            case '\\\"':",
        "                printf(\"\\\\\\\"\");",
        "                break;",
        "            default:",
        "                putchar(*c);",
        "                break;",
        "            }",
        "        }",
        "        puts(\"\\\",\");",
        "    }",
        "",
        "    for (int i = 0; i < selfCount; ++i)",
        "        printf(\"%s\\n\", self[i]);",
        "}",
    };

    int selfCount = sizeof(self) / sizeof(*self);

    puts(
        "#include <stdio.h>\n"
        "\n"
        "int main()\n"
        "{\n"
        "    char *self[] =\n"
        "    {"
    );

    for (int i = 0; i < selfCount; ++i)
    {
        printf("        \"");
        for (char *c = self[i]; *c; ++c)
        {
            switch (*c)
            {
            case '\\':
                printf("\\\\");
                break;
            case '\"':
                printf("\\\"");
                break;
            default:
                putchar(*c);
                break;
            }
        }
        puts("\",");
    }

    for (int i = 0; i < selfCount; ++i)
        printf("%s\n", self[i]);
}
