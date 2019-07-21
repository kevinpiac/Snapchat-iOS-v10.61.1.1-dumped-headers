//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptionDelegate-Protocol.h"
#import "SCTouchControllable-Protocol.h"

@class NSArray, NSString, SCCaptionState, SCExperimentManager;
@protocol SCCaption, SCCaptionManagerDelegate;

@interface SCCaptionManager : NSObject <SCCaptionDelegate, SCTouchControllable>
{
    SCExperimentManager *_experimentManager;
    _Bool _userDidCycleAllCaptionModes;
    _Bool _isLagunaMedia;
    id <SCCaptionManagerDelegate> _delegate;
    NSArray *_captionModes;
    id <SCCaption> _caption;
    long long _currentModeIndex;
    long long _numberOfCaptionModesCycled;
    SCCaptionState *_initialState;
    SCCaptionState *_temporaryState;
    struct CGRect _originalContentBounds;
    struct CGAffineTransform _currentTransform;
}

+ (id)captionModeForLogging:(_Bool)arg1 alignment:(long long)arg2;
- (void).cxx_destruct;
- (double)_verticalCoordinate:(long long)arg1;
- (id)attributedText;
- (id)bigTextCaptionView;
- (_Bool)canStartEditingCaption;
@property(retain, nonatomic) id <SCCaption> caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSArray *captionModes; // @synthesize captionModes=_captionModes;
- (_Bool)captionPresent;
- (void)cleanUpLastMode;
- (void)clearCaptionCycleState;
@property(nonatomic) long long currentModeIndex; // @synthesize currentModeIndex=_currentModeIndex;
@property(nonatomic) struct CGAffineTransform currentTransform; // @synthesize currentTransform=_currentTransform;
- (id)currentView;
@property(nonatomic) __weak id <SCCaptionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didStartEditingCaption:(id)arg1;
- (void)didSwipeLeftOnCaption;
- (void)didSwipeRightOnCaption;
- (struct CGRect)frame;
- (id)imageFromView;
- (id)initWithCaptionModes:(id)arg1 captionState:(id)arg2 originalContentBounds:(struct CGRect)arg3 experimentManager:(id)arg4;
@property(retain, nonatomic) SCCaptionState *initialState; // @synthesize initialState=_initialState;
- (_Bool)isCaptionTracking;
- (_Bool)isEditing;
- (_Bool)isFullscreen;
- (_Bool)isHidden;
@property(nonatomic) _Bool isLagunaMedia; // @synthesize isLagunaMedia=_isLagunaMedia;
- (id)newViewForCurrentCaptionModeWithOrientation:(long long)arg1 superviewBounds:(struct CGRect)arg2 superviewContentBounds:(struct CGRect)arg3;
- (void)nextMode;
@property(nonatomic) long long numberOfCaptionModesCycled; // @synthesize numberOfCaptionModesCycled=_numberOfCaptionModesCycled;
@property(nonatomic) struct CGRect originalContentBounds; // @synthesize originalContentBounds=_originalContentBounds;
- (void)pan:(id)arg1;
- (void)pinch:(id)arg1;
- (void)prepareCaptionEditing;
- (void)rotation:(id)arg1;
- (struct CGRect)screenshotFrame;
- (id)screenshotImageView;
- (void)setContainerViewTransform:(struct CGAffineTransform)arg1 pauseTransform:(_Bool)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)setLagunaMedia:(_Bool)arg1;
@property(retain, nonatomic) SCCaptionState *temporaryState; // @synthesize temporaryState=_temporaryState;
- (void)setText:(id)arg1;
@property(nonatomic) _Bool userDidCycleAllCaptionModes; // @synthesize userDidCycleAllCaptionModes=_userDidCycleAllCaptionModes;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (id)shareLoggingParameters;
- (void)startEditing;
- (id)state;
- (void)stopEditing;
- (void)stoppedEditing;
- (void)tap:(id)arg1;
- (id)text;
- (void)textChanged;
- (_Bool)textFrameContainsGesture:(id)arg1;
- (void)updateColor:(id)arg1;
- (id)videoTrackedImageWithCroppingAspectRatio:(double)arg1;
- (void)viewDidLayoutSubviewsWithOrientation:(long long)arg1 superviewBounds:(struct CGRect)arg2 superviewContentBounds:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

