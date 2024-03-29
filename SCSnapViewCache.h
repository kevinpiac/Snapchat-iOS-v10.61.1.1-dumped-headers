//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDocObjectContext;
@protocol SCPerforming;

@interface SCSnapViewCache : NSObject
{
    SCDocObjectContext *_docObjectContext;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)_removeExpiredEntries;
- (id)initWithDocObjectContext:(id)arg1;
- (void)markViewedForSnapId:(id)arg1 compositeStoryId:(id)arg2 context:(id)arg3 snapExpirationDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)markViewedForSnapId:(id)arg1 context:(id)arg2 snapExpirationDate:(id)arg3;
- (void)markViewedForSnapId:(id)arg1 context:(id)arg2 snapExpirationDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)markViewedForStory:(id)arg1 context:(id)arg2;
- (void)removeEntriesExpiredAfterDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateViewedStatesInFriendStories:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewedContextsForSnapId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewedContextsForSnapIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewedSnapViewsFromDate:(id)arg1 corpus:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

