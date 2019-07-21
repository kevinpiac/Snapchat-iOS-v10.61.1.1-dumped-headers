//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLSICameraControllerDelegate-Protocol.h"
#import "SCLSIResultsListener-Protocol.h"

@class NSMutableDictionary, NSString, NSUUID, SCLSICameraController, SCLSIResultsProvider, SCSceneIntelligenceListenerAnnouncer;
@protocol SCLSIFrameSelector, SCLSIGTQProvider, SCLocationProvider, SCPerforming;

@interface SCLensSceneIntelligenceController : NSObject <SCLSICameraControllerDelegate, SCLSIResultsListener>
{
    id <SCPerforming> _performer;
    id <SCLSIGTQProvider> _gtqProvider;
    id <SCLocationProvider> _locationProvider;
    SCLSICameraController *_cameraController;
    SCLSIResultsProvider *_resultsProvider;
    id <SCLSIFrameSelector> _frameSelector;
    _Bool _pendingSingleFrameAnalysis;
    NSMutableDictionary *_activeTokens;
    NSUUID *_singleFrameToken;
    SCSceneIntelligenceListenerAnnouncer *_announcer;
    struct CGPoint _startingTouchPoint;
}

- (void).cxx_destruct;
- (id)_activeContexts;
- (void)addListener:(id)arg1;
- (void)analyzeImage:(id)arg1 sessionID:(id)arg2 contexts:(id)arg3 touchPoint:(struct CGPoint)arg4 cameraPosition:(unsigned long long)arg5;
- (void)analyzeSingleFrameWithContexts:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)backend:(id)arg1 request:(id)arg2 receivedError:(id)arg3;
- (void)backend:(id)arg1 request:(id)arg2 receivedResponse:(id)arg3;
- (void)backend:(id)arg1 willProcessRequest:(id)arg2;
- (id)beginAnalysisWithContexts:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)cameraController:(id)arg1 didCaptureFrame:(id)arg2 cameraPosition:(unsigned long long)arg3;
- (void)endAnalysisWithToken:(id)arg1;
- (id)initWithCapturer:(id)arg1 requestManager:(id)arg2 snapTokenManager:(id)arg3 gtqProvider:(id)arg4 locationProvider:(id)arg5;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
