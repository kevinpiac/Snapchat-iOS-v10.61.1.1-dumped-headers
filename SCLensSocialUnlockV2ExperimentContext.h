//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCLensSocialUnlockV2ExperimentContext : SCExperimentContext
{
    _Bool _smartUnlockEnabled;
    NSString *_socialUnlockType;
}

- (void).cxx_destruct;
- (id)experimentName;
- (void)setupParameters;
@property(readonly, nonatomic) _Bool smartUnlockEnabled; // @synthesize smartUnlockEnabled=_smartUnlockEnabled;
@property(readonly, copy, nonatomic) NSString *socialUnlockType; // @synthesize socialUnlockType=_socialUnlockType;

@end
