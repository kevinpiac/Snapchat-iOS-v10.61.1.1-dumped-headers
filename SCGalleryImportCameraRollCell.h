//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PHImageManager, SCGalleryImportCameraRollAssetItem, SCUserSession, UIImageView, UILabel;

@interface SCGalleryImportCameraRollCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_selectedStateImageView;
    UIImageView *_errorStateImageView;
    UILabel *_durationLabel;
    PHImageManager *_imageManager;
    SCGalleryImportCameraRollAssetItem *_assetItem;
    struct CGSize _thumbnailSize;
    _Bool _requestingImage;
    int _imageRequestID;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_updateDurationLabel;
- (void)_updateSelectedStateAndErrorState;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setImageManager:(id)arg1 assetItem:(id)arg2 thumbnailSize:(struct CGSize)arg3 userSession:(id)arg4;
- (void)setSelected:(_Bool)arg1;

@end

