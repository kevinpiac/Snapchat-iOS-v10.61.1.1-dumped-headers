//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTWaveformView.h"

#import "SCTV3SpeechActivityListener-Protocol.h"

@class NSString, SCTV3SpeechActivityListenerAnnouncer;

@interface SCTV3WaveformView : SCTWaveformView <SCTV3SpeechActivityListener>
{
    NSString *_username;
    SCTV3SpeechActivityListenerAnnouncer *_speechActivityAnnouncer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 color:(id)arg2 speechActivityAnnouncer:(id)arg3;
- (void)onSpeechActivity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

