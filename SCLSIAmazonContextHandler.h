//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLSIContextHandler.h"

@class SCLSIUtilityLensesController, UIGestureRecognizer;
@protocol SCFeatureSceneIntelligenceLensDelegate;

@interface SCLSIAmazonContextHandler : SCLSIContextHandler
{
    SCLSIUtilityLensesController *_utilityLensesController;
    id <SCFeatureSceneIntelligenceLensDelegate> _lensDelegate;
    double _triggerDelay;
    double _startTime;
    UIGestureRecognizer *_recognizer;
}

- (void).cxx_destruct;
- (id)_amazonResultsDataFromSceneIntelligenceResponse:(id)arg1;
- (void)_completeAfter:(double)arg1 startTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleGesture:(id)arg1;
- (id)initWithUtilityLensesController:(id)arg1 lensDelegate:(id)arg2 triggerDelay:(double)arg3;
- (void)sceneIntelligenceController:(id)arg1 request:(id)arg2 failedWithError:(id)arg3;
- (void)sceneIntelligenceController:(id)arg1 request:(id)arg2 receivedResponse:(id)arg3;
- (void)sceneIntelligenceController:(id)arg1 willProcessRequest:(id)arg2;

@end

