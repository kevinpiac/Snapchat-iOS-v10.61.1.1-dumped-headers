//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextV2DependencyProvider-Protocol.h"

@class NSString, SCGroupInviteUIDependencies;
@protocol SCContextV2DeepLinkHandler, SCContextV2ImpalaHandler, SCContextV2SocialUnlockFlow, SCContextV2StoryHandler, SCContextV2UserInfoProvider, SCContextV2ViewsProvider;

@interface SCContextV2PhantomDependencyProvider : NSObject <SCContextV2DependencyProvider>
{
    id <SCContextV2ViewsProvider> _viewsProvider;
    id <SCContextV2DeepLinkHandler> _deepLinkHandler;
    id <SCContextV2StoryHandler> _storyHandler;
    id <SCContextV2UserInfoProvider> _userInfoProvider;
    id <SCContextV2ImpalaHandler> _impalaHandler;
    SCGroupInviteUIDependencies *_groupStickerDependencies;
    id <SCContextV2SocialUnlockFlow> _socialUnlockFlow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCContextV2DeepLinkHandler> deepLinkHandler; // @synthesize deepLinkHandler=_deepLinkHandler;
@property(readonly, nonatomic) SCGroupInviteUIDependencies *groupStickerDependencies; // @synthesize groupStickerDependencies=_groupStickerDependencies;
@property(readonly, nonatomic) id <SCContextV2ImpalaHandler> impalaHandler; // @synthesize impalaHandler=_impalaHandler;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
@property(readonly, nonatomic) id <SCContextV2SocialUnlockFlow> socialUnlockFlow; // @synthesize socialUnlockFlow=_socialUnlockFlow;
@property(readonly, nonatomic) id <SCContextV2StoryHandler> storyHandler; // @synthesize storyHandler=_storyHandler;
@property(readonly, nonatomic) id <SCContextV2UserInfoProvider> userInfoProvider; // @synthesize userInfoProvider=_userInfoProvider;
@property(readonly, nonatomic) id <SCContextV2ViewsProvider> viewsProvider; // @synthesize viewsProvider=_viewsProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

