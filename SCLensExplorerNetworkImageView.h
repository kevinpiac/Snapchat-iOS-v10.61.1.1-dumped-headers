//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSURL;
@protocol SCImageDownloading, SCLensExplorerNetworkImageViewDelegate;

@interface SCLensExplorerNetworkImageView : UIImageView
{
    id <SCImageDownloading> _imageDownloader;
    _Bool _imageDownloaded;
    id <SCLensExplorerNetworkImageViewDelegate> _delegate;
    NSURL *_networkImageURL;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCLensExplorerNetworkImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool imageDownloaded;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2;
@property(retain, nonatomic) NSURL *networkImageURL; // @synthesize networkImageURL=_networkImageURL;
- (void)reset;

@end

