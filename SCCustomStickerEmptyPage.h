//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AVPlayerLooper, AVQueuePlayer, NSString, SCLoadingIndicatorView, SCPlayerView, SCUserSession, UIImageView, UILabel;
@protocol SCStickerPickerMenuDelegate;

@interface SCCustomStickerEmptyPage : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *_imageView;
    SCPlayerView *_playerView;
    AVQueuePlayer *_player;
    AVPlayerLooper *_playerLooper;
    UIView *_textContainer;
    UILabel *_button;
    UILabel *_introLabel;
    unsigned long long _sourceType;
    long long _orientation;
    SCUserSession *_userSession;
    SCLoadingIndicatorView *_loadingIndicator;
    id <SCStickerPickerMenuDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_createButtonTapped:(id)arg1;
- (void)_loadIndicator;
- (void)_loadVideo;
- (void)_playVideo;
- (id)_playerItemURL;
- (void)_tryButtonTapped:(id)arg1;
@property(nonatomic) __weak id <SCStickerPickerMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initEmptyAutoSectionWithFrame:(struct CGRect)arg1 sourceType:(unsigned long long)arg2 userSession:(id)arg3;
- (id)initEmptySavedSectionWithFrame:(struct CGRect)arg1 sourceType:(unsigned long long)arg2 userSession:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 sourceType:(unsigned long long)arg2 userSession:(id)arg3;
- (void)layoutSubviews;
- (void)resetLayout;
- (void)stopPlayVideo;
- (void)tryPlayVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

