//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCMapDoodle, SCPieSliceView, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol SCMapDoodleCarouselItemViewDelegate;

@interface SCMapDoodleCarouselItemView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_containerView;
    UIImageView *_doodleImageView;
    UILabel *_attributionLabel;
    SCPieSliceView *_timerIconView;
    UILabel *_expirationLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    id <SCMapDoodleCarouselItemViewDelegate> _delegate;
    SCMapDoodle *_doodle;
}

- (void).cxx_destruct;
- (void)_didLongPress:(id)arg1;
- (void)_didTap:(id)arg1;
- (id)backgroundColor;
@property(nonatomic) __weak id <SCMapDoodleCarouselItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCMapDoodle *doodle; // @synthesize doodle=_doodle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setDoodle:(id)arg1 currentUserId:(id)arg2 friendsProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

