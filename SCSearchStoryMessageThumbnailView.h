//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCChatSingleMediaThumbnailView-Protocol.h"

@class SCBaseMediaThumbnailView, SCSearchStoryMediaCardView, SCSearchStoryMessageThumbnailViewModel, UILabel, UIViewController;
@protocol SCChatCellGestureDelegate, SCChatFullscreenMediaChatTableCellDelegate;

@interface SCSearchStoryMessageThumbnailView : UIView <SCChatSingleMediaThumbnailView>
{
    UILabel *_unviewableLabel;
    UILabel *_storyInfoLabel;
    SCSearchStoryMediaCardView *_searchStoryMediaCardView;
    SCSearchStoryMessageThumbnailViewModel *_viewModel;
    UIViewController<SCChatCellGestureDelegate> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    SCBaseMediaThumbnailView *_baseMediaThumbnailView;
}

- (void).cxx_destruct;
- (void)_initBaseMediaThumbnailViewWithParentVC:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) SCBaseMediaThumbnailView *baseMediaThumbnailView; // @synthesize baseMediaThumbnailView=_baseMediaThumbnailView;
- (void)dismissFullScreenView;
- (_Bool)fullScreenIsShown;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)mediaId;
- (void)pauseVideo;
- (void)prepareVideoIfNecessary;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)resetContents;
- (void)resetPlayer;
- (void)resetWithOriginalSettings;
- (void)resumeVideo;
- (id)searchStoryMediaCardView;
- (void)setMediaViewModel:(id)arg1;
- (void)setThumbnailSize:(struct CGSize)arg1;
- (id)storyInfoLabel;
- (struct CGSize)thumbnailSize;
- (id)unviewableLabel;

@end
