//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SCFrameableContainerView : UIView
{
    _Bool _framing;
    UIView *_contentView;
    struct CGSize _naturalContentSize;
}

- (void).cxx_destruct;
- (struct CGRect)contentFrame;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool framing; // @synthesize framing=_framing;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) struct CGSize naturalContentSize; // @synthesize naturalContentSize=_naturalContentSize;

@end
