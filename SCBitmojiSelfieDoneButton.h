//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SCLoadingIndicatorView;

@interface SCBitmojiSelfieDoneButton : UIButton
{
    SCLoadingIndicatorView *_indicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCLoadingIndicatorView *indicator; // @synthesize indicator=_indicator;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)showIndicator:(_Bool)arg1;
- (void)updateConstraints;

@end

