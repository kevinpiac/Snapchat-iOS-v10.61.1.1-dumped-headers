//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedCapturerLensAPI-Protocol.h"

@class LSAComponentManager, NSString, SCLens;
@protocol SCLensProcessingCore, SCManagedAudioDataSourceListener><SCManagedVideoDataSourceListener;

@interface SCManagedCapturerLensAPIAdaptor : NSObject <SCManagedCapturerLensAPI>
{
    NSString *activeLensId;
    SCLens *_appliedLens;
    unsigned long long _appliedLensFeatures;
    SCLens *_currentApplyingLens;
    SCLens *_previousAppliedLens;
    id <SCLensProcessingCore> _inner;
}

- (void).cxx_destruct;
- (void)activateLens:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activateLens:(id)arg1 configuration:(id)arg2 setLensCompletion:(CDUnknownBlockType)arg3 imageOverlayCompletion:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) NSString *activeLensId; // @synthesize activeLensId;
- (_Bool)addLensEffectActivatorListener:(id)arg1;
@property(readonly, copy, nonatomic) SCLens *appliedLens; // @synthesize appliedLens=_appliedLens;
@property(readonly, nonatomic) unsigned long long appliedLensFeatures; // @synthesize appliedLensFeatures=_appliedLensFeatures;
@property(readonly, nonatomic) id <SCManagedAudioDataSourceListener><SCManagedVideoDataSourceListener> capturerListener;
@property(readonly, nonatomic) LSAComponentManager *componentManager;
@property(readonly, copy, nonatomic) SCLens *currentApplyingLens; // @synthesize currentApplyingLens=_currentApplyingLens;
- (void)detectLensCategoryOnNextFrame:(struct CGPoint)arg1 videoOrientation:(long long)arg2 lenses:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithLensProcessingCore:(id)arg1;
@property(retain, nonatomic) id <SCLensProcessingCore> inner; // @synthesize inner=_inner;
@property(readonly, nonatomic) _Bool isLensApplied;
- (_Bool)isLensBeingApplied:(id)arg1;
- (long long)maxPixelSize;
@property(readonly, copy, nonatomic) SCLens *previousAppliedLens; // @synthesize previousAppliedLens=_previousAppliedLens;
- (id)processImage:(id)arg1 maxPixelSize:(long long)arg2 devicePosition:(unsigned long long)arg3 fieldOfView:(float)arg4;
- (void)removeFieldOfViewListener;
- (void)removeLensEffectActivatorListener:(id)arg1;
- (void)resetCurrentApplyingLens;
- (void)setAsFieldOfViewListenerForARDataSource:(id)arg1;
- (void)setAsFieldOfViewListenerForDevice:(id)arg1;
- (void)setAspectRatio:(_Bool)arg1;
- (void)setFieldOfView:(float)arg1;
- (void)setLensesActive:(_Bool)arg1 videoOrientation:(long long)arg2;
- (void)setModifySource:(_Bool)arg1;
- (void)setShouldMuteAllSounds:(_Bool)arg1;
- (void)setShouldProcessARFrames:(_Bool)arg1;
- (_Bool)shouldActivateLens:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

