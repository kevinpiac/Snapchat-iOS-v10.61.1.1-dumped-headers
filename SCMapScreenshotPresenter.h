//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapScreenshotPresenter-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCOperaImageProvider-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"

@class NSString, NSURL, PreviewViewController, SCMapAttributionInformation, SCOperaViewController, SCSendToTransitionProvider, SCUserSession, UIImage, UIViewController;
@protocol SCSendToScreen;

@interface SCMapScreenshotPresenter : NSObject <SCOperaEventListener, SCOperaImageProvider, SCSendToDelegate, SCSendToNavigationDelegate, SendSnapNavigationControllerDelegate, SCMapScreenshotPresenter>
{
    SCUserSession *_userSession;
    SCMapAttributionInformation *_latestAttribution;
    UIImage *_latestScreenshot;
    NSURL *_latestShareURL;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCOperaViewController *_operaViewController;
    UIViewController<SCSendToScreen> *_sendViewController;
    PreviewViewController *_previewViewController;
}

- (void).cxx_destruct;
- (void)_dismissEverything;
- (void)_presentMapEditFlow;
- (void)_presentPreviewViewController;
- (void)_presentSendToViewController;
- (void)_presentShareURLViewController;
- (id)_registeredEventsForOperaSession;
- (void)_zoomOutThenDismiss;
- (void)didCancelFromPreview:(id)arg1;
- (void)didPostStory;
- (void)didSendChatMessage;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)dismissSendViewController:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;
- (id)miniThumbnailDataForKey:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)presentScreenshotOnViewController:(id)arg1 mapViewport:(id)arg2 screenshot:(id)arg3;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 invitedPhoneNumbers:(id)arg3 storiesPostingConfig:(id)arg4 businessIds:(id)arg5 mischiefs:(id)arg6 businessProfiles:(id)arg7 appStories:(id)arg8 gallery:(_Bool)arg9 inviteRecipientShown:(long long)arg10 additionalText:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

