//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStickerFilterContainer-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SCPreviewStickerView, SCPreviewStickerViewContentView, SCPreviewTooltipBalloon, SCSnapCommonLoggingParameters, UIGestureRecognizer, UIImage, UIView;
@protocol SCFeatureSwipeFilters, SCFeatureVideoPlayback, SCPreviewFeatureStickerContainerDelegate, SCStickerProtocol;

@protocol SCPreviewFeatureStickerContainer <SCStickerFilterContainer>
- (void)addQuickStickerWithId:(NSString *)arg1 image:(UIImage *)arg2 center:(struct CGPoint)arg3;
- (void)addStickerView:(SCPreviewStickerView *)arg1;
- (long long)animatedStickerCount;
@property(nonatomic) __weak id <SCPreviewFeatureStickerContainerDelegate> delegate;
- (void)insertSticker:(id <SCStickerProtocol>)arg1 center:(struct CGPoint)arg2 thumbnail:(UIImage *)arg3 isFromRecents:(_Bool)arg4 createdCustomSticker:(_Bool)arg5 contentView:(SCPreviewStickerViewContentView *)arg6;
- (void)populateSendParameters:(NSMutableDictionary *)arg1;
- (void)removeAllInfoStickersOfType:(unsigned long long)arg1;
- (void)removeTrackingTooltip;
- (void)setAnimatedStickersAnimate:(_Bool)arg1;
- (void)setMaxUniqueStickerId:(long long)arg1;
- (void)setStickersState:(NSArray *)arg1 videoPlayback:(id <SCFeatureVideoPlayback>)arg2 swipeFilters:(id <SCFeatureSwipeFilters>)arg3 completionBlock:(void (^)(NSArray *))arg4;
@property(nonatomic) long long trackingUpdateVersion;
- (NSArray *)staticStickerViews;
- (SCPreviewStickerView *)stickerContainingGesture:(UIGestureRecognizer *)arg1;
- (long long)stickerCount;
- (NSArray *)stickerViews;
- (NSArray *)stickerViewsWithType:(unsigned long long)arg1;
- (NSArray *)stickersState;
@property(readonly, nonatomic) SCPreviewTooltipBalloon *trackingStickerTooltipBalloon;
- (NSArray *)trackingStickerViews;
@property(readonly, nonatomic) UIView *trackingStickersContainerView;
- (void)updateWithSnapCommonLoggingParameters:(SCSnapCommonLoggingParameters *)arg1;
- (NSArray *)videoTrackedImagesForNonTrackingStickersWithCroppingAspectRatio:(double)arg1;
- (NSArray *)videoTrackedImagesForTrackingStickersWithCroppingAspectRatio:(double)arg1;
@end
