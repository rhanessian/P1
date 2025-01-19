#include "testScanner.h"
#include "scanner.h"
#include "token.h"

void testScanner() {
// Call scanner to 'parse' the input

	char* tokenNames[] = {"Identifier", "Integer", "Operator/Delimiter", "Keyword", "End of File"};
	char tokenClass[19];
	struct token tok = scanner();
    
	while (1) {
		strcpy(tokenClass, tokenNames[tok.tokenID]);
		
		if (tok.tokenID != EOF_tk) {
			printf("{%s, %s, %d}\n", tokenClass, tok.tkInstance, tok.lineNum);
		} else {
			printf("{%s, EOF, %d}\n", tokenClass, tok.lineNum);
			break;
		}
		instance[0] = '\0';
		tok = scanner();
	}
}
