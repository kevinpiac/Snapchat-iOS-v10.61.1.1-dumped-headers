//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSendPreviewMediaView-Protocol.h"

@class AVPlayer, NSMutableArray, NSString, SCCAEAGLView, SCImageProcessVideoPlaybackSession, SCPreviewBlob, SCStickerContainer, SCUserSession, UIImageView;

@interface SCPreviewBlobMediaView : UIView <SCSendPreviewMediaView>
{
    SCPreviewBlob *_previewBlob;
    _Bool _isLaguna;
    SCUserSession *_userSession;
    UIImageView *_imageView;
    SCImageProcessVideoPlaybackSession *_videoPlaybackSession;
    AVPlayer *_player;
    SCCAEAGLView *_glView;
    SCStickerContainer *_trackingStickerContainer;
    NSMutableArray *_trackingCaptionViews;
    UIView *_trackingObjectContainerView;
    UIView *_nontrackingObjectContainerview;
    UIView *_overlayContainerView;
    UIImageView *_maskView;
    _Bool _didSetup;
    _Bool _wantsPlay;
}

- (void).cxx_destruct;
- (id)SCAMediaTypes;
- (_Bool)_hasTrackingOrAnimatedContent;
- (void)_setupViewIfNeeded;
- (void)dealloc;
- (id)initWithPreviewBlob:(id)arg1 isLaguna:(_Bool)arg2 userSession:(id)arg3;
- (void)layoutSubviews;
- (void)pause;
- (void)play;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

