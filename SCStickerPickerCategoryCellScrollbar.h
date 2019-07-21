//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol SCStickerPickerCategoryCellScrollbarDelegate;

@interface SCStickerPickerCategoryCellScrollbar : UIView <UIGestureRecognizerDelegate>
{
    UIView *_grabber;
    UIView *_stick;
    id <SCStickerPickerCategoryCellScrollbarDelegate> _delegate;
    long long _sectionCount;
    unsigned long long _sourceType;
}

- (void).cxx_destruct;
- (void)_pan:(id)arg1;
@property(nonatomic) __weak id <SCStickerPickerCategoryCellScrollbarDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollToSection:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long sectionCount; // @synthesize sectionCount=_sectionCount;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

