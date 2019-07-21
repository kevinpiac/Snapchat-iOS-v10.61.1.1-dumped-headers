//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCGtqUnlockablesViewTrackPersistenceExperimentContext : SCExperimentContext
{
    _Bool _gtqUnlockablesViewTrackPersistenceEnabled;
    _Bool _gtqUnlockablesViewTrackRetryEnabled;
    _Bool _gtqUnlockablesViewTrackBackgroundRetryEnabled;
    long long _gtqUnlockablesViewTrackMaxFileAgeMillis;
    long long _gtqUnlockablesViewTrackMaxFileSizeBytes;
    long long _gtqUnlockablesViewTrackMaxPersistedRequests;
}

- (id)experimentName;
@property(readonly, nonatomic) _Bool gtqUnlockablesViewTrackBackgroundRetryEnabled; // @synthesize gtqUnlockablesViewTrackBackgroundRetryEnabled=_gtqUnlockablesViewTrackBackgroundRetryEnabled;
@property(readonly, nonatomic) long long gtqUnlockablesViewTrackMaxFileAgeMillis; // @synthesize gtqUnlockablesViewTrackMaxFileAgeMillis=_gtqUnlockablesViewTrackMaxFileAgeMillis;
@property(readonly, nonatomic) long long gtqUnlockablesViewTrackMaxFileSizeBytes; // @synthesize gtqUnlockablesViewTrackMaxFileSizeBytes=_gtqUnlockablesViewTrackMaxFileSizeBytes;
@property(readonly, nonatomic) long long gtqUnlockablesViewTrackMaxPersistedRequests; // @synthesize gtqUnlockablesViewTrackMaxPersistedRequests=_gtqUnlockablesViewTrackMaxPersistedRequests;
@property(readonly, nonatomic) _Bool gtqUnlockablesViewTrackPersistenceEnabled; // @synthesize gtqUnlockablesViewTrackPersistenceEnabled=_gtqUnlockablesViewTrackPersistenceEnabled;
@property(readonly, nonatomic) _Bool gtqUnlockablesViewTrackRetryEnabled; // @synthesize gtqUnlockablesViewTrackRetryEnabled=_gtqUnlockablesViewTrackRetryEnabled;
- (void)setupParameters;

@end

