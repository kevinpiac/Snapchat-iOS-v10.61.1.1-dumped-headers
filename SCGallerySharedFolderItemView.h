//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCGalleryEntryThumbnailGeneratorDelegate-Protocol.h"

@class NSString, SCGalleryEntryThumbnailGenerator, UIImageView;
@protocol SCGalleryEntry;

@interface SCGallerySharedFolderItemView : UIView <SCGalleryEntryThumbnailGeneratorDelegate>
{
    id <SCGalleryEntry> _entry;
    SCGalleryEntryThumbnailGenerator *_thumbnailGenerator;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (void)animateTap:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setEntry:(id)arg1 userSession:(id)arg2;
- (void)thumbnailGenerator:(id)arg1 didLoadMiniThumbnail:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateSnapThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateStoryThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGeneratorHasDelayedLoading:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

