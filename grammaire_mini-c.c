/*
1 ORDONNER LES NON TERMINAUX A1 , A2 ,..., An ;
2 For i : =1 To n
3 	For j : =1 To i-1
4 		Remplacer les productions 
			de la forme Ai→ AjX par les productions
5 		de la forme Ai → Y1 X | Y2 X| ... | m X
6		avec Aj→ Y1 | Y2 | ... | Ym
7	End
8	Eliminer la récursivité directe
		( immédiate ) des productions de Ai
9 End .

Function , ArgList, Arg, Declaration ,Type ,IdentList ,
Stmt , ForStmt , WhileStmt , IfStmt , CompoundStmt ,
StmtList , Expr , Rvalue , Compare , Mag , Term , Factor 
*/

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