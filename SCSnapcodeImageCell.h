//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapcodeCollectionCell.h"

@class PHAsset, PHImageManager, SCSentinel;

@interface SCSnapcodeImageCell : SCSnapcodeCollectionCell
{
    SCSentinel *_sentinel;
    PHImageManager *_imageManager;
    PHAsset *_photoAsset;
    _Bool _requestingThumbnailImage;
    int _thumbnailImageRequestID;
    struct CGSize _thumbnailSize;
}

- (void).cxx_destruct;
- (void)loadFullScreenImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForReuse;
- (void)setCellViewImageManager:(id)arg1 photoAsset:(id)arg2 itemSize:(struct CGSize)arg3;

@end

