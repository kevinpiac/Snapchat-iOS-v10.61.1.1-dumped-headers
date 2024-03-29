//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"

@class CAShapeLayer, NSString, SCActionModel, UIImageView, UILabel;
@protocol SCActionHandling, SCImageDownloaderCancellable, SCImageDownloading;

@interface SCSearchSuggestionCardCollectionViewCell : SCSearchCollectionViewCell <SCActionable>
{
    UILabel *_displayLabel;
    UIImageView *_image;
    CAShapeLayer *_borderMask;
    struct CGRect _previousBounds;
    id <SCImageDownloaderCancellable> _imageLoaderHandler;
    SCActionModel *_singleTapActionModel;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
    id <SCImageDownloading> _imageDownloader;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_updateImage:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (double)backgroundShapeViewShadowOpacity;
- (void)handleTapAction;
- (_Bool)hasOverridedTapAction;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

