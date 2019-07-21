//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

@class SCMedia, SCSearchRoundedCornerImageView, UIImageView, UILabel;
@protocol SCImageDownloaderCancellable, SCImageDownloading;

@interface SCSearchSportsCardCollectionViewCell : SCSearchCollectionViewCell
{
    UILabel *_homeTeam;
    UILabel *_awayTeam;
    UILabel *_homeScore;
    UILabel *_awayScore;
    UIImageView *_homeImage;
    UIImageView *_awayImage;
    UILabel *_gameStatus;
    SCMedia *_displayedThumbnailMedia;
    id <SCImageDownloaderCancellable> _thumbnailLoaderHandler;
    id _viewModel;
    SCSearchRoundedCornerImageView *_storyCoverImageView;
    id <SCImageDownloading> _imageDownloader;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_layoutWithViewModel;
- (void)_loadThumbnailWithMedia:(id)arg1 imageSize:(id)arg2;
- (void)_updateThumbnail:(id)arg1 withImage:(id)arg2;
- (void)_updateWithViewModel:(id)arg1;
- (void)handleTapAction;
- (_Bool)hasOverridedTapAction;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) SCSearchRoundedCornerImageView *storyCoverImageView; // @synthesize storyCoverImageView=_storyCoverImageView;
- (id)viewModel;

@end

