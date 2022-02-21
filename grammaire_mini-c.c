Function → Type identifier (ArgList ) CompoundStmt
ArgList → Arg | ArgList , Arg
Arg → Type identifier
Declaration → Type IdentList ;
Type → int | float
IdentList → identifier , IdentList | identifier
Stmt → ForStmt
		| WhileStmt
		| Expr ;
		| IfStmt
		| CompoundStmt
		| Declaration
		| ;

ForStmt → for ( Expr ; OptExpr ; OptExpr ) Stmt
OptExpr → Expr | ε
WhileStmt → while ( Expr ) Stmt
IfStmt → if ( Expr ) Stmt ElsePart
ElsePart → else Stmt | ε
CompoundStmt → { StmtList }
StmtList → StmtList Stmt | ε
Expr → identifier = Expr | Rvalue
Rvalue → Rvalue Compare Mag | Mag
Compare → == | < | > | <= | >= | !=
Mag → Mag + Term | Mag - Term | Term
Term → Term * Factor | Term / Factor | Factor
Factor → ( Expr ) | - Factor | + Factor | identifier | number