//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LSAComponentManager, NSArray, UIImage;
@protocol SCLensFrameRateCounterListener, SCManagedAudioDataSourceListener><SCManagedVideoDataSourceListener, SCManagedCaptureDeviceProtocol, SCManagedLensProcessorStateListener, SCManagedVideoARDataSource;

@protocol SCManagedLensProcessor <NSObject>
- (_Bool)addFrameRateListener:(id <SCLensFrameRateCounterListener>)arg1;
- (_Bool)addStateListener:(id <SCManagedLensProcessorStateListener>)arg1;
@property(readonly, nonatomic) id <SCManagedAudioDataSourceListener><SCManagedVideoDataSourceListener> capturerListener;
@property(readonly, nonatomic) LSAComponentManager *componentManager;
- (void)detectLensCategoryOnNextFrame:(struct CGPoint)arg1 videoOrientation:(long long)arg2 lenses:(NSArray *)arg3 completion:(void (^)(NSString *, long long, long long))arg4;
- (UIImage *)processImage:(UIImage *)arg1 maxPixelSize:(long long)arg2 devicePosition:(unsigned long long)arg3 fieldOfView:(float)arg4;
- (void)removeFieldOfViewListener;
- (void)removeFrameRateListener:(id <SCLensFrameRateCounterListener>)arg1;
- (void)removeStateListener:(id <SCManagedLensProcessorStateListener>)arg1;
- (void)setAsFieldOfViewListenerForARDataSource:(id <SCManagedVideoARDataSource>)arg1;
- (void)setAsFieldOfViewListenerForDevice:(id <SCManagedCaptureDeviceProtocol>)arg1;
- (void)setAspectRatio:(struct SCAspectRatio)arg1;
- (void)setEffectViewport:(struct SCEffectViewport)arg1;
- (void)setFieldOfView:(float)arg1;
- (void)setLensesActive:(_Bool)arg1 videoOrientation:(long long)arg2;
- (void)setModifySource:(_Bool)arg1;
- (void)setShouldMuteAllSounds:(_Bool)arg1;
- (void)setShouldProcessARFrames:(_Bool)arg1;
@end
