//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaSession-Protocol.h"

@class NSString, SCDiscoverLogger, SCStopwatch;

@interface SCDiscoverRemoteVideoSession : NSObject <SCOperaSession>
{
    SCDiscoverLogger *_logger;
    SCStopwatch *_inlineTimer;
    SCStopwatch *_inlineFullscreenTimer;
    SCStopwatch *_inlineInlineTimer;
    SCStopwatch *_videoLandscapeTimer;
    SCStopwatch *_captionTimer;
    _Bool _isPaused;
    _Bool _isRequestingPlayback;
    NSString *_videoSessionID;
    _Bool _startedWithCaptionOn;
    unsigned long long _inlineVideosViewedCount;
    double _inlineVideosTotalTimeViewedSec;
}

- (void).cxx_destruct;
- (void)_reset;
- (void)_updateVideoTimers:(id)arg1;
- (struct CGSize)_videoSizeForParams:(id)arg1;
- (id)init;
- (id)initWithLogger:(id)arg1;
@property(nonatomic) double inlineVideosTotalTimeViewedSec; // @synthesize inlineVideosTotalTimeViewedSec=_inlineVideosTotalTimeViewedSec;
@property(nonatomic) unsigned long long inlineVideosViewedCount; // @synthesize inlineVideosViewedCount=_inlineVideosViewedCount;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
@property(readonly, nonatomic) _Bool startedWithCaptionOn; // @synthesize startedWithCaptionOn=_startedWithCaptionOn;
@property(readonly, nonatomic) double videoInLandscapeModeTimeViewedSeconds;
@property(readonly, nonatomic) double videoWithCaptionOnTimeViewedSeconds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

