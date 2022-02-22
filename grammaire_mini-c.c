Function → Type identifier (ArgList ) CompoundStmt

ArgList → Type identifier | ArgList , Arg   		

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

ForStmt → for ( Expr ; Expr ; Expr ) Stmt			
		|for ( Expr ; ; Expr ) Stmt 		
		|for ( Expr ; Expr ; ) Stmt
		|for ( Expr ; ; ) Stmt 


WhileStmt → while ( Expr ) Stmt

IfStmt → if ( Expr ) Stmt 							
		|if ( Expr ) Stmt else Stmt


CompoundStmt → { StmtList } | { }

StmtList → StmtList Stmt 							

Expr → identifier = Expr | Rvalue

Rvalue → Rvalue Compare Mag | Mag

Compare → == | < | > | <= | >= | !=

Mag → Mag + Term | Mag - Term | Term

Term → Term * Factor | Term / Factor | Factor

Factor → ( Expr ) | - Factor | + Factor | identifier | number