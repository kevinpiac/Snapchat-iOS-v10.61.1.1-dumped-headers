//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessVideoPlaybackSessionListener-Protocol.h"

@class NSNumber, SCFuture, SCImageProcessLensCommand;
@protocol SCFeatureMagicMomentInPreviewDelegate;

@protocol SCFeatureMagicMomentInPreview <SCImageProcessVideoPlaybackSessionListener>
@property(nonatomic) __weak id <SCFeatureMagicMomentInPreviewDelegate> delegate;
- (void)enableMagicMomentOnNextFrameWithTime:(double)arg1;
- (SCFuture *)lensDataFuture;
@property(readonly, nonatomic) _Bool magicMomentEnabled;
- (SCImageProcessLensCommand *)magicMomentExportCommand;
- (NSNumber *)magicMomentFrameTime;
@property(nonatomic) _Bool toolbarButtonDisabled;
- (void)updateLensProcessingCommand:(SCImageProcessLensCommand *)arg1;
@end

