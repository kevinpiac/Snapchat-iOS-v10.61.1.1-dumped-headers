//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLabeledGrowingButton.h"

@protocol SCMagicMomentSlidingDelegate;

@interface SCMagicMomentButton : SCLabeledGrowingButton
{
    id <SCMagicMomentSlidingDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_longPress:(id)arg1;
@property(nonatomic) __weak id <SCMagicMomentSlidingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;

@end

