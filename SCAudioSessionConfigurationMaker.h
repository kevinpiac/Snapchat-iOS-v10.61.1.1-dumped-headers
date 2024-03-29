//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCAudioSessionV1;

@interface SCAudioSessionConfigurationMaker : NSObject
{
    SCAudioSessionV1 *_session;
    NSString *_token;
}

- (void).cxx_destruct;
- (id)initWithAudioSession:(id)arg1 token:(id)arg2;
- (void)releaseAll;
- (void)releaseCallKit;
- (void)releaseCalling;
- (void)releasePlayback;
- (void)releaseProximityRouting;
- (void)releaseRecording;
- (void)requestCallKitWithSpeakers:(_Bool)arg1;
- (void)requestCalling;
- (void)requestListenToCalling;
- (void)requestPlayback;
- (void)requestProximityRouting;
- (void)requestRecording;

@end

