//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer, SCSessionRequestManager;

@interface SCDiscoverFeedStoriesEverywhereService : NSObject
{
    SCSessionRequestManager *_requestManager;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)createShareUrlForStoryType:(int)arg1 storyId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1;
- (void)presentShareSheetForURL:(id)arg1 presentingViewController:(id)arg2 shareCompletion:(CDUnknownBlockType)arg3 presentCompletion:(CDUnknownBlockType)arg4;

@end
