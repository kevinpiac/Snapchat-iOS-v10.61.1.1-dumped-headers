//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "SCActionMenuRenderableCell-Protocol.h"
#import "SCActionable-Protocol.h"
#import "SCSnapchatterViewModelConfigurable-Protocol.h"

@class NSString, SCSnapchatterCardViewV2;
@protocol SCActionHandling;

@interface SCSnapchatterChatTableViewCellV2 : SCSavableItemChatTableViewCell <SCActionMenuRenderableCell, SCSnapchatterViewModelConfigurable, SCActionable>
{
    SCSnapchatterCardViewV2 *_snapchatterCardView;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)configureWithActionMenuVC:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4;
- (void)layoutSubviews;
- (void)resetWithOriginalContent;
- (void)setImageDownloader:(id)arg1;
@property(retain, nonatomic) id viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

