//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, SCGradientView, UIScrollView;
@protocol SCContextCardsAboveKeyboardViewDelegate, SCSizeChangeAnnouncingView;

@interface SCContextCardsAboveKeyboardView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    SCGradientView *_mask;
    _Bool _didAskForDismissDuringThisScroll;
    UIView<SCSizeChangeAnnouncingView> *_cardsView;
    _Bool _inExpandedMode;
    id <SCContextCardsAboveKeyboardViewDelegate> _delegate;
    double _yOffset;
}

- (void).cxx_destruct;
- (_Bool)cardsContainTouch:(id)arg1;
@property(nonatomic) __weak id <SCContextCardsAboveKeyboardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool inExpandedMode; // @synthesize inExpandedMode=_inExpandedMode;
- (id)initWithView:(id)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

