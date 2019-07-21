//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class UIImageView;

@interface SCBatteryFilterView : SCOverlayFilterView
{
    UIImageView *_imageView;
    long long _orientation;
}

- (void).cxx_destruct;
- (id)displayName;
- (struct CGSize)imageSize;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;
- (struct CGPoint)landscapeImageCenter;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (struct CGPoint)portraitImageCenter;

@end
