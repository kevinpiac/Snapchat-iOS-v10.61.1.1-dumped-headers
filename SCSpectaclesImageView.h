//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface SCSpectaclesImageView : UIImageView
{
    _Bool _cutOutNotch;
}

- (void)_commonInit;
@property(nonatomic) _Bool cutOutNotch; // @synthesize cutOutNotch=_cutOutNotch;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (void)updateMask;

@end

