//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToGroupsSectionEmptyStateExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    _Bool _aboveRecentsEnabled;
    _Bool _showAlert;
}

@property(readonly, nonatomic) _Bool aboveRecentsEnabled; // @synthesize aboveRecentsEnabled=_aboveRecentsEnabled;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)experimentName;
- (void)setupParameters;
@property(readonly, nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;

@end

