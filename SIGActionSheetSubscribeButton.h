//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGScaleAnimationButton.h"

@class NSArray, NSString, SIGLabel, UIImageView;

@interface SIGActionSheetSubscribeButton : SIGScaleAnimationButton
{
    SIGLabel *_titleLabel;
    UIImageView *_imageView;
    NSArray *_constraints;
    _Bool _subscribed;
    NSString *_unsubscribedTitle;
    NSString *_subscribedTitle;
}

- (void).cxx_destruct;
- (void)_setBackgroundColor;
- (void)_setImage;
- (void)_setTitle;
- (void)_setupAutolayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(copy, nonatomic) NSString *subscribedTitle; // @synthesize subscribedTitle=_subscribedTitle;
@property(copy, nonatomic) NSString *unsubscribedTitle; // @synthesize unsubscribedTitle=_unsubscribedTitle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

