//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMetaSticker.h"

@class UIImage, UIView;

@interface SCCustomViewMetaSticker : SCMetaSticker
{
    UIView *_view;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithType:(unsigned long long)arg1 stickerId:(id)arg2 packId:(id)arg3 view:(id)arg4;
- (id)thumbnailImageWithUserSession:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;

@end

