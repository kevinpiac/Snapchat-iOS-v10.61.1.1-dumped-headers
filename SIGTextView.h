//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, SIGLabel;

@interface SIGTextView : UITextView
{
    SIGLabel *_placeholderView;
}

- (void).cxx_destruct;
- (void)_didChange;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *placeholder;

@end
