//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCPreviewBlobMediaView;

@interface SCGalleryPreviewSaveEditsThumbnailView : UIView
{
    SCPreviewBlobMediaView *_blobMediaView;
    double _aspectRatio;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 aspectRatio:(double)arg2 previewBlob:(id)arg3 isLaguna:(_Bool)arg4 userSession:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 aspectRatio:(double)arg2 thumbnailFuture:(id)arg3 isLaguna:(_Bool)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

