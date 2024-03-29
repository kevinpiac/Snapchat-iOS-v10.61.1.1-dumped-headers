//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString, SCImpalaPublicProfileServiceConfig;
@protocol SCCFriendStoring, SCCStoryPlayerPlaying, SCCStoryPlayerStorySnapViewStateProviding, SCComposerFoundationApplicationProtocol, SCImpalaChatActionHandling, SCImpalaCommerceActionHandling, SCImpalaPresentationControlling, SCImpalaPublicProfileActionHandling, SCImpalaPublicProfileActionSheetActionHandling, SCImpalaPublicProfileDebugActionHandling, SCImpalaPublicProfileHandlerProviding, SCImpalaUrlActionHandling;

@interface SCImpalaPublicProfileActionSheetContext : NSObject <SCComposerJsConvertible, NSCopying>
{
    id <SCComposerFoundationApplicationProtocol> _application;
    SCImpalaPublicProfileServiceConfig *_serviceConfig;
    id <SCCStoryPlayerPlaying> _player;
    id <SCImpalaPublicProfileHandlerProviding> _handlerProvider;
    id <SCImpalaPresentationControlling> _presentationController;
    id <SCCStoryPlayerStorySnapViewStateProviding> _storySnapViewStateProvider;
    id <SCImpalaPublicProfileActionHandling> _publicProfileActionHandler;
    id <SCImpalaPublicProfileActionSheetActionHandling> _actionSheetActionHandler;
    id <SCImpalaUrlActionHandling> _urlActionHandler;
    id <SCImpalaCommerceActionHandling> _commerceActionHandler;
    id <SCImpalaChatActionHandling> _chatActionHandler;
    id <SCCFriendStoring> _friendStore;
    id <SCImpalaPublicProfileDebugActionHandling> _publicProfileDebugActionHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCImpalaPublicProfileActionSheetActionHandling> actionSheetActionHandler; // @synthesize actionSheetActionHandler=_actionSheetActionHandler;
@property(retain, nonatomic) id <SCComposerFoundationApplicationProtocol> application; // @synthesize application=_application;
@property(retain, nonatomic) id <SCImpalaChatActionHandling> chatActionHandler; // @synthesize chatActionHandler=_chatActionHandler;
@property(retain, nonatomic) id <SCImpalaCommerceActionHandling> commerceActionHandler; // @synthesize commerceActionHandler=_commerceActionHandler;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) id <SCCFriendStoring> friendStore; // @synthesize friendStore=_friendStore;
@property(retain, nonatomic) id <SCImpalaPublicProfileHandlerProviding> handlerProvider; // @synthesize handlerProvider=_handlerProvider;
- (id)initWithApplication:(id)arg1 serviceConfig:(id)arg2 player:(id)arg3 handlerProvider:(id)arg4 presentationController:(id)arg5 storySnapViewStateProvider:(id)arg6 publicProfileActionHandler:(id)arg7 actionSheetActionHandler:(id)arg8 urlActionHandler:(id)arg9 commerceActionHandler:(id)arg10 chatActionHandler:(id)arg11 friendStore:(id)arg12;
- (id)initWithApplication:(id)arg1 serviceConfig:(id)arg2 player:(id)arg3 handlerProvider:(id)arg4 presentationController:(id)arg5 storySnapViewStateProvider:(id)arg6 publicProfileActionHandler:(id)arg7 actionSheetActionHandler:(id)arg8 urlActionHandler:(id)arg9 commerceActionHandler:(id)arg10 chatActionHandler:(id)arg11 friendStore:(id)arg12 publicProfileDebugActionHandler:(id)arg13;
@property(retain, nonatomic) id <SCCStoryPlayerPlaying> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SCImpalaPresentationControlling> presentationController; // @synthesize presentationController=_presentationController;
@property(retain, nonatomic) id <SCImpalaPublicProfileActionHandling> publicProfileActionHandler; // @synthesize publicProfileActionHandler=_publicProfileActionHandler;
@property(retain, nonatomic) id <SCImpalaPublicProfileDebugActionHandling> publicProfileDebugActionHandler; // @synthesize publicProfileDebugActionHandler=_publicProfileDebugActionHandler;
@property(retain, nonatomic) SCImpalaPublicProfileServiceConfig *serviceConfig; // @synthesize serviceConfig=_serviceConfig;
@property(retain, nonatomic) id <SCCStoryPlayerStorySnapViewStateProviding> storySnapViewStateProvider; // @synthesize storySnapViewStateProvider=_storySnapViewStateProvider;
@property(retain, nonatomic) id <SCImpalaUrlActionHandling> urlActionHandler; // @synthesize urlActionHandler=_urlActionHandler;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

