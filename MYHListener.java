// Generated from MYH.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link MYHParser}.
 */
public interface MYHListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link MYHParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(MYHParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(MYHParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#function}.
	 * @param ctx the parse tree
	 */
	void enterFunction(MYHParser.FunctionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#function}.
	 * @param ctx the parse tree
	 */
	void exitFunction(MYHParser.FunctionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#params}.
	 * @param ctx the parse tree
	 */
	void enterParams(MYHParser.ParamsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#params}.
	 * @param ctx the parse tree
	 */
	void exitParams(MYHParser.ParamsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#param}.
	 * @param ctx the parse tree
	 */
	void enterParam(MYHParser.ParamContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#param}.
	 * @param ctx the parse tree
	 */
	void exitParam(MYHParser.ParamContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(MYHParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(MYHParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(MYHParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(MYHParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#ifStmt}.
	 * @param ctx the parse tree
	 */
	void enterIfStmt(MYHParser.IfStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#ifStmt}.
	 * @param ctx the parse tree
	 */
	void exitIfStmt(MYHParser.IfStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#whileStmt}.
	 * @param ctx the parse tree
	 */
	void enterWhileStmt(MYHParser.WhileStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#whileStmt}.
	 * @param ctx the parse tree
	 */
	void exitWhileStmt(MYHParser.WhileStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#declaration}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(MYHParser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#declaration}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(MYHParser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#initDeclarator}.
	 * @param ctx the parse tree
	 */
	void enterInitDeclarator(MYHParser.InitDeclaratorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#initDeclarator}.
	 * @param ctx the parse tree
	 */
	void exitInitDeclarator(MYHParser.InitDeclaratorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#arraySuffix}.
	 * @param ctx the parse tree
	 */
	void enterArraySuffix(MYHParser.ArraySuffixContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#arraySuffix}.
	 * @param ctx the parse tree
	 */
	void exitArraySuffix(MYHParser.ArraySuffixContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#initializer}.
	 * @param ctx the parse tree
	 */
	void enterInitializer(MYHParser.InitializerContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#initializer}.
	 * @param ctx the parse tree
	 */
	void exitInitializer(MYHParser.InitializerContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#initializerList}.
	 * @param ctx the parse tree
	 */
	void enterInitializerList(MYHParser.InitializerListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#initializerList}.
	 * @param ctx the parse tree
	 */
	void exitInitializerList(MYHParser.InitializerListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterAssignment(MYHParser.AssignmentContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitAssignment(MYHParser.AssignmentContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#returnStmt}.
	 * @param ctx the parse tree
	 */
	void enterReturnStmt(MYHParser.ReturnStmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#returnStmt}.
	 * @param ctx the parse tree
	 */
	void exitReturnStmt(MYHParser.ReturnStmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(MYHParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(MYHParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void enterFunctionCall(MYHParser.FunctionCallContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void exitFunctionCall(MYHParser.FunctionCallContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#args}.
	 * @param ctx the parse tree
	 */
	void enterArgs(MYHParser.ArgsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#args}.
	 * @param ctx the parse tree
	 */
	void exitArgs(MYHParser.ArgsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#arrayAccess}.
	 * @param ctx the parse tree
	 */
	void enterArrayAccess(MYHParser.ArrayAccessContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#arrayAccess}.
	 * @param ctx the parse tree
	 */
	void exitArrayAccess(MYHParser.ArrayAccessContext ctx);
	/**
	 * Enter a parse tree produced by {@link MYHParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(MYHParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MYHParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(MYHParser.TypeContext ctx);
}