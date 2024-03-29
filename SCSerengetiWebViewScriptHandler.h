//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKScriptMessageHandler-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol SCSerengetiWebViewScriptHandlerDelegate;

@interface SCSerengetiWebViewScriptHandler : NSObject <WKScriptMessageHandler>
{
    NSMutableDictionary *_functionByName;
    id <SCSerengetiWebViewScriptHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCSerengetiWebViewScriptHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)registerFunctionWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)registerFunctionWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

