grammar MYH;

program : (function | declaration | statement)* EOF;
function : type ID '(' params? ')' block;
// ... rest of your rules

ID : ('a'..'z'|'A'..'Z')+;
INT : ('0'..'9')+;
WS : (' '|'\t'|'\r'|'\n')+ {skip();};
