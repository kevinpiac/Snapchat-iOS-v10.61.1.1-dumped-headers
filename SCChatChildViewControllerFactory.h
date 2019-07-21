//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SCLazy, SCScopedAccess, SCUserSession;
@protocol SCChatViewControllerParentDelegate;

@interface SCChatChildViewControllerFactory : NSObject
{
    SCUserSession *_userSession;
    NSMutableArray *_v3VCPool;
    id <SCChatViewControllerParentDelegate> _parentDelegate;
    SCLazy *_groupsDataTracker;
    SCLazy *_groupsDataCreator;
    SCLazy *_groupsDataMutator;
    SCLazy *_groupSnapchatterRepository;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_snapchattersDataProvider;
    SCScopedAccess *_scopedStoriesAccess;
}

- (void).cxx_destruct;
- (id)dequeueChatV3ViewController;
- (void)enqueue:(id)arg1;
- (id)initWithUserSession:(id)arg1 parentDelegate:(id)arg2 groupsDataTracker:(id)arg3 groupsDataCreator:(id)arg4 groupsDataMutator:(id)arg5 groupSnapchatterRepository:(id)arg6 snapchattersDataMutator:(id)arg7 snapchattersDataProvider:(id)arg8 scopedStoriesAccess:(id)arg9;
- (void)warmup;

@end
