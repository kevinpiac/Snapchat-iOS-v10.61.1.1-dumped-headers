//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCDDMLLinearModelExpander : NSObject
{
}

+ (id)calcChoice:(id)arg1 ddmlRecord:(id)arg2;
+ (id)calcChoiceBoolean:(id)arg1 booleanVariableSpec:(id)arg2 ddmlRecord:(id)arg3;
+ (id)calcChoiceDouble:(id)arg1 doubleVariableSpec:(id)arg2 ddmlRecord:(id)arg3;
+ (id)calcChoiceEnum:(id)arg1 enumVariableSpec:(id)arg2 ddmlRecord:(id)arg3;
+ (id)calcChoices:(id)arg1 ddmlRecord:(id)arg2;
+ (id)calcExpansionVarsX:(id)arg1 ddmlRecord:(id)arg2;
+ (id)calcNoExpansionDoubleVarValue:(id)arg1 ddmlDoubleVariableSpec:(id)arg2 ddmlRecord:(id)arg3;
+ (id)calcNoExpansionVarsValue:(id)arg1 ddmlRecord:(id)arg2;
+ (id)calcPossibilities:(id)arg1;
+ (id)calcPredictorX:(unsigned long long)arg1 possiblilites:(id)arg2 choices:(id)arg3;
+ (id)calcVariablePossibility:(id)arg1;
+ (id)classifyVariablesInPredictor:(id)arg1;
+ (unsigned long long)doubleNeedsExpansion:(id)arg1;
+ (id)expandLinearParamSpec:(id)arg1 ddmlRecord:(id)arg2;
+ (id)expandPredictorIntoX:(id)arg1 record:(id)arg2;
+ (id)transform:(double)arg1 ddmlVariableTransform:(id)arg2;
+ (unsigned long long)variableNeedsExpansion:(id)arg1;

@end

