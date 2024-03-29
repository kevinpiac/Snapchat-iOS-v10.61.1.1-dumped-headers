//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCFuturedImageView, SCLoadingIndicatorView;
@protocol SCCanceling><SCCancelable;

@interface SCFuturedThumbnailView : UIView
{
    unsigned long long _loadingIndicatorStyle;
    SCFuturedImageView *_imageView;
    SCLoadingIndicatorView *_loadingIndicator;
    id <SCCanceling><SCCancelable> _imageLoadingRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 loadingIndicatorStyle:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setImageFuture:(id)arg1 fallbackImageFuture:(id)arg2 placeholderImageFuture:(id)arg3;

@end

