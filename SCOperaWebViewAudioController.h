//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioSessionListener-Protocol.h"

@class NSString, SCOperaWebViewWrapper;

@interface SCOperaWebViewAudioController : NSObject <SCAudioSessionListener>
{
    SCOperaWebViewWrapper *_webViewWrapper;
}

- (void).cxx_destruct;
- (void)audioSession:(id)arg1 didChangeVolume:(double)arg2;
- (void)dealloc;
- (void)eval:(id)arg1;
- (id)initWithOperaWebViewWrapper:(id)arg1;
- (void)muteWebView;
- (void)syncMuteStatus;
- (void)unmuteWebView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

