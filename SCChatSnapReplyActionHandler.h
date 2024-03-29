//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCCaptureWorkflowResultDelegate-Protocol.h"

@class NSString, SCChatInputViewController, SCUserSession, UIImage, UIViewController;

@interface SCChatSnapReplyActionHandler : NSObject <SCCaptureWorkflowResultDelegate, SCActionHandling>
{
    UIViewController *_presentingViewController;
    SCUserSession *_userSession;
    SCChatInputViewController *_inputController;
    UIImage *_renderedImage;
}

- (void).cxx_destruct;
- (_Bool)_handlePresentSnapReply:(id)arg1;
- (_Bool)_handleRenderSnapReply:(id)arg1 fromSourceView:(id)arg2;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingViewController:(id)arg1 inputController:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

