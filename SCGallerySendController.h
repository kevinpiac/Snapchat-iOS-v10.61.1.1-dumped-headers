//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGallerySendItemsTaskDelegate-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCGallerySendItemsTask, SCGallerySendOperation, SCLazy, SCSendToTransitionProvider, SCUserSession, UIViewController;
@protocol SCGallerySendControllerDelegate, SCStartChatDelegate;

@interface SCGallerySendController : NSObject <SCSendToDelegate, SCGallerySendItemsTaskDelegate, SCTraceEnabled, SCSendToNavigationDelegate>
{
    SCUserSession *_userSession;
    SCGallerySendItemsTask *_sendTask;
    SCGallerySendOperation *_sendOperation;
    NSString *_sourcePageName;
    UIViewController *_fromViewController;
    SCSendToTransitionProvider *_transitionProvider;
    double _statusBarWindowY;
    SCLazy *_arroyoMediaMessageSender;
    SCLazy *_arroyoGroupFilterer;
    _Bool _preselectAddToMyStory;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCGallerySendControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)_allAreLagunaSnapsTakenWithin24Hours:(id)arg1 phAssets:(id)arg2;
- (void)_didDismissSendViewController;
- (_Bool)_hasLongVideoInSnaps:(id)arg1 phAssets:(id)arg2;
- (id)_newSendToConfiguration:(_Bool)arg1 allAreLagunaSnapsWithin24h:(_Bool)arg2 spectaclesOnly:(_Bool)arg3 containsShared:(_Bool)arg4;
- (void)_presentSendViewControllerFromViewController:(id)arg1 isLongVideo:(_Bool)arg2 allAreLagunaSnapsWithin24h:(_Bool)arg3 spectaclesOnly:(_Bool)arg4 containsShared:(_Bool)arg5;
- (void)_processGalleryItemsForSendingAndShowAlertsWhenFails:(id)arg1 gallerySnaps:(id)arg2 shouldShowToast:(_Bool)arg3 fromViewController:(id)arg4 userContext:(id)arg5 sendItemsTaskBlock:(CDUnknownBlockType)arg6;
- (void)_sendWithMercuryConfiguration:(id)arg1 sendViewController:(id)arg2;
- (_Bool)_snapsAreSpectaclesOnly:(id)arg1;
@property(nonatomic) __weak id <SCGallerySendControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissSendViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1;
@property(nonatomic) _Bool preselectAddToMyStory; // @synthesize preselectAddToMyStory=_preselectAddToMyStory;
- (void)presentSendViewControllerWithGalleryEntry:(id)arg1 sourcePageName:(id)arg2 fromViewController:(id)arg3;
- (void)presentSendViewControllerWithGalleryItems:(id)arg1 gallerySnaps:(id)arg2 sourcePageName:(id)arg3 fromViewController:(id)arg4 userContext:(id)arg5;
- (void)presentSendViewControllerWithGallerySnap:(id)arg1 sourcePageName:(id)arg2 fromViewController:(id)arg3 userContext:(id)arg4;
- (void)sendItemsTaskDidPostAllStories:(id)arg1;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 invitedPhoneNumbers:(id)arg3 storiesPostingConfig:(id)arg4 businessIds:(id)arg5 mischiefs:(id)arg6 businessProfiles:(id)arg7 appStories:(id)arg8 gallery:(_Bool)arg9 inviteRecipientShown:(long long)arg10 additionalText:(id)arg11;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

