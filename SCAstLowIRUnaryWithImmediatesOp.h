//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAstLowIRBase.h"

@interface SCAstLowIRUnaryWithImmediatesOp : SCAstLowIRBase
{
    float _immediate1;
    float _immediate2;
    long long _variable;
}

- (CDStruct_135e654f)canonicalForm;
- (CDStruct_5074f54c)composeInstructionWithRegisters:(id)arg1;
- (id)initWithVariable:(long long)arg1 immediate1:(float)arg2 immediate2:(float)arg3;
- (void)registerRecognition:(id)arg1;
- (_Bool)replaceVariable:(long long)arg1 withANewVariable:(long long)arg2;
@property(readonly, nonatomic) long long variable; // @synthesize variable=_variable;

@end

