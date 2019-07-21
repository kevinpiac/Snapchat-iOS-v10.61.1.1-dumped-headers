//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextV2ViewsProvider-Protocol.h"

@class NSString, SCUserSession;
@protocol SCComposerAvatarNonFriendStoriesFetching;

@interface SCContextV2PhantomViewProvider : NSObject <SCContextV2ViewsProvider>
{
    SCUserSession *_userSession;
    id <SCComposerAvatarNonFriendStoriesFetching> _storiesFetcher;
}

- (void).cxx_destruct;
- (id)createComposerViewForClass:(Class)arg1 actionsHandler:(id)arg2;
- (id)initWithUserSession:(id)arg1 storiesFetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

