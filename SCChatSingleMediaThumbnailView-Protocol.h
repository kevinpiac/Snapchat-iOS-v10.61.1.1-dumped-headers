//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCActionMenuRenderableCellContentView-Protocol.h"

@class NSString, SCBaseMediaThumbnailView, UIViewController;
@protocol SCChatCellBaseGestureDelegate, SCChatFullscreenMediaChatTableCellDelegate;

@protocol SCChatSingleMediaThumbnailView <SCActionMenuRenderableCellContentView>
- (SCBaseMediaThumbnailView *)baseMediaThumbnailView;
- (void)dismissFullScreenView;
- (_Bool)fullScreenIsShown;
- (id)initWithParentVC:(UIViewController<SCChatCellBaseGestureDelegate> *)arg1 delegate:(id <SCChatFullscreenMediaChatTableCellDelegate>)arg2;
- (NSString *)mediaId;
- (void)pauseVideo;
- (void)prepareVideoIfNecessary;
- (void)resetContents;
- (void)resetPlayer;
- (void)resumeVideo;
- (void)setMediaViewModel:(id)arg1;
- (void)setThumbnailSize:(struct CGSize)arg1;
- (struct CGSize)thumbnailSize;
@end

