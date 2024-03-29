//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCProfileHeaderStoryViewDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLazy, SCProfileHeaderViewConfiguration, Story;
@protocol SCImageDownloading, SCProfileHeaderAvatarViewDelegate;

@interface SCProfileHeaderAvatarView : UIView <SCTraceEnabled, SCProfileHeaderStoryViewDelegate>
{
    SCLazy *_bitmojiAvatarView;
    SCLazy *_profileHeaderStoryView;
    SCLazy *_profileHeaderSharedStoryView;
    SCLazy *_storyBitmojiAvatarView;
    SCLazy *_backgroundView;
    SCLazy *_ringView;
    Story *_thumbnailStory;
    SCProfileHeaderViewConfiguration *_configuration;
    double _ringViewFrameInset;
    id <SCProfileHeaderAvatarViewDelegate> _delegate;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (void)_showBitmojiView;
- (void)_showProfileHeaderSharedStoryView;
- (void)_showProfileHeaderStoryView;
- (void)_showStoryBitmojiAvatarView;
- (void)_springAnimateViewWithSharedStoryViewHidden:(id)arg1;
- (void)_updateForBitmojiWithConfiguration:(id)arg1;
- (void)_updateForStoryWithBitmojiAvatarWithConfiguration:(id)arg1;
- (void)_updateForStoryWithConfiguration:(id)arg1;
- (void)_updateStoryBitmojiAvatarViewWithStoryNetworkImage:(id)arg1 backgroundViewModel:(id)arg2 bitmojiAvatarViewModel:(id)arg3 ringViewModel:(id)arg4;
- (void)_updateWithBackgroundViewModel:(id)arg1 ringViewModel:(id)arg2;
@property(nonatomic) __weak id <SCProfileHeaderAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishSharedStoryUploadWithPreviousMode:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long displayMode;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithContexts:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

