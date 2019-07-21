//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCCloudFSCleanUpExperimentContext : SCExperimentContext
{
    _Bool _simulateRemovingLockedFiles;
    _Bool _removeLockedFiles;
    _Bool _removeInvalidFiles;
}

- (id)experimentName;
@property(readonly, nonatomic) _Bool removeInvalidFiles; // @synthesize removeInvalidFiles=_removeInvalidFiles;
@property(readonly, nonatomic) _Bool removeLockedFiles; // @synthesize removeLockedFiles=_removeLockedFiles;
- (void)setupParameters;
@property(readonly, nonatomic) _Bool simulateRemovingLockedFiles; // @synthesize simulateRemovingLockedFiles=_simulateRemovingLockedFiles;

@end
