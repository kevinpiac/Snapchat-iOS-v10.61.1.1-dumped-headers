//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureBounce-Protocol.h"

@class SCBounceVideoState, SCPreviewConfiguration, SCPreviewView;
@protocol SCFeatureVideoPlayback, SCPreviewFeatureBounceDelegate;

@interface SCPreviewFeatureBounceImpl : SCFeature <SCPreviewFeatureBounce>
{
    SCPreviewConfiguration *_configuration;
    id <SCFeatureVideoPlayback> _videoPlayback;
    SCPreviewView *_previewView;
    id <SCPreviewFeatureBounceDelegate> _delegate;
    SCBounceVideoState *_state;
}

- (void).cxx_destruct;
- (id)bounceOffset;
- (void)configureWithView:(id)arg1;
@property(nonatomic) __weak id <SCPreviewFeatureBounceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithConfiguration:(id)arg1 videoPlayback:(id)arg2;
@property(readonly, nonatomic) _Bool isCurrentVideoBounceable;
- (double)isPlayingAboveMinimumFramerateThreshhold;
- (void)presentBounceSliderFromToolbarItem:(id)arg1 iconsContainerView:(id)arg2;
- (void)removeBounceVideoForNewBounceIncoming:(_Bool)arg1;
@property(retain, nonatomic) SCBounceVideoState *state; // @synthesize state=_state;
- (void)showBounceVideoWithBounceOffset:(double)arg1 toolbarItem:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

