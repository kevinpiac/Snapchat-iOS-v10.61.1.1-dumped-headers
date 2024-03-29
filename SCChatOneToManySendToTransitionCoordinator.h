//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOneToManyChatSendToDelegate-Protocol.h"

@class NSString, SCSendToTransitionProvider, UIViewController;
@protocol SCSendToScreen;

@interface SCChatOneToManySendToTransitionCoordinator : NSObject <SCOneToManyChatSendToDelegate>
{
    UIViewController<SCSendToScreen> *_sendViewController;
    SCSendToTransitionProvider *_sendToTransitionProvider;
}

- (void).cxx_destruct;
- (void)oneToManyChatViewControllerDidPressSend:(id)arg1 userSession:(id)arg2;
- (void)resetSendToViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

