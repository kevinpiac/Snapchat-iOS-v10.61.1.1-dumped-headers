//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"

@class NSMutableArray, NSString, SCGallerySearchCardViewModel, SCGradientView, SCUserSession, UILabel, UIView;
@protocol SCActionHandling;

@interface SCGallerySearchCollectionViewCell : SCSearchCollectionViewCell <SCActionable>
{
    SCGallerySearchCardViewModel *_viewModel;
    NSMutableArray *_imageViews;
    NSMutableArray *_galleryEntries;
    struct UIEdgeInsets _cellEdgeInsets;
    UILabel *_searchResultTitle;
    UIView *_imageViewsContainer;
    SCGradientView *_gradientView;
    id <SCActionHandling> _actionHandler;
    SCUserSession *_userSession;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_layoutImages;
- (void)_layoutResultTitle;
- (void)_presentView;
- (void)_updateImageViews;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)handleLongPressAction;
- (void)handleTapAction;
- (_Bool)hasOverridedLongPressAction;
- (_Bool)hasOverridedTapAction;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

