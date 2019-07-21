//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCChatStickerManagerListener-Protocol.h"
#import "SCContextMessagingChatInputAccessoryView-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, SCCircumstanceEngine, SCUserSession, UICollectionView;
@protocol SCStickerStoryReplyViewDelegate;

@interface SCStickerStoryReplyView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, SCContextMessagingChatInputAccessoryView, SCChatStickerManagerListener>
{
    UICollectionView *_collectionView;
    SCUserSession *_userSession;
    NSArray *_stickers;
    NSArray *_storyReplyStickersFromConfig;
    _Bool _isDisplayingStickerSearch;
    id <SCStickerStoryReplyViewDelegate> _delegate;
    SCCircumstanceEngine *_circumstanceEngine;
}

- (void).cxx_destruct;
- (void)_setupViews;
- (void)_updateStoryReplyStickersFromManager;
- (void)_updateWithConfig:(id)arg1;
- (void)_updateWithStickers:(id)arg1 fromStickerSearch:(_Bool)arg2;
@property(retain, nonatomic) SCCircumstanceEngine *circumstanceEngine; // @synthesize circumstanceEngine=_circumstanceEngine;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
@property(nonatomic) __weak id <SCStickerStoryReplyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hide;
- (id)initWithUserSession:(id)arg1;
- (void)layoutSubviews;
- (void)resetStickers;
- (void)show;
- (void)stickerPackagesDidChangeWithCategoryType:(long long)arg1;
- (void)updateWithStickerSearch:(id)arg1;
- (_Bool)willConsumeTouch:(id)arg1 gestureRecognizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
