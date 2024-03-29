//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MASConstraint, UIImageView, UILabel;

@interface SCAuxiliaryContentToastView : UIView
{
    _Bool _animating;
    unsigned long long _state;
    double _fractionCompleted;
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    MASConstraint *_topConstraint;
}

- (void).cxx_destruct;
- (id)_textForState:(unsigned long long)arg1;
- (void)_updateContent;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MASConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;

@end

