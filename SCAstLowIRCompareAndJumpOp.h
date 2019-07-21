//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAstLowIRBase.h"

#import "SCAstLowIRJumpOp-Protocol.h"

@class NSString;

@interface SCAstLowIRCompareAndJumpOp : SCAstLowIRBase <SCAstLowIRJumpOp>
{
    long long _variable1;
    long long _variable2;
    long long _jump;
}

- (CDStruct_5074f54c)composeInstructionWithRegisters:(id)arg1;
- (id)initWithVariable1:(long long)arg1 variable2:(long long)arg2;
@property(nonatomic) long long jump; // @synthesize jump=_jump;
- (void)registerRecognition:(id)arg1;
- (_Bool)replaceVariable:(long long)arg1 withANewVariable:(long long)arg2;
@property(readonly, nonatomic) long long variable1; // @synthesize variable1=_variable1;
@property(readonly, nonatomic) long long variable2; // @synthesize variable2=_variable2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

