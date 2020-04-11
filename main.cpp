#include <cstdio>

int main() {
	char c;
	bool first = true; // if the (") opens a quotation

	while (scanf("%c", &c) != EOF) {
        if (c == '"') {
            if (first) printf("``");
            else printf("''");
            first = !first; // swap between first (") and second (")
        } else 
            printf("%c", c);
    }

	return 0;
}