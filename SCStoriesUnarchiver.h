//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSMutableArray, NSString;

@interface SCStoriesUnarchiver : NSObject <SCTraceEnabled>
{
    _Bool _unarchivingStories;
    NSMutableArray *_storiesUnarchivingWaitingQueue;
    _Bool _shouldUnarchiveStories;
    _Bool _shouldUnarchive;
    _Bool _unarchiving;
    _Bool _didFinishUnarchivingStories;
}

- (void).cxx_destruct;
- (void)_notifyStoriesAreUnarchived;
- (void)_snapshotPreLaunchViewedMapWithCompletion:(CDUnknownBlockType)arg1;
- (void)_unarchiveStoriesSuccess:(id)arg1;
- (void)_unarchivingStoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_willUnarchiveStories;
- (void)beginUnarchivingStories;
@property(readonly, nonatomic) _Bool didFinishUnarchivingStories; // @synthesize didFinishUnarchivingStories=_didFinishUnarchivingStories;
- (void)interruptUnarchiving;
@property(readonly, nonatomic) _Bool shouldUnarchive; // @synthesize shouldUnarchive=_shouldUnarchive;
@property(readonly, nonatomic) _Bool unarchiving; // @synthesize unarchiving=_unarchiving;
- (void)waitUntilStoriesAreUnarchived:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
