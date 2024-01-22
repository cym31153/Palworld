#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x53 (0x2C4 - 0x271)
// BlueprintGeneratedClass BP_AIAction_NPC_Relax_Wander.BP_AIAction_NPC_Relax_Wander_C
class UBP_AIAction_NPC_Relax_Wander_C : public UBP_AIAction_NPC_Relax_PathWalk_C
{
public:
	uint8                                        Pad_31ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               WalkAreaCenter;                                    // 0x280(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WalkRadius;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WaitSecMin;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WaitSecMax;                                        // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       NodeList;                                          // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        WalkAreaSplit_Num;                                 // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NPC_Relax_Wander_C* GetDefaultObj();

	void OnStuck();
	void Get_Arrivable_Location(const struct FVector& V, bool* Result, struct FVector* Location, const TArray<struct FVector>& PathPoints, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetArrivableLocation_OutLocation, float CallFunc_GetArrivableLocation_OutDistance, bool CallFunc_GetArrivableLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void TryGetTargetLocation(int32 TryCount, bool* Result, struct FVector* Location, bool IsFind, const struct FVector& TargetLocation, int32 Index, const struct FVector& V, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Get_Arrivable_Location_Result, const struct FVector& CallFunc_Get_Arrivable_Location_Location, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_SelectTargetNode_Location, int32 CallFunc_SelectTargetNode_index);
	void SelectTargetNode(struct FVector* Location, int32* Index, int32 SelectedIndex, const TArray<int32>& IndexList, double RadiusHalfLengthSq, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Array_Get_Item, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_VSize2DSquared_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_VSize2DSquared_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	void HasNearPoint(TArray<struct FVector>& Nodes, const struct FVector& Point, bool* Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue);
	void Create_Inside_Nodes(double Radius, int32 SplitNum, TArray<struct FVector>* Nodes, const TArray<struct FVector>& Results, double RadiusSq, double SplitNumHalf, const struct FVector& V, double X, double Y, int32 Temp_int_Variable, double CallFunc_VSizeSquared_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Square_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1);
	void CreateCircumferenceNodes(double Radius, int32 SplitNum, TArray<struct FVector>* Nodes, const TArray<struct FVector>& Results, double M, double N_Sq, double N, double R_Sq, double R, double SplitNumHalf, double CallFunc_Square_ReturnValue, double CallFunc_Square_ReturnValue_1, int32 Temp_int_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Sqrt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void CreateNodes(const struct FVector& Center, double Radius, int32 SplitNum, TArray<struct FVector>* Nodes, const TArray<struct FVector>& Results, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, TArray<struct FVector>& CallFunc_Create_Inside_Nodes_Nodes, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FVector>& CallFunc_CreateCircumferenceNodes_Nodes, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_HasNearPoint_Result, int32 Temp_int_Array_Index_Variable_1, const struct FVector& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_HasNearPoint_Result_1, int32 CallFunc_Array_Add_ReturnValue_1);
	void OnTargetPointUpdateStart(const struct FVector& TargetLocation, int32 Index, const struct FVector& V, int32 CallFunc_RandomIntegerInRange_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FF_NPC_PathWalkPoint& K2Node_MakeStruct_F_NPC_PathWalkPoint, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, TArray<struct FF_NPC_PathWalkPoint>& K2Node_MakeArray_Array, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FF_NPC_PathWalkArray& K2Node_MakeStruct_F_NPC_PathWalkArray, const struct FF_NPC_PathWalkPoint& K2Node_MakeStruct_F_NPC_PathWalkPoint_1, TArray<struct FF_NPC_PathWalkPoint>& K2Node_MakeArray_Array_1, bool CallFunc_TryGetTargetLocation_Result, const struct FVector& CallFunc_TryGetTargetLocation_Location, const struct FF_NPC_PathWalkArray& K2Node_MakeStruct_F_NPC_PathWalkArray_1);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_NPC_Relax_Wander(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, int32 CallFunc_Max_ReturnValue, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, TArray<struct FVector>& CallFunc_CreateNodes_Nodes, double CallFunc_FMax_ReturnValue);
};

}


