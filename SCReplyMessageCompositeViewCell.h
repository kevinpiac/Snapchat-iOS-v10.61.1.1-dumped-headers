//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "SCActionMenuRenderableCell-Protocol.h"

@class SCStoryReplyMediaCardView;

@interface SCReplyMessageCompositeViewCell : SCSavableItemChatTableViewCell <SCActionMenuRenderableCell>
{
    SCStoryReplyMediaCardView *_storyReplyMediaCardView;
}

- (void).cxx_destruct;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)configureWithActionMenuVC:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 delegate:(id)arg4 userSession:(id)arg5;
- (void)layoutSubviews;
- (id)replyMediaThumbnailViewModel;
- (id)replyMessagePayloadViewCell;
- (id)replyMessagePayloadViewModel;
- (void)resetWithOriginalContent;
- (void)setViewModel:(id)arg1;
- (id)thumbnailViewForMediaId:(id)arg1;

@end

